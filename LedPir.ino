#define LED 13
#define PIR 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  int x=digitalRead(PIR);
  if(x==HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}