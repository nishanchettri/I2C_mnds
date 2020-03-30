#include <Wire.h>

int x = 0;
void setup() 
{
  Wire.begin(); 
}
void loop() {
  Wire.beginTransmission(10); // transmit to device #10
  Wire.write(x);              // sends x 
  Wire.endTransmission();    // stop transmitting
  x++; // Increment x
  delay(500);
}
