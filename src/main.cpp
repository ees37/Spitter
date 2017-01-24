#include <Arduino.h>
#include "data.h"


void setup()
{
  delay(5000);
  Serial.begin(9600);
  while(!Serial);

  for (int i=0; i < DATA_LEN-1; ++i)
  {
   Serial.println(data[i]);
  }
  Serial.println('Stop');
}

void loop()
{
  delay(10000);
}
