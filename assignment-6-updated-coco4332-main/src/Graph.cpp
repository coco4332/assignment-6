#include "Graph.hpp"
#include <vector>
#include <queue>
#include <iostream>

void Graph::addVertex(string new_user)
{
    // Check if the vertex already exists
    for (int i = 0; i < vertices.size(); ++i) 
    {
        if (vertices[i]->username == new_user) 
        {
            return;
        }
    }

    // Allocate a new vertex
    Vertex* new_v = new Vertex{new_user};
    
    // Add the vertex to the graph
    vertices.push_back(new_v);
}


void Graph::addEdge(string v1, string v2)
{
    Vertex* vertex1 = nullptr;
    Vertex* vertex2 = nullptr;

    // Find vertex v1
    for (int i = 0; i < vertices.size(); ++i) 
    {
        if (vertices[i]->username == v1) 
        {
            vertex1 = vertices[i];
            break;
        }
    }

    // Find vertex v2
    for (int i = 0; i < vertices.size(); ++i) 
    {
        if (vertices[i]->username == v2) 
        {
            vertex2 = vertices[i];
            break;
        }
    }

    // If either vertex is not found, do not add the edge
    if (!vertex1 || !vertex2) 
    {
        
        return;
    }

    // Add edge from vertex1 to vertex2
    vertex1->edges.push_back(Edge{vertex2});

}


void Graph::withinReach(string start)
{
    // Find the starting vertex with username 'start'
    Vertex* startVertex;
    for (size_t i = 0; i < vertices.size(); ++i) 
    {
        if (vertices[i]->username == start) 
        {
            startVertex = vertices[i];
            break;
        }
    }

    if (!startVertex) 
    {
        cout << "Error: Starting username not found in the graph." << endl;
        return;
    }

    // Reset visited
    resetVisited();

    queue<Vertex*> q;

    // Enqueue the starting vertex
    q.push(startVertex);
    startVertex->visited = true;

    cout << "Profiles reachable from " << start << ":" << endl;

    while (!q.empty()) 
    {
        Vertex* current = q.front();
        q.pop();

        // Print the username if it's not the starting username
        if (current->username != start) 
        {
            cout << current->username << endl;
        }

        // Visit all adjacent vertices
        for (size_t i = 0; i < current->edges.size(); ++i) 
        {
            Vertex* adjacentVertex = current->edges[i].v;
            if (!adjacentVertex->visited) {
                adjacentVertex->visited = true;
                q.push(adjacentVertex);
            }
        }
    }
}

void Graph::resetVisited()
{
    for(int i = 0; i < vertices.size(); i++)
    {
        vertices[i]->visited = false;
    }
}