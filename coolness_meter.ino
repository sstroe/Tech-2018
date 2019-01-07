void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(4, OUTPUT);
 
 
}

void loop() {
int stan = analogRead(0);

Serial.println(stan);

 
if (stan > 150 && stan < 1000) {
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13, LOW);
}
if (stan > 355 && stan < 1000) {
  digitalWrite(12, HIGH);
}
else {
  digitalWrite(12, LOW);
}
if (stan > 459 && stan < 1000) {
  digitalWrite(11, HIGH);
}
else {
  digitalWrite(11, LOW);
}
if (stan > 560 && stan < 900) {
  digitalWrite(10, HIGH);
}
else {
  digitalWrite(10, LOW);
}
if (stan > 674 && stan < 900 ) {
  digitalWrite(9, HIGH);
}
else {
  digitalWrite(9, LOW);
}
 
if (stan > 700 && stan < 890) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
}

 if (stan > 770 && stan < 710) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
}
 
 if (stan > 50 && stan < 890) {
  digitalWrite(6, HIGH);
}
else {
  digitalWrite(6, LOW);
}

 
if (stan > 710 && stan < 810) {
  digitalWrite(5, HIGH);
}
else {
  digitalWrite(5, LOW);
}

if (stan > 990 && stan < 100) {
  digitalWrite(4, HIGH);
}
else {
  digitalWrite(4, LOW);
}




}
