#define pir 5
#define buzzer 10


void setup(){
  pinMode(pir, INPUT);
}

void loop(){
  int check = digitalRead(pir);

  if(check>=1){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
  }
}
