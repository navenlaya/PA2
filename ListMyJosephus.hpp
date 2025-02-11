#include <iostream>
#include <list>
using namespace std;

class ListMyJosephus
{
    public:
    ListMyJosephus(int M, int N) : M(M), N(N) {} //Paramerized Constructor
    ~ListMyJosephus();                           //Destructor

   //clear();                       //Empties the Sequence
   string currectSize();            //Returns remaining Destinations
   bool isEmpty();                  //Checks if sequence is empty
   bool eliminateDestination();     //Eliminates remaining destinations based on the rules
   string printAllDestinations();   //Prints remaining destinations sorted by position

    private:
    int M;                  //Elimination Interval
    int N;                  //Total initial destinations
    std::list<int> List;   

};