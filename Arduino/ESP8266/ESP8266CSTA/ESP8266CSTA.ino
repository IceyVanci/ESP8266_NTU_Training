// Load Wi-Fi library


#include <ESP8266WiFi.h>


// Replace with your network credentials
const char* ssid     = "Group_5";
const char* password = "12345678";

const uint16_t port = 2222;
const char * host = "192.168.0.118";

WiFiClient client; //创建一个tcpclient连接

// Set web server port number to 80
WiFiServer server(80);

// Variable to store the HTTP request
String header;

// Auxiliar variables to store the current output state
String output5State = "off";
String output13State = "off";

// Assign output variables to GPIO pins
const int output5 = 5;
const int output13 = 13;

void setup() {
  Serial.begin(115200);
  // Initialize the output variables as outputs
  pinMode(output5, OUTPUT);
  pinMode(output13, OUTPUT);
  // Set outputs to LOW
  digitalWrite(output5, LOW);
  digitalWrite(output13, LOW);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("\r\nConnecting to ");
  Serial.print(ssid);
  Serial.println(" ...");

  int i = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.print("waiting for ");
    Serial.print(i++);
    Serial.println("s...");
  }
Serial.println(" ");
Serial.println("WIFI connecter!");
Serial.print("IP address");
 Serial.println(WiFi.localIP());


  IPAddress IP = WiFi.localIP();
 
  server.begin();
}

void loop()
{

 Serial.println("Connecting to TCP Server :");
   Serial.println("host");
   if (!client.connect(host,port))
   {
    Serial.println("Falied");
   Serial.println("Reconnect in 5 seconds");
   delay(5000);
   return;
   }
 Serial.println("Send the String to TCP Server :\"I am ESP8266\"");
 client.println(String("I am ESP8266"));


   Serial.println("host");


String line = client.readStringUntil('\n');
Serial.println(line);
while (client.available())
{
  String line = client.readStringUntil('\n');
  if (line == "0")
  {
    digitalWrite(5, HIGH);
  }
  else if (line == "1")
  {
    digitalWrite(5, LOW);
  }
}


 
}