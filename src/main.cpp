#include <Arduino.h>
#include "data.h"


void setup()
{
  Serial.begin(115200);
  while(!Serial);
  Serial.println("hello");

  Serial.println('START');
  for (int i=0; i < DATA_LEN; ++i)
  {
   Serial.println(data[i]);
  }
  Serial.println('Stop');
}

void loop()
{

}
