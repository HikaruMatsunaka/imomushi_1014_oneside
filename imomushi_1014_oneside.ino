
#include <VarSpeedServo.h> 

VarSpeedServo servo13;

const int ledPin = 5; // LEDのピン番号

void setup() {
  servo13.attach(13);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // サーボを動かしつつLEDの明るさを変える
  for(int x = 0; x <= 120; x += 5) {
    servo13.write(x, 30, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加
    analogWrite(ledPin, pwmValue);
  }

  for(int x = 120; x <= 140; x += 5) {
    servo13.write(x, 15, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

  for(int x = 140; x <= 160; x += 5) {
    servo13.write(x, 10, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

  for(int x = 160; x <= 180; x += 5) {
    servo13.write(x, 5, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }


  // サーボを反対方向に動かしつつLEDの明るさを変える
  for(int x = 180; x >= 60; x -= 5) {
    servo13.write(x, 30, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

  for(int x = 60; x >= 40; x -= 5) {
    servo13.write(x, 15, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

  for(int x = 40; x >= 20; x -= 5) {
    servo13.write(x, 10, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

  for(int x = 20; x >= 0; x -= 5) {
    servo13.write(x, 5, true);
    int pwmValue = 255L - (255L * x) / 180L;
    Serial.print("pwmValue: ");
    Serial.println(pwmValue);  // この行を追加
    Serial.print("x: ");
    Serial.println(x);  // この行を追加

    analogWrite(ledPin, pwmValue);
  }

}

