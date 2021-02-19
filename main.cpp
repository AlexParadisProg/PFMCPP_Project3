/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CarWash
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
Thing 5) Screen Display
5 properties:
    1) frame per second (fps) (float)
    2) percentage of batteries left (int)
    3) number of last recorded clip (int)
    4) number of shutter angle (float)
    5) type of color being recorded (char)
3 things it can do:
    1) switch between other information on the screen
    2) adjust parameters for each information
    3) customize buttons for specific usage
 */

/*
Thing 6) Lens
5 properties:
    1) weight of lens in kg
    2) angle of view in degrees (float)
    3) focal length in mm
    4) aperture number (light exposure) (float)
    5) type of lens mount (char)
3 things it can do:
    1) focus on the main character in the screen
    2) zoom in and out while recording
    3) adjust light exposure in the camera
 */

/*
Thing 7) Storage
5 properties:
    1) number of video clips stored (int)
    2) number of photographs stored (int)
    3) percentage of space available (float)
    4) remaining footage time that can be stored using the same framerate (in minutes)
    5) number of available storage cards (int)
3 things it can do:
    1) stores recorded video footage
    2) backup recorded footage on an external device
    3) format the card to remove all data
 */

/*
Thing 8) Stabilizer
5 properties:
    1) number of mechanical springs to absorb (int)
    2) number of screws to adjust height (int)
    3) height in cm
    4) angle rotation (int)
    5) weight plate to balance the camera (in lbs)
3 things it can do:
    1) rotate the camera horizontally
    2) move angle of the camera remotely
    3) Start recording remotely
 */

/*
Thing 9) Viewfinder
5 properties:
    1) indicates if camera if it's standby or recording (bool)
    2) number of the next clip that will be recorded (int)
    3) remaining time available to record (float)
    4) amounts of Exposuder Index (EI) (int)
    5) status of monitors (char)
3 things it can do:
    1) change zoom positions
    2) activate magnification function
    3) flip the image horizontally
 */

/*
Thing 10) Digital Motion Picture Camera
5 properties:
    1) screen display
    2) lens
    3) storage
    4) stabilizer
    5) viewfinder
3 things it can do:
    1) record video
    2) adjust screen lighting
    3) output video feed
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
