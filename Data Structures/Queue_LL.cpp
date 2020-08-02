/*
    Implementation of Queue Data structure using Singly linked lists
    Name: Vinayak L Kokane
*/
#include<iostream>
using namespace std;

struct Queue{
    int data;
    struct Queue* next;
};
struct Queue* Front=NULL;
struct Queue* Rear=NULL;
struct Queue* temp=NULL;

int peek(){
    return Front->data;;
}

int isEmpty(){
    if(Front==NULL)
        return 1;
    else
        return 0;
}

void enqueue(int x){
    temp=new Queue();   //init
    if(temp==NULL){
        cout<<"\nQueue Overflow\n";
        return;
    }
    temp->data=x;
    temp->next=NULL;
    if(Rear==NULL){
        Front=Rear=temp;
        temp->next=NULL;
        return;
    }

    else{
        Rear->next=temp;
        Rear=temp;
        Rear->next=NULL;
    }
}

void dequeue(){
    if(Front==NULL){
        cout<<"No item to dequeue\n";
        return;
    }
    else{
        struct Queue* tmp;
        tmp=Front;
        Front=Front->next;
        delete tmp;
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements in Queue: ";
    cin>>n;
    cout<<"Enter the Elements in Queue: ";
    for(int i=0;i<n;i++){
        int p;  cin>>p;
        enqueue(p);
    }
    cout<<"\nFront: "<<peek()<<"  Rear: "<<Rear->data;
    cout<<"\nElements of Queue are: ";
    Queue* T=Front;
    while(!isEmpty()){
        cout<<T->data<<" ";
        T=T->next;
    }

}
