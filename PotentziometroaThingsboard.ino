#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// ======== THINGSBOARD KONFIGURAZIOA ========
#define TOKEN "A5hS0PxiGIXNvUFALw96"
#define THINGSBOARD_SERVER "thingsboard.cloud"
#define THINGSBOARD_PORT 1883

// ======== WIFI DATUAK ========
const char* ssid = "OLP";
const char* password = "oteitzaLP";

// ======== OBJEKTUAK ========
WiFiClient espClient;
PubSubClient client(espClient);

// ======== ZERRA-HORTZA ALDAGAIAK ========
int balioa = 0;
int pausua = 5;
bool gora = true;

// =============================

void setup() {
  Serial.begin(115200);
  Serial.println();

  Serial.println("WiFi konektatzen...");
  Serial.print("SSID: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi konektatuta!");

  // ======== WIFI INFORMAZIOA ========
  Serial.print("IP helbidea: ");
  Serial.println(WiFi.localIP());

  Serial.print("MAC helbidea: ");
  Serial.println(WiFi.macAddress());

  Serial.print("RSSI seinale indarra: ");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");

  Serial.print("Gateway: ");
  Serial.println(WiFi.gatewayIP());

  Serial.print("Subnet mask: ");
  Serial.println(WiFi.subnetMask());

  Serial.println("-----------------------------");

  client.setServer(THINGSBOARD_SERVER, THINGSBOARD_PORT);
}

void reconnect() {
  while (!client.connected()) {
    Serial.println("ThingsBoard konektatzen...");

    if (client.connect("ESP8266_Client", TOKEN, NULL)) {
      Serial.println("ThingsBoard konektatuta");
    } else {
      Serial.print("Errorea, rc=");
      Serial.print(client.state());
      Serial.println(" berriro saiatzen 2s barru");
      delay(2000);
    }
  }
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  // ======== ZERRA HORTZA SORTU ========

  if (gora) {
    balioa += pausua;
    if (balioa >= 100) {
      balioa = 100;
      gora = false;
      Serial.println("Gailurra -> beherantz hasten");
    }
  } else {
    balioa -= pausua;
    if (balioa <= 0) {
      balioa = 0;
      gora = true;
      Serial.println("Behea -> gorantz hasten");
    }
  }

  // ======== JSON ========
  String payload = "{";
  payload += "\"zerra_hortza\":";
  payload += balioa;
  payload += "}";

  client.publish("v1/devices/me/telemetry", payload.c_str());

  Serial.print("Bidalia -> ");
  Serial.println(payload);

  delay(500);
}
