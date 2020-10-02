// There can be only one destructor in a class
//has no return type and can't pass the arguments hence can't be overloaded
//destructor is called jusy before an object dies
#include <iostream>
using namespace std;

class abc{
public:
    ~abc(){
        cout<<"Destructor is called\n";
    }
    abc(){
        cout<<"This is constructor!\n";
    }
};

int main() {
    abc obj;
    return 0;
}
