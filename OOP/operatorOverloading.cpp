#include <iostream>
using namespace std;

class abc{
    int x,y;
public:
    void setData(int a,int b){
        x = a;  y = b;
    }
    void showData(){
        cout<<"Addition of Nums\n";
        cout<<"Num1: "<<x<<endl<<"Num2: "<<y<<endl;
    }
    abc operator +(abc obj){
        abc temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }

};

int main() {
    abc obj1,obj2,obj3;
    obj1.setData(2,4);
    obj2.setData(4,6);
    obj3 = obj1+obj2;
    obj3.showData();

    return 0;
}
