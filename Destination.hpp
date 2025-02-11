#include <iostream>
using namespace std;

class Destination
{
    public:
    Destination() : position(0), name() {} //Default Constructor
    ~Destination();                        //Destructor

    int printPosition();            //printPosition() - Display the destination's position
    string printDestinationName();  //printDestinationName() - Display's the destinations name

    private:
    int position;   //Position in the sequence of (ID)
    string name;    //City Name.


};