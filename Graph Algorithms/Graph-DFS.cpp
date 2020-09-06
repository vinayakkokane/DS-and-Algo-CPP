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

    void DFS_helper(int source,bool visited[])
    {
        visited[source] = true;
        cout<<source<<" ";
        for(auto i:l[source])
        {
            if(!visited[i])
                DFS_helper(i,visited);
        }
    }
    void DFS ( int source )
    {
        bool visited[v];
        for(auto i=0;i<v;i++)
        {
            visited[i]=false;
        }
        DFS_helper(source,visited);
    }

};

int main()
{
    graph G(5);

    G.edgeList(0,1);
    G.edgeList(2,0);
    G.edgeList(1,3);
    G.edgeList(3,2);
    G.edgeList(4,3);
    G.edgeList(2,4);

    cout<<"Graph is : \n";

    G.DFS(0);
    return 0;
}
