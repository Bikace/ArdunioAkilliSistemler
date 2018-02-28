#define sesSensorA 5
#define led 3
int durum;

void setup() {
  Serial.begin(9600);
  pinMode(sesSensorA, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  durum = analogRead(sesSensorA);
  Serial.println(durum);
  if (durum > 85){
    digitalWrite(3,1);
    delay(200);
  }
  else{
    digitalWrite(3,0);
    delay(200);
  }
}
