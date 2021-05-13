//Cristóbal Castrillón
//Modified code. Original (graph) found in: https://www.geeksforgeeks.org/graph-implementation-using-stl-for-competitive-programming-set-2-weighted-graph/
#include <iostream>
#include <vector>

using namespace std;
 
//To add an edge (directed graph)
void addDirectedEdge(vector <pair<int, int> > adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
}

//Output: graph's adjacency list 
void printGraph(vector<pair<int,int> > adj[], int V)
{
    int v, w;
    for (int u = 0; u < V; u++){
        if(!adj[u].size())
            break;
        if(adj[u].size() == 1)
            cout << "Node " << u << " has a directed edge to" << endl;
        else
            cout << "Node " << u << " has directed edges to" << endl;
        for (auto it = adj[u].begin(); it != adj[u].end(); it++){
            v = it->first;
            w = it->second;
            cout << "\tNode " << v << " with edge weight = " << w << endl;
        }
        cout << "\n";
    }
}

//TODO: Implement getMinimumNode funciton
int getMinimumNode(int V, vector<pair<int, int> > adj[], bool visited[]){
    if(!adj[src].size()){
        pair<int, int> min = min_element(adj[src].begin()->second, adj[src].begin()->second);

    }
    //Provisional
    return 0;
}

//TODO: Implement Dijkstra's algo. funciton
//Dijkstra's algorithm for finding the minimum cost path given a source node in a graph
void dijsktra(int V, vector<pair<int,int> > adj[]){
    //Constructing and initializing 'visited' array for visited nodes
    bool visited[V];
    for(int u = 0; u < V; u++){
        visited[u] = false;
    }
}


int main(){
    //Number of vertices
    int V = 5;

    //Adjacency list
    vector<pair<int,int> > adj[V];

    //Adding nodes
    addDirectedEdge(adj, 0, 3, 1);
    addDirectedEdge(adj, 0, 1, 6);
    addDirectedEdge(adj, 1, 3, 2);
    addDirectedEdge(adj, 1, 4, 2);
    addDirectedEdge(adj, 1, 2, 5);
    addDirectedEdge(adj, 3, 4, 1);
    addDirectedEdge(adj, 2, 4, 5);

    //Test:
    printGraph(adj, V);

    return 0;
}