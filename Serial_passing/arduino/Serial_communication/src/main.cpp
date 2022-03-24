# include <Arduino.h>

   unsigned  long count = 0;

void setup ()
{
  Serial.begin(115200);

}

void loop ()
{
  while (true)
  {
    count++;
    delay(100);
    Serial.println(count);
  }
}