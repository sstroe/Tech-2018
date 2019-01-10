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
  // put your main code here, to run repeatedly:
  int stan = analogRead(0);
  Serial.println(stan);
  if (stan > 100) {
   blink();
   for(int i = 13; i > random(4,13); i--) {
    digitalWrite(i, HIGH);
    delay(1000);
   }
   delay(2000);
   blink();
   turnLightsOff();
  }
 
}

void blink(){
  turnLightsOn();
  delay(200);
  turnLightsOff();
  delay(200);
    turnLightsOn();
  delay(200);
  turnLightsOff();
  delay(200);
    turnLightsOn();
  delay(200);
  turnLightsOff();
  delay(200);
  
}

void turnLightsOn() {
  for (int i = 4; i < 14; i++) {
    digitalWrite(i, HIGH);
  }
}

void turnLightsOff() {
  for (int i = 4; i < 14; i++) {
    digitalWrite(i, LOW);
  }
}
