// Function Overloading in OOP

#include <iostream>

using namespace std;

class Area
{

 public :
  int find_area(int x)
  {
   cout<<"Area in int : "<<x*x<<endl;
  }
  float find_area(double x)
  {
   cout<<"Area in (Float) : "<<x*x<<endl;
  }
  int find_area(int l, int b)
  {
   cout<<"Area of rectangle : "<<l*b<<endl;
  }
};

int main()
{
  Area A;
  A.find_area(5);
  A.find_area(2.5);
  A.find_area(6,5);

   return 0;
}
