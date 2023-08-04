# Project P.E.D.R.O.
Pedro (Personal Emotional Display of Robust Obstruction) is an arduino based
LED mask.
    ![Completed mask](/Images/mask1.jpg)
## Versions
Due to time constrains, I won't be able to finish the original plan of making
a Watch_Dogs 2 Wrench-style LED matrix, since I don't know anything about electronics
and the event I want to attend with it is this September. <br>
That means that the first version of this mask is gonna be much simpler, with two
LED strips using charlieplexing arranged in circles.<br>
I still want to make rev 2 with fully animated LED matrix display, but that will
have to wait for later™️.
## Version 1
### Bill of Materials
- 24*LEDs, ⌀ 3mm
- 4*330 Ohm resistors
- 1*1K Ohm resistor
- Arduino Nano
- 4 buttons; leftover mechanical keyboard switchies are used in my case
- some wire
- Paintball/airsoft style mask. [I used this one](https://www.aliexpress.com/item/1005005392812734.html?spm=a2g0o.order_list.order_list_main.63.6b571802MzwtKa)
    ![Mask I used](/images/mask.png)
- 3D printer for all the enclousures and stuff
- 2 longer or 4 shorter zip ties
### Plans
- Arduino Nano in enclousure with buttons mounted on a belt
- Power from a power bank in a pocket / bag
- 4 wires bunched together using a cable sleeve running from Arduino on the belt to LEDS in the mask
### Build Guide
1. Print LED jig, fill it with LEDs and wire it according to the diagram; it should look similar to this
    ![Photo of leds wired](/Images/wiring.jpg)
2. Repeat step 1, you need two LED circles for eyes
3. Print files maskJig.stl, caseBottom.stl and caseTop.stl
4. Insert LED circles to the maskJig in a way that mimics the face of a clock (LED 12 at the top, LED 6 at the bottom, etc.), then screw it to the mask
5. Bunch 4 1m cables together and use them to connect the LED circles to Arduino pins 12, 11, 10 and 9
6. Connect 1K Ohm resistor to arduino ground, then one leg of buttons to pins 6, 5, 4, 3, and all of the other legs to the resistor
7. Flash the firmware
8. Enjoy your mask :)
### Demo
![Demo of mask 1](/Images/demo.gif)
## To do
- [x] Design circuit
- [x] Write software
- [x] Design parts for 3D printing
- [x] Print it
- [x] Wire it
- [x] Build it
- [x] Share circuit plan