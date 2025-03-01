#include<ESP8266WiFi.h>
const char* ssid ="Group_5";             
const char* password ="12345678";        
const uint16_t port = 2222;              
const char * host ="192.168.0.108";      
int sensorvalue = 0;                     
int outvalue = 0;                       
WiFiClient client;                       
void setup() {
 Serial.begin(115200);                   
 pinMode(A0, INPUT);                    
 pinMode(5, OUTPUT);                     
 WiFi.mode(WIFI_STA);                    
 //-----------------------//
 WiFi.begin(ssid, password);
 Serial.print("\r\nConnecting to ");
 Serial.print(ssid);
 Serial.println(" ...");
 int i = 0;
 while (WiFi.status()!= WL_CONNECTED) {
  delay(1000);
  Serial.print("waiting for ");
  Serial.print(i++);
  Serial.println("s...");
 }
  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}
//----单片机连接WiFi网络----//
void loop() {

  sensorvalue= analogRead(A0);
  outvalue=map(sensorvalue,0,1024,0,330);
  Serial.println(outvalue);
  delay(150);
//----主要程序代码----//
  if(outvalue > 50) {
    digitalWrite(5,LOW);
  }
  if(outvalue <= 50) {
    digitalWrite(5,HIGH);
    delay(350);                     
    digitalWrite(5, LOW);   
    delay(350);                     
    Serial.println("Warning!!!");
    client.println("Warning!!!");
    return;
  } 
//-------------------//
  if(!client.connect(host,port)){
    Serial.println("Failed");
    Serial.println("Reconnect in 5 seconds");
    delay(2000);
    return;
  }
//----网络连接失败后重新连接----//
  delay(150);
}
