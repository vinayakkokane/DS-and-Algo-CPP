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


    void BFS(int source)
    {

        vector <int> visited(v);
        fill(visited.begin(),visited.end(),0);

        visited[source]=1;

        queue<int> q;
        int hold;
        q.push(source);

        while(!q.empty())
        {
            hold = q.front();
            q.pop();
            cout<<hold<<" ";
            for(auto i:l[hold])
            {
                if(visited[i]==0)
                {
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }

};

int main()
{
    graph G(5);
    cout<<"Graph is : \n";
    G.edgeList(0,1);
    G.edgeList(2,0);
    G.edgeList(1,3);
    G.edgeList(3,2);
    G.edgeList(4,3);
    G.edgeList(2,4);

    G.BFS(3);
    return 0;
}
