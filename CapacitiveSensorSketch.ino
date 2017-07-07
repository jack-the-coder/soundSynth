#include "CapacitiveSensor.h"

/*
 * jack-the-coder's soundSynth 2
 * 
 * BASED ON THE FOLLOWING: 
 * 
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */


CapacitiveSensor cs_7_8 = CapacitiveSensor(7, 8);
CapacitiveSensor cs_7_9 = CapacitiveSensor(7, 9);
CapacitiveSensor cs_7_10 = CapacitiveSensor(7, 10);
CapacitiveSensor cs_7_11 = CapacitiveSensor(7, 11);
CapacitiveSensor cs_7_12 = CapacitiveSensor(7, 12);
void setup()                    
{
   cs_7_8.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop()                    
{
    long start = millis();
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

    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing

    Serial.print(total0);                  // print sensor output 1
    Serial.print("\t");
    Serial.print(total1);                  // print sensor output 2
    Serial.print("\t");
    Serial.println(total2);                // print sensor output 3

    delay(10);                             // arbitrary delay to limit data to serial port



    if (total0 > 200) {
      Serial.println("KSJSF");

      tone(13, 440);
      delay(200);
      noTone(13);
    }
}
