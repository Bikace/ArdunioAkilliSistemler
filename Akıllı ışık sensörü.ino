double potSeviyesi;
void setup() {
  // put your setup code here, to run once:
  pinMode(A2,INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potSeviyesi = analogRead(A2);
  Serial.println(potSeviyesi);

  if (potSeviyesi <30)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
  } 
  else if (potSeviyesi < 60)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,0);
    digitalWrite(5,0);
  }
  else if (potSeviyesi < 100)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,0);
  }
  else
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
  }
}
