/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.





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
    FIXME//Will be filled in Project 3 - Part 3
}

void Crane::movePackageHorizontal(float)
{
    FIXME//Will be filled in Project 3 - Part 3
}

void Crane::moveArmHorizontal(float, float)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
}
bool Elevator::openCarDoor(bool)
{
    FIXME//Will be filled in Project 3 - Part 3
    return false;
}
int Elevator::changeLevel(int)
{
    FIXME//Will be filled in Project 3 - Part 3
    return 0;
}
void Elevator::RecordedMessage::recordNewMessage(std::string)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void Elevator::RecordedMessage::setNewLevelId(int)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void Elevator::RecordedMessage::deleteRecordedMessage(int)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
}
float FishingBoat::captureFish(int)
{
    FIXME//Will be filled in Project 3 - Part 3
    return 0.1f;
}
float FishingBoat::storeCapturedFish()
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
}
void Helicopter::moveHelicopterHorizontal(float)
{
    FIXME//Will be filled in Project 3 - Part 3
}
float Helicopter::transportToPointB(float, float)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
    return 0;
}
void ScreenDisplay::adjustInformationParameter(int)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void ScreenDisplay::customizeButtons(int)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::setNewCustomName(std::string)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::changeMenuOrder(int)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void ScreenDisplay::CustomButton::attachNewComponent(int)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
}
void Lens::zoomCamera(float)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void Lens::adjustLightExposure(float)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
    return 0.1f;
}
void Storage::backupRecordedFootage(int, float)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void Storage::formatCard(int)
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME//Will be filled in Project 3 - Part 3
}
void Stabilizer::moveCameraAngle(float)
{
    FIXME//Will be filled in Project 3 - Part 3
}
void Stabilizer::startRecording()
{
    FIXME//Will be filled in Project 3 - Part 3
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
    FIXME
}
void Viewfinder::activateMagnification()
{
    //Will be filled in Project 3 - Part 3
    FIXME
}
void Viewfinder::flipImageHorizontally()
{
    //Will be filled in Project 3 - Part 3  
    FIXME
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
    FIXME
}
void DigitalMotionPictureCamera::adjustScreenLighting(float)
{
    //Will be filled in Project 3 - Part 3
    FIXME
}
void DigitalMotionPictureCamera::outputVideoFeed(int)
{
    //Will be filled in Project 3 - Part 3
    FIXME
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
    Example::main();
    std::cout << "good to go!" << std::endl;
}
