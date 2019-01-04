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
if (stan > 355 && stan < 900) {
  digitalWrite(12, HIGH);
}
else {
  digitalWrite(12, LOW);
}
if (stan > 459 && stan < 800) {
  digitalWrite(11, HIGH);
}
else {
  digitalWrite(11, LOW);
}
if (stan > 560 && stan < 750) {
  digitalWrite(10, HIGH);
}
else {
  digitalWrite(10, LOW);
}
if (stan > 674 && stan < 700 ) {
  digitalWrite(9, HIGH);
}
else {
  digitalWrite(9, LOW);
}
 
if (stan > 700 && stan < 990) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
}

 if (stan > 770 && stan < 700) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
}
 
 if (stan > 875 && stan < 600) {
  digitalWrite(6, HIGH);
}
else {
  digitalWrite(6, LOW);
}

 
if (stan > 890 && stan < 910) {
  digitalWrite(5, HIGH);
}
else {
  digitalWrite(5, LOW);
}


}
