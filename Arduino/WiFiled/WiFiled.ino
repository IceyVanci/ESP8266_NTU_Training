#include <ESP8266WiFi.h> // 本程序使用 ESP8266WiFi库
#include <ESP8266WiFiMulti.h> // ESP8266WiFiMulti库
#include <ESP8266WebServer.h> // ESP8266WebServer库
//#define  buttonPin 15   //按钮引脚GPIO15
#define LEDPin 5
 //bool pinState;

ESP8266WiFiMulti wifiMulti; // 建立ESP8266WiFiMulti对象
ESP8266WebServer esp8266_server(80);// 建立ESP8266WebServer对象

void setup(void){
  //pinMode(buttonPin, INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600); // 启动串口通讯
//通过addAp函数存储 WiFi名称 WiFi密码
wifiMulti.addAP("名称", "密码"); // 这三条语句通过调用函数addAP来记录3
//个不同的WiFi网络信息。
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
//--------"启动网络服务功能"程序部分开始-------- //
 esp8266_server.begin();//启动网站服务
 esp8266_server.on("/",HTTP_GET, handleRoot);//设置服务器根目录函数
 esp8266_server.on("/LED",HTTP_POST,handleLED);

//--------"启动网络服务功能"程序部分结束--------
Serial.println("HTTP esp8266_server started");
}

void loop(void){
esp8266_server.handleClient();
//pinState = digitalRead(buttonPin);//获取引脚状态
}

void handleRoot() { //处理网站根目录“/”的访问请求


esp8266_server.send(200,"text/html","<form action=\"/LED\"method=\"POST\"><input type=\"submit\"value=\"Toggle LED\"></form>");//向浏览器发送按键状态信息


}
void handleLED()  {
 digitalWrite(5,!digitalRead(5));
 esp8266_server.sendHeader("Location","/");
 esp8266_server.send(303);
}


// 设置处理404情况的函数'handleNotFound'
void handleNotFound(){ // 当浏览器请求的网络资源无法在服务器找到时，
esp8266_server.send(404, "text/plain", "404: Not found");
}
