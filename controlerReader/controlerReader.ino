/*
FS-A3 resiver reader 
*/

int rcCable = 2;
int duration ;

void setup() {
  Serial.begin(9600);
  pinMode(rcCable, INPUT);

}

void loop() {
  duration = pulseIn(rcCable, HIGH);
  Serial.println(duration);
  delay(100);
}
