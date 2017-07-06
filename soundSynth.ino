void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);

  pinMode(13, OUTPUT);


}



void loop() {
  
  int len = 500;
  int t1 = 220;
  int t2 = 246.94;
  int t3 = 277.18;
  int t4 = 293.66;
  int t5 = 329.63;
  
  if (digitalRead(2) == HIGH) {
    tone(13, t1);
    delay(len);
    noTone(13);


  }

  if (digitalRead(3) == HIGH) {
    tone(13, t2);
    delay(len);
    noTone(13);


  }
  if (digitalRead(4) == HIGH) {
    tone(13, t3);
    delay(len);
    noTone(13);


  }
  if (digitalRead(5) == HIGH) {
    tone(13, t4);
    delay(len);
    noTone(13);


  }
  if (digitalRead(6) == HIGH) {
    tone(13, t5);
    delay(len);
    noTone(13);




}
}
