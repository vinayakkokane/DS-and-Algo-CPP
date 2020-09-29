#include<iostream>
using namespace std;

class cars
{
    string brand;
    float price;        //Price is in lakhs
    public:
        void setData(){
            brand = "Maruti-Suzuki";
            price = 20;
        }

        void getData(){
            cout<<"Brand: "<<brand<<endl<<"Price: "<<price<<endl;
        }
};

int main()
{
    cars c;
    c.setData();
    c.getData();

    return 0;
}
