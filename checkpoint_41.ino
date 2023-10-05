#include "Arduino.h"
#include "WiFi.h"
#include <HTTPClient.h>
#include "DHT.h"

HTTPClient client;
#define DHTTYPE DHT11

char nomeWifi[] = "iPhone Airton";
char senhaWifi[] = "2153818aa";
char serverAddress[] = "https://api.tago.io/data";
char contentHeader[] = "application/json";
char tokenHeader[] = "9f26994a-ceaa-4a71-94fb-26ec628ce0fe";

int DHTPin = 4;
int ldrPin = 2;

DHT dht(DHTPin, DHTTYPE);

float temperatura;
float umidade;
float luminosidade;

void setup() {
  pinMode(DHTPin, INPUT);
  pinMode(ldrPin, INPUT);
  dht.begin();
  Serial.begin(9600);
  init_wifi();
}

void loop() {
  temperatura = dht.readTemperature();
  umidade = dht.readHumidity();
  luminosidade = analogRead(ldrPin);

  send_temperatura();
  send_umidade();
  send_luminosidade();
  delay(5000);
}

void init_wifi() {
  Serial.println("Conectando WiFi");
  Serial.print("Wifi: ");
  Serial.println(nomeWifi);
  WiFi.begin(nomeWifi, senhaWifi);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi Conectado");
  Serial.print("Meu IP eh: ");
  Serial.println(WiFi.localIP());
}

void send_temperatura() {
  char postData[300];
  int statusCode = 0;
  strcpy(postData, "{\n\t\"variable\": \"temperatura\",\n\t\"value\": ");
  char anyData[30];
  dtostrf(temperatura, 6, 2, anyData);
  strncat(postData, anyData, 100);
  strcat(postData, ",\n\t\"unit\": \"C\"\n\t}\n");
  Serial.println(postData);
  client.begin(serverAddress);
  client.addHeader("Content-Type", contentHeader);
  client.addHeader("Device-Token", tokenHeader);
  statusCode = client.POST(postData);
  delay(2000);
  // read the status code and body of the response
  Serial.print("Status code: ");
  Serial.println(statusCode);
  Serial.println("End of POST to TagoIO");
  Serial.println();
}

void send_umidade() {
  char postData[300];
  int statusCode = 0;
  strcpy(postData, "{\n\t\"variable\": \"umidade\",\n\t\"value\": ");
  char anyData[30];
  dtostrf(umidade, 6, 2, anyData);
  strncat(postData, anyData, 100);
  strcat(postData, ",\n\t\"unit\": \"%\"\n\t}\n");
  Serial.println(postData);
  client.begin(serverAddress);
  client.addHeader("Content-Type", contentHeader);
  client.addHeader("Device-Token", tokenHeader);
  statusCode = client.POST(postData);
  delay(2000);
  // read the status code and body of the response
  Serial.print("Status code: ");
  Serial.println(statusCode);
  Serial.println("End of POST to TagoIO");
  Serial.println();
}

void send_luminosidade() {
  char postData[300];
  int statusCode = 0;
  strcpy(postData, "{\n\t\"variable\": \"luminosidade\",\n\t\"value\": ");
  char anyData[30];
  dtostrf(luminosidade, 6, 2, anyData);
  strncat(postData, anyData, 100);
  strcat(postData, ",\n\t\"unit\": \"Lúmen\"\n\t}\n");
  Serial.println(postData);
  client.begin(serverAddress);
  client.addHeader("Content-Type", contentHeader);
  client.addHeader("Device-Token", tokenHeader);
  statusCode = client.POST(postData);
  delay(2000);
  // read the status code and body of the response
  Serial.print("Status code: ");
  Serial.println(statusCode);
  Serial.println("End of POST to TagoIO");
  Serial.println();
}
