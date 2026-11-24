// Program 13.15 - Counting Objects using Static Variable
// Name: Aimen
// Class: ObjectCounter

#include <iostream>
using namespace std;

class ObjectCounter
{
  private:
    // DEFINITION OF STATIC: A static variable is shared by all objects of a class. Only one copy exists, not a separate copy for each object.
    static int totalCount;  // Shared counter for all objects

  public:
    ObjectCounter()  // Constructor
    {
        totalCount++;  // Whenever a new object is created, count will increase
    }

    void showCount()
    {
        cout << "You have created " << totalCount << " objects so far" << endl;
    }
};

int ObjectCounter :: totalCount = 0; // Initializing static variable to 0

int main()
{
    ObjectCounter first, second; // 2 objects created -> count = 0+1+1=2
    first.showCount();           // Output: You have created 2 objects so far

    ObjectCounter third;         // 1 more object created -> count = 2+1=3
    third.showCount();           // Output: You have created 3 objects so far

    return 0;
}
