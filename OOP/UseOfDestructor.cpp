#include <iostream>
using namespace std;

class society{
    string* name;       //name of housing society
    int* noOfHouses;    //Total number of houses
public:
    society(string Nname, int NnoOfHouses){
        name = new string;
        noOfHouses = new int;

        *name = Nname;
        *noOfHouses = NnoOfHouses;
    }
    void display(){
        cout<<"Name: "<<*name<<endl<<"Total number of houses: "<<*noOfHouses<<endl;
    }

    //Now this destructor will delete dynamic memory allocted inside the heap
    ~society(){
        delete name;
        delete noOfHouses;
        cout<<"Memory freed"<<endl;
    }

};

int main() {
    society* obj = new society("Bhagyanagari Housing Society",40);
    obj->display();
    delete obj;         //now when we try to delete obj, destructor will be called
    return 0;
}
