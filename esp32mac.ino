#include <WiFi.h>


#include <esp_wifi.h>



uint8_t newMACAddress[] = {0x68, 0xdd, 0xb7, 0x4a, 0x23, 0xff};

void setup() {
  // put your setup code here, to run once:
  WiFi.mode(WIFI_AP);//加入wifi模式，以便后面的setmac函数修改地址
  Serial.begin(115200);   // 设置波特率
  WiFi.softAP("3lou","subosubo");
  Serial.println();
  Serial.print("ESP的MAC地址:  ");
  Serial.println(WiFi.macAddress());
  esp_wifi_set_mac(WIFI_IF_AP, &newMACAddress[0]);
  Serial.print("最新设定:MAC Address:  ");
  Serial.println(WiFi.softAPmacAddress());


  

}

void loop() {
  // put your main code here, to run repeatedly:

}
