#include <ESP8266WiFi.h>
const char* ssid     = "Group_5";
const char* password = "12345678";
const uint16_t port= 8080;
const char * host ="192.168.0.108";
WiFiClient client;
void setup() {
Serial.begin(115200);
 pinMode(5, OUTPUT);
WiFi.mode(WIFI_STA);
WiFi.begin(ssid, password);
Serial.print("\r\nConnecting to ");
Serial.print(ssid); Serial.println(" ...");
int i=0;
while (WiFi.status() !=WL_CONNECTED)
{
  delay(1000);
  Serial.print("Waiting for ");
  Serial.print(i++);Serial.println("s...");
}
  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  
Serial.println("Connceting to TCP Server :");
Serial.println(host);
if (!client.connect(host,port)){
  Serial.println("Failed");
  Serial.println("Reconnect in 5 seconds");
  delay(5000);
  return;
}
Serial.println("Send The String to TCP Server :\"I am zhanhansen\"");
client.println(String("I am zhang han sen!!!"));
//String line = client.readStringUntil('\n');
delay(3000);
Serial.println("");
Serial.println("wait 5 sec...");

while (client.available()){
  //String line = client.readStringUntil('\n');
  char val =client.read();
  Serial.println("5555");
  if(val=='0')
  {digitalWrite(5,HIGH);}
  if(val=='1'){digitalWrite(5,LOW);}
}
}
