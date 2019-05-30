/*
  Cepheids pulsing period & brightness

  This example shows how to fade 2 LEDs on pins 3 and 5 using the analogWrite()
  function, to simulate Cepheids stars.
  
  This is to illustrate the relation between period & brightness in Cepheid stars, 
  as discovered by Henrietta Swan Leavitt in 1908.
  
  Read https://en.wikipedia.org/wiki/Cepheid_variable

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int shortPeriodCepheid = 3;           // the PWM pin the LED is attached to
int shortPeriodCepheidFadeAmount = 5;    // how many points to fade the LED by
int shortPeriodCepheidBrightness = 0;    // how bright the LED is
int longPeriodCepheid  = 5;           // the PWM pin the LED is attached to
int longPeriodCepheidFadeAmount = 2;    // how bright the LED is
int longPeriodCepheidBrightness = 0;    // how bright the LED is

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 3 and 5 to be an output:
  pinMode(shortPeriodCepheid, OUTPUT);
  pinMode(longPeriodCepheid, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the shortPeriodCepheidBrightness of shortPeriodCepheid:
  analogWrite(shortPeriodCepheid, shortPeriodCepheidBrightness);
  analogWrite(longPeriodCepheid, longPeriodCepheidBrightness);

  // change the shortPeriodCepheidBrightness for next time through the loop:
  shortPeriodCepheidBrightness = shortPeriodCepheidBrightness + shortPeriodCepheidFadeAmount;
  longPeriodCepheidBrightness = longPeriodCepheidBrightness + longPeriodCepheidFadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (shortPeriodCepheidBrightness <= 0 || shortPeriodCepheidBrightness >= 100) {
    shortPeriodCepheidFadeAmount = -shortPeriodCepheidFadeAmount;
  }
  if (longPeriodCepheidBrightness <= 0 || longPeriodCepheidBrightness >= 254) {
    longPeriodCepheidFadeAmount = -longPeriodCepheidFadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
