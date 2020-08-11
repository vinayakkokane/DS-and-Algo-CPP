/*
    Implementation of Queue Data structure using array
    Name: Vinayak L Kokane
*/
#include<bits/stdc++.h>
#define MAX_size 5
using namespace std;

int q[MAX_size];
int front=-1,rear=-1;

bool isEmpty(){
    if( front==-1 && rear==-1)
        return true;
    else 
        return false;
}

bool isFull(){
    if((rear+1) % MAX_size==front)
        return true;
    else
        return false;
    
}

void enqueue(int val){
    if(isFull()==true)
        cout<<"Queue is Full\n";
    else{
        if(front==-1)
            front=0;
        rear=(rear+1)% MAX_size;
        q[rear]=val;
    }
}

int dequeue(){
    int val ;
    if(isEmpty()==true)
        cout<<"Queue is empty\n";
    else{
        val = q[front];
        if(front==rear)
            front=rear=-1;
        front=(front+1) % MAX_size;
    }
    return val;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    int x=dequeue();
    cout<<"Element: "<<x<<endl;
    int y=dequeue();
    cout<<"Element: "<<y<<endl;

}