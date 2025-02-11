#include <iostream>
#include <vector>
using namespace std;

class VectorMyJosephus
{
    public:
    VectorMyJosephus(int M, int N) : M(M), N(N) {} //Paramerized Constructor
    ~VectorMyJosephus();                           //Destructor

   //clear();                       //Empties the Sequence
   string currectSize();            //Returns remaining Destinations
   bool isEmpty();                  //Checks if sequence is empty
   bool eliminateDestination();     //Eliminates remaining destinations based on the rules
   string printAllDestinations();   //Prints remaining destinations sorted by position

    private:
    int M;                  //Elimination Interval
    int N;                  //Total initial destinations
    std::vector<int> vector;   

};