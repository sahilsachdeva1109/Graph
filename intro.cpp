// Implementing graph through ajacency list 
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public: 
    unordered_map<int , list<int>>adj;

    void addEdge(int u, int v, bool direction){
        // direction =0 -> undirected
        // direction = 1-> directed graph
        adj[u].push_back(v);
        if(direction ==0){
            adj[v].push_back(u);
        }

    }

    void printAdj(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<< j<< ", ";
            }
            cout<<endl; 
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of Nodes";
    cin>>n;
    int m;
    cout<<"Enter the number of edges";
    cin>>m;
    graph g;
    for(int i=0; i<m;i++){
        int u , v;
        cin>> u >>v;
        //creating an undirectred graph
        g.addEdge(u,v,0);
    }
    // print the graph
    g.printAdj();

}