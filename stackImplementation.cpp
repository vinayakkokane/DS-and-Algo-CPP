#include<iostream>
using namespace std;
#define MAX 4
int Stack[MAX];
int top=-1;
int isEmpty(){

    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull(){

    if(top==MAX)
        return 1;
    else
        return 0;
}

int peek(){
    return Stack[top];
}

int pop(){
    int data;
    if(!isEmpty()){
        data=Stack[top];
        top=top-1;
        return data;
    }
    else
        cout<<"No item to pop now, Stack is Empty\n";
}

int push(int data){

    if(!isFull()){
        top=top+1;
        Stack[top]=data;
    }
    else
        cout<<"No space to push data, Stack is Full\n";
}

int main(){

    cout<<"Enter elements onto stack: \n";
    while(!isFull()){
        int x;  cin>>x;
        push(x);
    }
    cout<<"\nStack is empty: "<<isEmpty();
    cout<<"\nStack is full: "<<isFull();

    cout<<"Top Element: "<<peek()<<"\n";
    cout<<"Elemets of Stack are: \n";

    while(!isEmpty()){
        int data=pop();
        cout<<data<<" ";
    }

}

