 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
struct Crane
{
    //packages to move stored on the trolley in kilograms
    int packagesWeight = 10;
    //number of seats in the cabin to operate the crane
    int numSeats = 2;
    //number of pulleys to hold the trolley and move it vertically on the crane
    int numPulleys = 3;
    //counterweight to balance the arm stored in kilograms
    int counterweightBalance = 20;
    //lock system to keep the package on the trolley
    bool isTrolleyLocked = false;
    
    //pick up a package and move it vertically in the air
    void movePackageVertical(float verticalDistance);
    //move the package horizontally in the air
    void movePackageHorizontal(float horizontalDistance);
    //move the horizontal arm veritcally along the tower
    void moveArmHorizontal(float horizontalDistance, float packageWeight);
};

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
struct Elevator
{
    //numbers of buttons according to each available floor
    int numButtons = 16;
    //numbers of locks to access to restricted floors
    int numLocks = 3;
    //number of maximum weight that can be lifted in the elevator in Kilograms
    float maxWeight = 80.5f;
    //numbers of prerecorded voice messages to indicate which floor we are currently in
    int numVoiceMessages = 20;
    //Numbers of ramps on each wall for accessibility
    int numRamps = 3;

    struct RecordedMessage
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        float messageLength = 10.2f; // in Seconds
        int messageLevelId = 5; 
        std::string messageText = "5th Level";
        float messageFileSize = 10.4f;
        std::string dateRecorded = "14th March 2018";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void recordNewMessage(std::string newFileName);
        void setNewLevelId(int levelId);
        void deleteRecordedMessage(int levelId);
    };

    //Move the car vertically
    void moveCarVertical();
    //Open/Close the car doors after moving the car )vertically
    bool openCarDoor(bool isCarDoorOpen);
    //indicate which level we are in after the car stopped moving.
    int changeLevel(int numNewLevel);

    RecordedMessage messageBeingPlayed;
};

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
struct FishingBoat
{
    //captured fish captured every day in kilograms
    float fishCaptured = 36.5f;
    //numbers of beds for each member of the crew
    int numBeds = 12;
    //number of cranes to reel back in fishnets into the boat
    int numCranes = 4;
    //number of fishnets stored on the boat to use to capture fishes in the sea
    int numFishnets = 4;
    //number of life jackets for the crew's safety
    int numLifeJackets = 16;

    //moves around on the water
    void moveBoatAround();
    //capture fish using fishnets attached to a crane
    float captureFish(int numNetsUsed);
    //stores fishes after every catch 
    float storeCapturedFish();
};

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
struct Helicopter
{
    //number of rotors to fly and stabilize the helicopter
    int numRotors = 2;
    //fuel stored in liters in the back of the cockpit for long distances
    float fuelStored = 22.5f;
    //number of doors to gain access to the cockpit of the passenger seats
    int numDoors = 4;
    //number of passenger seats for traveling people to places
    int numPassengers = 6;
    //numbers of gauges to measure multiple informations for using the helicopter
    int numGauges = 24;

    //fly vertically while staying in position in midair
    void moveHelicopterVertical(float veritcalDistance);
    //move around horizontally while keeping the same altitude
    void moveHelicopterHorizontal(float horizontalDistance);
    //transport people from point a to point b
    float transportToPointB(float posX, float posY);
};

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
struct ScreenDisplay
{
    //frame per second (fps) (float)
    float framePerSecond = 23.976f;
    //percentage of batteries left (float)
    float percentageBatteries = 95.85f;
    //number of last recorded clip (int)
    int numLastRecordedClip = 12;
    //number of shutter angle (float)
    float numShutterAngle = 10.5f;
    //type of color being recorded (char)
    std::string typeColor = "Red";

    struct CustomButton
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isActivated = false;
        int customButtonId = 1;
        std::string buttonCustomName = ""; 
        int attachedComponentId = 0;
        int menuOrder = 0;

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void setNewCustomName(std::string newName);
        void changeMenuOrder(int newMenuOrder);
        void attachNewComponent(int newComponentId);
    };

    //switch between other information on the screen
    int switchScreenInformation(int switchDirection);
    //adjust parameters for each information
    void adjustInformationParameter(int numInformation);
    //customize buttons for specific usage
    void customizeButtons(int numCustomButton);

    CustomButton buttonBeingUsed;
};

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
struct Lens
{
    //weight of lens in kg
    float lensWeight = 5.4f;
    //angle of view in degrees (float)
    float viewAngle = 45.2f;
    //focal length in mm
    float focalLength = 12.2f;
    //aperture number (light exposure) (float)
    float apertureExposure = 2.8f;
    //type of lens mount (char)
    std::string typeLensMount = "bayonet";

    //focus on the main character in the screen
    void focusCamera(int numFocus);
    //zoom in and out while recording
    void zoomCamera(float focalLength);
    //adjust light exposure in the camera
    void adjustLightExposure(float apertureExposure);
};

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
struct Storage
{
    //number of video clips stored (int)
    int numVideoclips = 26;
    //number of photographs stored (int)
    int numPhotographs = 11;
    //percentage of space available (float)
    float percentageSpaceAvailable = 54.3f;
    //remaining footage time that can be stored using the same framerate (in minutes)
    int remainingFootage = 24;
    //number of available storage cards (int)
    int numStorageCards = 2;

    //stores recorded video footage
    float storeRecordedFootage(int storageCardId, float recordedFootageLength);
    //backup recorded footage on an external device
    void backupRecordedFootage(int externalCardId, float recordedFootageLength);
    //format the card to remove all data
    void formatCard(int storageCardId);
};

/*
Thing 8) Stabilizer
5 properties:
    1) number of mechanical springs to absorb (int)
    2) number of screws to adjust height (int)
    3) height in cm
    4) angle rotation (int)
    5) weight plate to balance the camera (in lbs)
3 thViewfinderings it can do:
    1) rotate the camera horizontally
    2) move angle of the camera remotely
    3) Start recording remotely
 */
struct Stabilizer
{
    //number of mechanical springs to absorb (int)
    int numSprings = 4;
    //number of screws to adjust height (int)
    int numScrews = 2;
    //height in cm
    float height = 10.5f;
    //angle rotation (float)
    float angleRotation = 24.1f;
    //weight plate to balance the camera (in lbs)
    int weightBalance = 8;

    //rotate the camera horizontally
    void rotateCameraHorizontally(float horizontalAngle);
    //move angle of the camera remotely
    void moveCameraAngle(float angleRotation);
    //Start recording remotely
    void startRecording();
};

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
struct Viewfinder
{
    //indicates if camera if it's standby or recording (bool)
    bool isRecording = false;
    //number of the next clip that will be recorded (int)
    int numNextClip = 10;
    //remaining time available to record in minutes (float)
    float remainingTime = 32.5f;
    //amounts of Exposure Index (EI) (int)
    int amountExposureIndex = 10;
    //status of monitors (char)
    std::string statusMonitor = "Standby";

    //change zoom positions
    void changeZoomPosition(float zoomPosition);
    //activate magnification function
    void activateMagnification();
    //flip the image horizontally
    void flipImageHorizontally();

};

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
struct DigitalMotionPictureCamera
{
    //screen display
    ScreenDisplay screenDisplayBeingUsed;
    //lens
    Lens lensBeingUsed;
    //storage
    Storage storageCardsBeingUsed;
    //stabilizer
    Stabilizer stabilizerBeingUsed;
    //viewfinder
    Viewfinder viewfinderBeingUsed;

    //record video
    void recordVideo();
    //adjust screen lighting
    void adjustScreenLighting(float newLighting);
    //output video feed
    void outputVideoFeed(int externalSourceId);
};

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
