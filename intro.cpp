// // Implementing graph through ajacency list 
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
// class graph{
//     public: 
//     unordered_map<int , list<int>>adj;

//     void addEdge(int u, int v, bool direction){
//         // direction =0 -> undirected
//         // direction = 1-> directed graph
//         adj[u].push_back(v);
//         if(direction ==0){
//             adj[v].push_back(u);
//         }

//     }

//     void printAdj(){
//         for(auto i: adj){
//             cout<<i.first<<"->";
//             for(auto j: i.second){
//                 cout<< j<< ", ";
//             }
//             cout<<endl; 
//         }
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter the number of Nodes";
//     cin>>n;
//     int m;
//     cout<<"Enter the number of edges";
//     cin>>m;
//     graph g;
//     for(int i=0; i<m;i++){
//         int u , v;
//         cin>> u >>v;
//         //creating an undirectred graph
//         g.addEdge(u,v,0);
//     }
//     // print the graph
//     g.printAdj();

// }


//Implementing thorough adjacency matrix 
int adjMatt[20][20];
int count=0;
void printMatrix(int v){
    int i,j;
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            cout<<adjMatt[i][j]<< " ";
        }
        cout<<endl;
    }
}
void addEdge(int u ,int v){
    adjMatt[u][v]=1;
    adjMatt[v][u]=1;
}
int main(){
    int v=6;
    addEdge(0, 4);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(1, 4);
    addEdge(1, 5);
    addEdge(2, 3);
    addEdge(2, 5);
    addEdge(5, 3);
    addEdge(5, 4);
    printMatrix(v);
    return 0;
}