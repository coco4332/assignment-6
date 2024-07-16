/******************************
CSCI 2270 Assignment 6
Name: YOUR NAME HERE
Due: July 14 @ 11:59pm
******************************/

#include "Graph.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> splitLine(const string& line, char delimiter)
{
    vector<string> portions;
    stringstream ss(line);
    string portion;
    while (getline(ss, portion, delimiter)) {
        portions.push_back(portion);
    }
    return portions;
}

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        cout << "Error: invalid command line arguments." << endl;
        return 1;
    }

    ifstream file_in(argv[1]);
    if (file_in.fail())
    {
        cout << "Error: could not read input file." << endl;
        return 1;
    }

    string starting_username = argv[2];

    Graph g;

    string line;
    while (getline(file_in, line))
    {
        vector<string> portions = splitLine(line, ',');
        if (portions.empty())
            continue;

        string root = portions[0];
        g.addVertex(root);

        for (size_t i = 1; i < portions.size(); ++i)
        {
            g.addVertex(portions[i]);
            g.addEdge(root, portions[i]);
        }
    }

    g.withinReach(starting_username);

    return 0;
}
