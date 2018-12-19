 

void setup() {
 Serial.begin(9600);
}

void loop() {
int stan = analogRead(0);

Serial.println(stan);


if (stan > 150) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
}
if (stan > 355 ) {
  digitalWrite(6, HIGH);
}
else {
  digitalWrite(6, LOW);
}
if (stan > 459) {
  digitalWrite(5, HIGH);
}
else {
  digitalWrite(5, LOW);
}
if (stan > 560) {
  digitalWrite(4, HIGH);
}
else {
  digitalWrite(4, LOW);
}
if (stan > 674) {
  digitalWrite(3, HIGH);
}
else {
  digitalWrite(3, LOW);
}
 
if (stan > 268) {
  digitalWrite(2, HIGH);
}
else {
  digitalWrite(2, LOW);
}

 if (stan > 770) {
  digitalWrite(10, HIGH);
}
else {
  digitalWrite(10, LOW);
}
 
 if (stan > 875) {
  digitalWrite(9, HIGH);
}
else {
  digitalWrite(9, LOW);
}

 
if (stan > 890 && stan < 905) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
}

 
}




























