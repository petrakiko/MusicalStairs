String p0 = "Pin 0: ";
String p1 = "Pin 1: ";
String out = "Object Detected\n";
 
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(3, HIGH);
  delay(1);
  digitalWrite(3, LOW);
    Serial.println("I'm up and running!");
  int sensor0 = (analogRead(A0)*4.9)/9.8;
  int sensor1 = (analogRead(A1)*4.9)/9.8;
  //if(sensor0 <= 80.00){
   // Serial.println(out +  sensor0);
  //}
 Serial.println(p0 + sensor0);
 Serial.println(p1 + sensor1);
 
 delay(500);  
}
-- 
Kelsey Mills
kelseyamills@gmail.com
