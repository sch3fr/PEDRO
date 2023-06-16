borderHeight = 25;
sizeX = 85;
sizeY = 24;

details=20; //change to 100 for best render, lower for fast render

//translate([2,2,0])square([sizeX, sizeY]);

module walls(){
    //rounded corners
    translate([2,2,0])cylinder(borderHeight, 2, 2, $fn=details);
    translate([2,sizeY+2,0])cylinder(borderHeight, 2, 2, $fn=details);
    translate([sizeX+2,2,0])cylinder(borderHeight, 2, 2, $fn=details);
    translate([sizeX+2,sizeY+2,0])cylinder(borderHeight, 2, 2, $fn=details);

    //actual walls
    translate([2,0,0])cube([sizeX,4,borderHeight]);
    translate([0,sizeY,0])translate([2,0,0])cube([sizeX,4,borderHeight]);
    translate([0,2,0])cube([4,sizeY,borderHeight]);
    translate([sizeX,2,0])cube([4,sizeY,borderHeight]);
    
    //floor
    translate([2,2,0])cube([sizeX,sizeY,2]);
    //floor thickener
    translate([sizeX-sizeX/2+6,2,0])cube([sizeX/2-6,sizeY,4]); //+- 6mm compensates for the size of arudino, which is larger than sizeX/2
}

difference() {
    walls();
    translate([2,2,14])cube([sizeX+2,sizeY,4]);//plate slide-in hole
    
    //microUSB connector hole
    translate([0,10,5])cube([10,8,3]);
    #translate([0,8,3])cube([3,12,7]);
    
}
//#translate([78,-64,2])import("C:/Users/sch3f/Desktop/arduinoNanoModel.stl");

module switches() {
    difference(){
        cube([87,23.5,3.8]); //plate
        translate([7,4.75,0])cube([14,14,6]); //switch hole1
        translate([26,4.75,0])cube([14,14,6]); //switch hole2
        translate([45,4.75,0])cube([14,14,6]); //switch hole3
        translate([64,4.75,0])cube([14,14,6]); //switch hole4
    }
}

translate([0,50,0])switches();