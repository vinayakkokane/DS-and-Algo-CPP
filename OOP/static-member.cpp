#include<iostream>
using namespace std;

class cars
{
    string brand;
    float price;        //Price is in lakhs

    //Declaration of Static Member variable
    static int carNo;   //Static member variable / Class variable

    /*
    Static member are created once even if there is no object created of class and
    also even if 10 objects are being created of class, there will be only one static member variable created
    */
    public:
        void setData(){
            brand = "Maruti-Suzuki";
            price = 20;
        }

        void getData(){
            cout<<"Brand: "<<brand<<endl<<"Price: "<<price<<endl<<"Car num: "<<carNo<<endl;
        }
};

int cars :: carNo = 221;        //static member defination

int main()
{
    cars c;
    c.setData();
    c.getData();

    return 0;
}
