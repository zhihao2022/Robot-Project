#include <Arduino.h>

int LED = 13;//定义数字接口10,对应
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);//设置数字10 口为输出接口
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);//IO 口10 设置为高电平，点亮数字10 口LED

  delay(500);//延时500MS

  digitalWrite(LED,LOW);//IO 口10 设置为低电平，熄灭数字10 口LED

  delay(500);//延时500MS
}
