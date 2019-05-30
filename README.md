# android_astronomy

The goal of this project is to explain using a LED varying in intensity and frequency how astronomers are able to mesure distances between galaxies.

A Cepheid variable is a type of star that pulsates radially, varying in both diameter and temperature and producing changes in brightness with a well-defined stable period and amplitude.

A strong direct relationship between a Cepheid variable's luminosity and pulsation period established Cepheids as important indicators of cosmic benchmarks for scaling galactic and extragalactic distances. This robust characteristic of classical Cepheids was discovered in 1908 by Henrietta Swan Leavitt after studying thousands of variable stars in the Magellanic Clouds. This discovery allows one to know the true luminosity of a Cepheid by simply observing its pulsation period. This in turn allows one to determine the distance to the star, by comparing its known luminosity to its observed brightness.

More infos:
https://en.wikipedia.org/wiki/Cepheid_variable

- The code to upload in your Arduino is in the cepheids.ino file.
- schematics.png shows the logical connections shema.
- layout.png shows how to connect your Arduino to a board.

Cepheids pulsing period & brightness

This example shows how to fade 2 LEDs on pins 3 and 5 using the analogWrite() function, to simulate Cepheids stars.
  
This is to illustrate the relation between period & brightness in Cepheid stars, as discovered by Henrietta Swan Leavitt in 1908.
  
The analogWrite() function uses PWM, so if you want to change the pin you're using, be sure to use another PWM capable pin. On most Arduino, the PWM pins are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

This example code is in the public domain.

Forked from http://www.arduino.cc/en/Tutorial/Fade

You can edit the code using the Arduino Editor:
https://create.arduino.cc/editor/fconrotte/5fc51e46-d3e2-46ef-8f35-2deccc3d5cf6
