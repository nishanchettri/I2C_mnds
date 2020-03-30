#include <Wire.h>

int x = 0;
void setup() 
{
  Serial.begin(9600);
  Wire.begin(10); 
  Wire.onReceive(rx);
}
void rx(int size) 
{
  x = Wire.read();    // read one character from the I2C
}
void loop()
{
  Serial.println(x);
}
