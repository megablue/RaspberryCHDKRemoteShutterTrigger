
#define TRIGGERPIN 15
#define DELAY 100

#include <wiringPi.h>
int main (void)
{
  wiringPiSetup();
  pinMode(TRIGGERPIN, OUTPUT);
  digitalWrite(TRIGGERPIN, HIGH); 
  delay(DELAY);
  digitalWrite(TRIGGERPIN, LOW);
  return 0;
}
