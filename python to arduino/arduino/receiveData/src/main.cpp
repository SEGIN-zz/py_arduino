#include <Arduino.h>

String reciveArdData ;

void setup()
{
  Serial.begin(115200);

}

void loop()
{
  while (Serial.available() == 0)
  {
    // do nothing
  }
  reciveArdData = Serial.readStringUntil('\r');
  Serial.println(reciveArdData);

  
}