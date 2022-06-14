int ENA = 9; // motor hız kontrolleri için
int IN1 = 6;
int IN2 = 7;

int ENB = 3; 
int IN3 = 5;
int IN4 = 4;


#define ENASpeed 80  // motorların hızını 100 olarak ayarlıyoruz.
#define ENBSpeed 85

int Sensor1 = 0; //sensörlerin ilk değerleri 0 olarak giriliyor.
int Sensor2 = 0;
int Sensor3 = 0;
int Sensor4 = 0;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT); //motorlar çıkış pinidir. output olarak atanır.
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(Sensor1, INPUT); // sensörler in (giriş) pinidir.
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT);
  pinMode(Sensor4, INPUT);
  
}

void loop(){

  
  analogWrite(ENA, ENASpeed); // belirlediğimiz hızları aktif ediyoruz.
  analogWrite(ENB, ENBSpeed);

  
  Sensor1 = digitalRead(10); // sensörlerin bağlantı pinlerini giriyoruz.
  Sensor2 = digitalRead(11);
  Sensor3 = digitalRead(12);
  

 

  if(Sensor3 == LOW && Sensor2 == LOW && Sensor1 == HIGH){

   
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH); // sensör değerlerine göre motorların yönlerini belirliyoruz

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }

  else if (Sensor4 == HIGH && Sensor3 == LOW  && Sensor2 == LOW && Sensor1 == LOW){

  
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW); // aynı durumu öteki sensörler için de yapıyoruz

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }

  else if(Sensor4 == LOW && Sensor3 == LOW && Sensor2 == HIGH && Sensor1 == LOW){

 
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);  
  }
    else if(Sensor4 == LOW && Sensor3 == HIGH && Sensor2 == LOW && Sensor1 == LOW){

 
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);  
  }
    else if(Sensor4 == LOW && Sensor3 == HIGH && Sensor2 == HIGH && Sensor1 == LOW){

 
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);  
  }
  
}
