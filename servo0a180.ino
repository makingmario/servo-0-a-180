// Incluimos la librería para Servo
#include <Servo.h>

Servo servoBase;//Asigno un nombre específico

void setup() {
   servoBase.attach(9);//Pin a utilizar para servo
   servoBase.write(0);  //asigno 0 al servo motor
}

void loop() {

  for(int i=0; i<=180; i=i+10)
  {
   servoBase.write(i);
   delay(2000);
  }
 }
