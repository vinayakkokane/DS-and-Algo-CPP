#include <bits/stdc++.h>
using namespace std;

class graph
{
private:
    int v;
    list <int> *l;
public:
    graph(int V){
        this->v = V;
        l = new list<int>[v];
    }
    void edgeList(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjList(){
        for(int i=0;i<v;i++){
            cout<<"Vertex: "<<i<<" edged with ";
            for(int j: l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    graph G(5);

    G.edgeList(0,1);
    G.edgeList(2,0);
    G.edgeList(1,3);
    G.edgeList(3,2);
    G.edgeList(4,1);
    G.edgeList(3,4);
    cout<<"Graph is : \n";

    G.printAdjList();
    return 0;
}
