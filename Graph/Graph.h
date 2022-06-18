#ifndef DATASTRUCTURESANDALGOS_GRAPH_H
#define DATASTRUCTURESANDALGOS_GRAPH_H

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include "Vertex.h"

class Graph {
public:
    void addVertex(Vertex newV);
    bool checkIfVertexExistsById(int id);
    void printGraph();
    void addEdgebyID(int id1, int id2, int w);
    void updateEdgebyID(Vertex fromVertex, Vertex toVertex, int weight);
    Vertex getVertexbyID(int id);
    bool checkIfEdgeExistsbyID(int id1, int id2);
    void deleteEdgebyID(Vertex fromVertex, Vertex toVertex);
    void deleteVertexbyID(int vID);
    void updateVertex(int vID, string vName);
private:
    std::vector<Vertex> vertices;
};


#endif //DATASTRUCTURESANDALGOS_GRAPH_H
