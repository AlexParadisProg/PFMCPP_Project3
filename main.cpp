/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/






/*
Thing 1) Crane
5 properties:
    1) packages to move stored on the trolley in kilograms
    2) number of seats in the cabin to operate the crane
    3) number of pulleys to hold the trolley and move it vertically on the crane
    4) counterweight to balance the arm stored in kilograms
    5) lock system to keep the package on the trolley
3 things it can do:
    1) pick up a package and move it vertically in the air
    2) move the package horizontally in the air
    3) move the horizontal arm veritcally along the tower
 */

/*
Thing 2) Elevator
5 properties:
    1) numbers of buttons according to each available floor
    2) numbers of locks to access to restricted floors
    3) number of maximum weight that can be lifted in the elevator
    4) numbers of prerecorded voice messages to indicate which floor we are currently in
    5) Numbers of ramps on each wall for accessibility
3 things it can do:
    1) Move the car vertically
    2) Open/Close the car doors after moving the car vertically
    3) indicate which level we are in after the car stopped moving.
 */

/*
Thing 3) Fishing boat
5 properties:
    1) captured fish captured every day in kilograms
    2) numbers of beds for each member of the crew
    3) number of cranes to reel back in fishnets into the boat
    4) number of fishnets stored on the boat to use to capture fishes in the sea
    5) number of life jackets for the crew's safety
3 things it can do:
    1) moves around on the water
    2) capture fish using fishnets attached to a crane
    3) stores fishes after every catch 
 */

/*
Thing 4) helicopter
5 properties:
    1) number of rotors to fly and stabilize the helicopter
    2) fuel stored in liters in the back of the cockpit for long distances
    3) number of doors to gain access to the cockpit of the passenger seats
    4) number of passenger seats for traveling people to places
    5) numbers of gauges to measure multiple informations for using the helicopter
3 things it can do:
    1) fly vertically while staying in position in midair
    2) move around horizontally while keeping the same altitude
    3) transport people from point a to point b
 */

/*
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
