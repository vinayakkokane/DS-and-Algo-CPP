#include <bits/stdc++.h>
using namespace std;

class graph
{
private:
    int v;
    list <int> *LL;
public:
    graph(int v){
        this->v = v;
        LL = new list<int>[v];
    }
    void addEdge(int x,int y){
        LL[x].push_back(y);
        LL[y].push_back(x);
    }

    void printAdjList()
    {
        for(int i=0;i<v;i++)
        {
            cout<<"Vertex: "<<i<<"-> ";
            for(int nbr: LL[i])
            {
                cout<<nbr<<",";
            }
            cout<<endl;
        }
}
};

int main()
{
    graph G(4);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(2,3);
    G.addEdge(1,2);
    G.printAdjList();
    return 0;
}
