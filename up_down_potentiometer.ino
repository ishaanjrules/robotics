float data = 0;
float value = 0;


void setup()
{
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.println(data);
}

void loop()
{
  data = analogRead(A0);
  value = data / 4.0;
  analogWrite(5, value);
   Serial.println(data);
}
