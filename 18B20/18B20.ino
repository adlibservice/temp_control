//검색한 곳 : https://www.pinterest.co.kr/pin/647251777676309960/
//원래소스 : https://naylampmechatronics.com/blog/46_Tutorial-sensor-de-temperatura-DS18B20.html
#include <OneWire.h>                
#include <DallasTemperature.h>
OneWire ourWire(2);                //2번 핀에 센서가 접속
DallasTemperature sensors(&ourWire); //센서 접속주소에서 값을 읽어옴
void setup() {
delay(1000);
Serial.begin(9600);
sensors.begin();   //센서에서 값을 읽어옴
}
void loop() {
sensors.requestTemperatures();   //센서에서 온도값을 읽어옴
float temp= sensors.getTempCByIndex(0); //섭씨온도로 저장 ºC
Serial.print("Temperatura= ");
Serial.print(temp);
Serial.println(" C");
delay(100);                     
}
