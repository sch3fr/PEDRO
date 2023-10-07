# Project P.E.D.R.O.
Pedro (Personal Emotional Display of Robust Obstruction) is an arduino based
LED mask.
    ![Completed mask](/Images/mask1.jpg)
## How it works
There are two sets of charlieplexed LEDs inside the mask visor. The leds are connected to a control box (that I mounted 
to my belt using zip ties). Inside of the control box there is Arduino Nano, controling the whole thing. On the front of
the control box there are 4 buttons for changing the LED animatins. The mask is powered by powerbank I shoved into my 
pocket.
## Versions
Due to time constrains, I wasnt't able to finish the original plan of making
a Watch_Dogs 2 Wrench-style LED matrix, since I don't know much about electronics
and the event I wanted to attend with a mask was in September. <br>
That means that the first version of this mask is much simpler, with two charlieplexed LED circles.<br>
I still want to make rev 2 with fully animated LED matrix display, but that will have to wait for later™️.
## Version 1
### Bill of Materials
- 24* LEDs, ⌀ 3mm
- 4* 330 Ohm resistors
- 1* 1K Ohm resistor
- 1* Arduino Nano
- 4 buttons; leftover mechanical keyboard switchies are used in my case with 4 keycyps
- 1* Paintball/airsoft style mask. [I used this one](https://www.aliexpress.com/item/1005005392812734.html?spm=a2g0o.order_list.order_list_main.63.6b571802MzwtKa)
    ![Mask I used](/images/mask.png)
- 1* 3D printed eyepiece
- 1* 3D printed control box
- a length some wire
- 2 longer or 4 shorter zip ties
- (optional) 1 or 2 LED jigs
- (optional) 1 m of paracord

### Build Guide
1. Print the LED jigs, the eyepiece and the control box pieces
    - files ledJIG.stl, eyePiece.stl, caseTop.stl and caseBottom.stl
2. Populate the LED jigs with LEDs
3. Start wiring the LEDs according to a diagram in /Schematics/
    - it should look similar to this
    ![Photo of leds wired](/Images/wiring.jpg)
4. Once you have the LED circles wired and tested, cut 4 1m long pieces of wire, make twisted pairs
    - optional - route the cables through a paracord sleeve to make it look better
5. Populate the top of the control box with switches, wire them to the Arduino
    - connect 1K Ohm resistor to arduino ground, then one leg of buttons to pins 6, 5, 4, 3, and all of the other legs 
    to the resistor
6. Connect the twisted wires to the Arduino
    - pins 12, 11, 10 and 9
7. Route the cable to the mask
8. Take out the LED circles from the jigs and insert them to the eyepiece
    - Insert LED circles to the eyePiece in a way that mimics the face of a clock (LED 12 at the top, LED 6 at the 
    bottom, etc.), then screw it to the mask
9. Screw the eyepiece into the mask, there are some holes that I was able to use without modifying anything
10. Add 330 Ohm resistor to the ends of the cable wires
11. Connect the wires to eye LEDs, make sure to connect it in the right order
    - refer to the wiring diagram
12. Flash the firmware file in /Arduino/charlieplexing
13. Enjoy your mask

If you have any questions, feel free to reach out to me.

I'll make sure to post more images soon. In the meantime, you can read more on projects website [here](https://sch3fr.github.io/pages/Projects/pedro.html)
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
- [ ] Create more diagrams for easier comprehension