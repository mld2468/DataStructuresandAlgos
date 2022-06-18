#ifndef DATASTRUCTURESANDALGOS_EDGE_H
#define DATASTRUCTURESANDALGOS_EDGE_H

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

class Edge {

public:
    Edge() {};
    Edge(int destVID, int w) {
        destinationVertexID = destVID;
        weight = w;
    };
    void setEdgeValues(int destVID, int w);
    void setWeight(int w);
    int getDestinationVertexID();
    int getWeight();

private:
    int destinationVertexID;
    int weight;
};


#endif //DATASTRUCTURESANDALGOS_EDGE_H
