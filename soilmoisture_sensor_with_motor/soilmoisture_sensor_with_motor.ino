int motor =2;
int redled=7;
const int VAL_PROBE=A0;
const int MOISTURE_LEVEL=500;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}  pinMode(2,OUTPUT);


void loop() {
  int moisture= analogRead(VAL_PROBE);
  Serial.println(moisture);
  if(moisture>MOISTURE_LEVEL)
  {
  digitalWrite(2,HIGH);
  digitalWrite(7,LOW);
  Serial.println("motor is on");
  delay(1000);
  }
  else
  {
  digitalWrite(2,LOW);
  digitalWrite(7,HIGH);
  Serial.println("motor is off");
  delay(1000);
  }
}
