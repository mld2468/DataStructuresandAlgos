#include "Edge.h"

void Edge::setEdgeValues(int destVID, int w) {
    Edge::getDestinationVertexID = destVID;
    Edge::weight = w;
}

void Edge::setWeight(int w) {
    Edge::weight = w;
}

int Edge::getDestinationVertexID() {
    return Edge::destinationVertexID;
}

int Edge::getWeight() {
    return Edge::weight;
}
