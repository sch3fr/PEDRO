external_radius = 20; // 23 reccomended if you want to go larger
internal_radius = 14; // 17 reccomended if you want to go larger
LED_radius = 1.7; //1.7 is the LED radius, I found that the 1.7 works great for my print settings and LEDs I have at hand

linear_extrude(3){

difference(){
    circle(external_radius, $fn=100);
    circle(internal_radius, $fn=100); //or 17 for larger internal diameter
    for (angle=[0:30:360]) 
        {
        rotate([0, 0, angle]) translate([17, 0, 0]) circle(LED_radius, $fn=100);
        }
    }
}