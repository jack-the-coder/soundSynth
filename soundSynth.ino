#include "CapacitiveSensor.h"

CapacitiveSensor cs_7_8 = CapacitiveSensor(7, 8);
CapacitiveSensor cs_7_9 = CapacitiveSensor(7, 9);
CapacitiveSensor cs_7_10 = CapacitiveSensor(7, 10);
CapacitiveSensor cs_7_11 = CapacitiveSensor(7, 11);
CapacitiveSensor cs_7_12 = CapacitiveSensor(7, 12);


void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
  // CAPACITIVE SENSOR 
/*  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  */

  cs_7_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_7_9.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_7_10.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_7_11.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_7_12.set_CS_AutocaL_Millis(0xFFFFFFFF);

}



void loop() {

  int scale = map(analogRead(0), 0, 1023, 0, 4);
  int len = analogRead(5) + 50;
  float t1 = 220;
  float t2 = 246.94;
  float t3 = 277.18;
  float t4 = 293.66;
  float t5 = 329.63;

  long total0 = cs_7_8.capacitiveSensor(30);
  long total1 = cs_7_9.capacitiveSensor(30);
  long total2 = cs_7_10.capacitiveSensor(30);
  long total3 = cs_7_11.capacitiveSensor(30);
  long total4 = cs_7_12.capacitiveSensor(30);

  long sens = 500;
  

  if (scale == 0) {

    t1 = 220;
    t2 = 246.94;
    t3 = 277.18;
    t4 = 293.66;
    t5 = 329.63;
  }
  if (scale == 1) {


    t1 = 261.63;
    t2 = 293.66;
    t3 = 329.63;
    t4 = 349.23;
    t5 = 392.00;
  }
  if (scale == 2) {


    t1 = 293.66;
    t2 = 329.63;
    t3 = 349.23;
    t4 = 392.00;
    t5 = 440.00;
  }
  if (scale == 3) {


    t1 = 349.23;
    t2 = 392.00;
    t3 = 440.00;
    t4 = 466.16;
    t5 = 523.25;
  }
  if (scale == 4) {

    t1 = 392.00;
    t2 = 440.00;
    t3 = 493.88;
    t4 = 523.25;
    t5 = 587.33;
  }



  if (total0 > sens) {
    tone(13, t1);
    delay(len);
    noTone(13);


  }

  if (total1 > sens) {
    tone(13, t2);
    delay(len);
    noTone(13);


  }
  if (total2 > sens) {
    tone(13, t3);
    delay(len);
    noTone(13);


  }
  if (total3 > sens) {
    tone(13, t4);
    delay(len);
    noTone(13);


  }
  if (total4 > sens) {
    tone(13, t5);
    delay(len);
    noTone(13);
  }

// regular buttons
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
