#include "Vertex.h"

void Vertex::setStateID(int id) {
    Vertex::state_id = id;
}

void Vertex::setStateName(std::string name) {
    Vertex::state_name = name;
}

int Vertex::getStateID() {
    return Vertex::state_id;
}

std::string Vertex::getStateName() {
    return Vertex::state_name;
}

std::list<Edge> Vertex::getEdgeList() {
    return Vertex::edgeList;
}

void Vertex::printEdgeList() {
    std::cout << "[";
    for (auto iter = edgeList.begin(); iter != edgeList.end(); iter++) {
        std::cout << iter->getDestinationVertexID() << "(" << iter->getWeight() << ") --> ";
        std::cout << "]" << std::endl;
    }
}
