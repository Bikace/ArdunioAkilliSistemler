#define trigger A5
#define echo A4

float zaman = 0;
float mesafe = 0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);

  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger,0);
  delayMicroseconds(2);
  digitalWrite(trigger,1);
  delayMicroseconds(10);
  digitalWrite(trigger,0);
  zaman = pulseIn(echo,1);
  mesafe = (zaman*0.034)/2;
  Serial.print("Mesafe: ");
  Serial.println(mesafe);
//***************
  if (mesafe < 15)
  {
    digitalWrite(9,0);
    digitalWrite(10,1);
    digitalWrite(11,1);

    
  }
  else if (mesafe < 25)
  {
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,1);

    
  }
  else if (mesafe < 35)
  {
    digitalWrite(9,0);
    digitalWrite(10,1);
    digitalWrite(11,0);

  }
  else if (mesafe < 45)
  {
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);

  }
  else 
  {
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);

  }
}
