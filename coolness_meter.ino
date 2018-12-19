void setup() {
 Serial.begin(9600);
}

void loop() {
int stan = analogRead(0);

Serial.println(stan);

 
if (stan > 150 && stan < 1000) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
}
if (stan > 355 && stan < 900) {
  digitalWrite(6, HIGH);
}
else {
  digitalWrite(6, LOW);
}
if (stan > 459 && stan < 800) {
  digitalWrite(5, HIGH);
}
else {
  digitalWrite(5, LOW);
}
if (stan > 560 && stan < 750) {
  digitalWrite(4, HIGH);
}
else {
  digitalWrite(4, LOW);
}
if (stan > 674 && stan < 700 ) {
  digitalWrite(3, HIGH);
}
else {
  digitalWrite(3, LOW);
}
 
if (stan > 268 && stan < 990) {
  digitalWrite(2, HIGH);
}
else {
  digitalWrite(2, LOW);
}

 if (stan > 770 && stan < 700) {
  digitalWrite(10, HIGH);
}
else {
  digitalWrite(10, LOW);
}
 
 if (stan > 875 && stan < 600) {
  digitalWrite(9, HIGH);
}
else {
  digitalWrite(9, LOW);
}

 
if (stan > 890 && stan < 910) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
}


}
