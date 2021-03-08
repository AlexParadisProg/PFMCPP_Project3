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
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Foot
    {
        int shoeSize = 11;    
        int numberOfStepsDone = 0;
        void stepForward()
        {
            numberOfStepsDone += 1;
        }
        int stepSize()
        {
            return shoeSize;
        }
    };

    Foot leftFoot, rightFoot;

    void run( bool startWithLeftFoot);
};

void Person::run( bool startWithLeftFoot)
{
    if(startWithLeftFoot) 
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


struct Crane
{
    int packagesWeight = 10;
    int numSeats = 2;
    int numPulleys = 3;
    int counterweightBalance = 20;
    bool isTrolleyLocked = false;
    
    void movePackageVertical(float verticalDistance);
    void movePackageHorizontal(float horizontalDistance);
    void moveArmHorizontal(float horizontalDistance, float packageWeight);
};

void Crane::movePackageVertical(float)
{
    //Will be filled in Project 3 - Part 3
}

void Crane::movePackageHorizontal(float)
{
    //Will be filled in Project 3 - Part 3
}

void Crane::moveArmHorizontal(float, float)
{
    //Will be filled in Project 3 - Part 3
}


struct Elevator
{
    int numButtons = 16;
    int numLocks = 3;
    float maxWeight = 80.5f;
    int numVoiceMessages = 20;
    int numRamps = 3;

    struct RecordedMessage
    {
        float messageLength = 10.2f;
        int messageLevelId = 5; 
        std::string messageText = "5th Level";
        float messageFileSize = 10.4f;
        std::string dateRecorded = "14th March 2018";

        void recordNewMessage(std::string newFileName);
        void setNewLevelId(int levelId);
        void deleteRecordedMessage(int levelId);
    };

    void moveCarVertical();
    bool openCarDoor(bool isCarDoorOpen);
    int changeLevel(int numNewLevel);

    RecordedMessage messageBeingPlayed;
};

void Elevator::moveCarVertical()
{
    //Will be filled in Project 3 - Part 3
}
bool Elevator::openCarDoor(bool)
{
    //Will be filled in Project 3 - Part 3
    return false;
}
int Elevator::changeLevel(int)
{
    //Will be filled in Project 3 - Part 3
    return 0;
}
void Elevator::RecordedMessage::recordNewMessage(std::string)
{
    //Will be filled in Project 3 - Part 3
}
void Elevator::RecordedMessage::setNewLevelId(int)
{
    //Will be filled in Project 3 - Part 3
}
void Elevator::RecordedMessage::deleteRecordedMessage(int)
{
    //Will be filled in Project 3 - Part 3
}

struct FishingBoat
{
    float fishCaptured = 36.5f;
    int numBeds = 12;
    int numCranes = 4;
    int numFishnets = 4;
    int numLifeJackets = 16;

    void moveBoatAround();
    float captureFish(int numNetsUsed);
    float storeCapturedFish();
};

void FishingBoat::moveBoatAround()
{
    //Will be filled in Project 3 - Part 3
}
float FishingBoat::captureFish(int)
{
    //Will be filled in Project 3 - Part 3
    return 0.1f;
}
float FishingBoat::storeCapturedFish()
{
    //Will be filled in Project 3 - Part 3
    return 0.1f;
}

struct Helicopter
{
    int numRotors = 2;
    float fuelStored = 22.5f;
    int numDoors = 4;
    int numPassengers = 6;
    int numGauges = 24;

    void moveHelicopterVertical(float veritcalDistance);
    void moveHelicopterHorizontal(float horizontalDistance);
    float transportToPointB(float posX, float posY);
};

void Helicopter::moveHelicopterVertical(float)
{
    //Will be filled in Project 3 - Part 3
}
void Helicopter::moveHelicopterHorizontal(float)
{
    //Will be filled in Project 3 - Part 3
}
float Helicopter::transportToPointB(float, float)
{
    //Will be filled in Project 3 - Part 3
    return 0.1f;
}

struct ScreenDisplay
{
    float framePerSecond = 23.976f;
    float percentageBatteries = 95.85f;
    int numLastRecordedClip = 12;
    float numShutterAngle = 10.5f;
    std::string typeColor = "Red";

    struct CustomButton
    {
        bool isActivated = false;
        int customButtonId = 1;
        std::string buttonCustomName = ""; 
        int attachedComponentId = 0;
        int menuOrder = 0;

        void setNewCustomName(std::string);
        void changeMenuOrder(int);
        void attachNewComponent(int);
    };

    int switchScreenInformation(int);
    void adjustInformationParameter(int);
    void customizeButtons(int);

    CustomButton buttonBeingUsed;
};

int ScreenDisplay::switchScreenInformation(int)
{
    //Will be filled in Project 3 - Part 3
    return 0;
}
void ScreenDisplay::adjustInformationParameter(int)
{
    //Will be filled in Project 3 - Part 3
}
void ScreenDisplay::customizeButtons(int)
{
    //Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::setNewCustomName(std::string)
{
    //Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::changeMenuOrder(int)
{
    //Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::attachNewComponent(int)
{
    //Will be filled in Project 3 - Part 3
}

struct Lens
{
    float lensWeight = 5.4f;
    float viewAngle = 45.2f;
    float focalLength = 12.2f;
    float apertureExposure = 2.8f;
    std::string typeLensMount = "bayonet";

    void focusCamera(int numFocus);
    void zoomCamera(float focalLength);
    void adjustLightExposure(float apertureExposure);
};
void Lens::focusCamera(int)
{
    //Will be filled in Project 3 - Part 3
}
void Lens::zoomCamera(float)
{
    //Will be filled in Project 3 - Part 3
}
void Lens::adjustLightExposure(float)
{
    //Will be filled in Project 3 - Part 3
}

struct Storage
{
    int numVideoclips = 26;
    int numPhotographs = 11;
    float percentageSpaceAvailable = 54.3f;
    int remainingFootage = 24;
    int numStorageCards = 2;

    float storeRecordedFootage(int storageCardId, float recordedFootageLength);
    void backupRecordedFootage(int externalCardId, float recordedFootageLength);
    void formatCard(int storageCardId);
};

float Storage::storeRecordedFootage(int, float)
{
    //Will be filled in Project 3 - Part 3
    return 0.1f;
}
void Storage::backupRecordedFootage(int, float)
{
    //Will be filled in Project 3 - Part 3
}
void Storage::formatCard(int)
{
    //Will be filled in Project 3 - Part 3
}

struct Stabilizer
{
    int numSprings = 4;
    int numScrews = 2;
    float height = 10.5f;
    float angleRotation = 24.1f;
    int weightBalance = 8;

    void rotateCameraHorizontally(float horizontalAngle);
    void moveCameraAngle(float angleRotation);
    void startRecording();
};
void Stabilizer::rotateCameraHorizontally(float)
{
    //Will be filled in Project 3 - Part 3
}
void Stabilizer::moveCameraAngle(float)
{
    //Will be filled in Project 3 - Part 3
}
void Stabilizer::startRecording()
{
    //Will be filled in Project 3 - Part 3
}

struct Viewfinder
{
    bool isRecording = false;
    int numNextClip = 10;
    float remainingTime = 32.5f;
    int amountExposureIndex = 10;
    std::string statusMonitor = "Standby";

    void changeZoomPosition(float zoomPosition);
    void activateMagnification();
    void flipImageHorizontally();
};

void Viewfinder::changeZoomPosition(float)
{
    //Will be filled in Project 3 - Part 3
}
void Viewfinder::activateMagnification()
{
    //Will be filled in Project 3 - Part 3
}
void Viewfinder::flipImageHorizontally()
{
    //Will be filled in Project 3 - Part 3  
}

struct DigitalMotionPictureCamera
{
    ScreenDisplay screenDisplayBeingUsed;
    Lens lensBeingUsed;
    Storage storageCardsBeingUsed;
    Stabilizer stabilizerBeingUsed;
    Viewfinder viewfinderBeingUsed;

    void recordVideo();
    void adjustScreenLighting(float newLighting);
    void outputVideoFeed(int externalSourceId);
};

void DigitalMotionPictureCamera::recordVideo()
{
    //Will be filled in Project 3 - Part 3
}
void DigitalMotionPictureCamera::adjustScreenLighting(float)
{
    //Will be filled in Project 3 - Part 3
}
void DigitalMotionPictureCamera::outputVideoFeed(int)
{
    //Will be filled in Project 3 - Part 3
}

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
