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

  int scale = map(analogRead(0), 0, 1023, 0, 5);
  int len = 500;
  float t1 = 220;
  float t2 = 246.94;
  float t3 = 277.18;
  float t4 = 293.66;
  float t5 = 329.63;

  if (scale == 0) {

    len = 500;
    t1 = 220;
    t2 = 246.94;
    t3 = 277.18;
    t4 = 293.66;
    t5 = 329.63;
  }
  if (scale == 1) {

    len = 500;
    t1 = 261.63;
    t2 = 293.66;
    t3 = 329.63;
    t4 = 349.23;
    t5 = 392.00;
  }
  if (scale == 2) {

    len = 500;
    t1 = 293.66;
    t2 = 329.63;
    t3 = 349.23;
    t4 = 392.00;
    t5 = 440.00;
  }
  if (scale == 3) {

    len = 500;
    t1 = 349.23;
    t2 = 392.00;
    t3 = 440.00;
    t4 = 466.16;
    t5 = 523.25;
  }
  if (scale == 4) {

    len = 500;
    t1 = 392.00;
    t2 = 440.00;
    t3 = 493.88;
    t4 = 523.25;
    t5 = 587.33;
  }
  if (scale == 5) {

    len = 500;
    t1 = 220;
    t2 = 246.94;
    t3 = 277.18;
    t4 = 293.66;
    t5 = 329.63;
  }


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
