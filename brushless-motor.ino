#define speed 9
#define direction 10

void setup()
{
  pinMode(speed, OUTPUT);
  pinMode(direction, OUTPUT);
}

void loop()
{

  digitalWrite(direction, 1);
  analogWrite(speed, 50);
   delay(5000);
   digitalWrite(direction, 0);
  analogWrite(speed, 80);
}