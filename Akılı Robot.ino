int ldr = 14;  // A0
int buton = 15; // A1
int bayrak = 0;
int ses = 16;
//int potansiyometre = 17;

void setup() {
  // put your setup code here, to run once:
  pinMode(ldr,INPUT); 
  pinMode(buton,INPUT);
  //pinMode(potansiyometre,INPUT);
  pinMode(2,OUTPUT); //LED1
  pinMode(3,OUTPUT); // LED2
  pinMode(4,OUTPUT); //LED3
  pinMode(5,OUTPUT);  // LED4
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrDeger = analogRead(ldr);
  int butonDeger = analogRead(buton);
  int sesDeger = analogRead(ses);
  //int potansiyometredeger = analogRead(potansiyometre);
  Serial.println(sesDeger);
  // KODLAR
  if(ldrDeger<400){

    if(butonDeger > 100){
      bayrak = bayrak + 1;
      delay(450);
    }
    if (sesDeger > 180){
      if(bayrak !=0){
      bayrak = bayrak -1;
      delay(450);
      }
    }
    //LED leri yakıyoruz.
    if(bayrak == 0){
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
    }
    else if(bayrak == 1){
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,0);
    }
    else if(bayrak == 2){
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,0);
      digitalWrite(5,0);
    }
    else if(bayrak == 3){
      digitalWrite(2,1);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
    }
    else if(bayrak == 4){
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
    }
    else {
      bayrak = 0;
    }
  }
  else{
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    bayrak = 0;
  }
}
