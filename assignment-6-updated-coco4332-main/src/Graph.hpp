#ifndef GRAPH_H
#define GRAPH_H

#include<vector>
#include<iostream>


using namespace std;

struct Vertex;

struct Edge
{
    Vertex *v;
};

struct Vertex
{
    string username;
    bool visited = false; 
    vector<Edge> edges;
};

class Graph
{
    public:
        void addVertex(string);
        void addEdge(string, string);

        void withinReach(string);

        void resetVisited();

        //optional suggested helper functions
        bool isVertex(string);
        bool isEdge(string, string);
        Vertex* findVertex(string);

    private:
        vector<Vertex*> vertices;
};

#endif