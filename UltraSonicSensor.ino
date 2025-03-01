
const int trigpin=5;
const int echopin=4;
int LED=25;

long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 duration=pulseIn(echopin,HIGH);
 distance=duration *0.034/2;
 Serial.println("Distance: ");
 Serial.println(distance);
 if(distance>20)
 {
  digitalWrite(LED,HIGH);
 }
 else{
  digitalWrite(LED,LOW);
 }
}
