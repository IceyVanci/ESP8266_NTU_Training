#include <ESP8266WiFi.h> // 本程序使用 ESP8266WiFi库
#include <ESP8266WiFiMulti.h> // ESP8266WiFiMulti库
#include <ESP8266WebServer.h> // ESP8266WebServer库
#define  buttonPin 15   //按钮引脚GPIO15
bool pinState;
ESP8266WiFiMulti wifiMulti; // 建立ESP8266WiFiMulti对象
ESP8266WebServer esp8266_server(80);// 建立ESP8266WebServer对象
void setup(void){
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); // 启动串口通讯
//通过addAp函数存储 WiFi名称 WiFi密码
wifiMulti.addAP("名称", "密码"); // 这三条语句通过调用函数addAP来记录3个不同的WiFi网络信息。
wifiMulti.addAP("Group_5", "12345678");
int i = 0;
while (wifiMulti.run() != WL_CONNECTED) {
  delay(1000);
  Serial.print(i++); Serial.print(' ');
}
 Serial.println('\n');
 Serial.print("Connected to ");
 Serial.println(WiFi.SSID());
 Serial.print("IP address:\t");
 Serial.println(WiFi.localIP());
 esp8266_server.begin();
 esp8266_server.on("/", handleRoot);
Serial.println("HTTP esp8266_server started");
}
void loop(void){
esp8266_server.handleClient();
pinState = digitalRead(buttonPin);//获取引脚状态
}

void handleRoot() { //处理网站根目录“/”的访问请求
String displayPinState;             //储存按键状态的字符串变量
if(pinState == HIGH)
{                //当按键引脚为高电平
displayPinState = "Button State:HIGH";//字符串赋值高电平信息
}
else{                               //当按键引脚为低电平
  displayPinState= "Button State:LOW";//字符串赋值低电平信息
}
esp8266_server.send(200,"text/plain",displayPinState);//向浏览器发送按键状态信息
}
void handleNotFound(){ // 当浏览器请求的网络资源无法在服务器找到时，
esp8266_server.send(404, "text/plain", "404: Not found");
}
