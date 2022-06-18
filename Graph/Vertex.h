#ifndef DATASTRUCTURESANDALGOS_VERTEX_H
#define DATASTRUCTURESANDALGOS_VERTEX_H

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include "Edge.h"

class Vertex {

public:
    Vertex() {
        state_id = 0;
        state_name = "";
    }

    Vertex(int id, std::string name) {
        state_id = id;
        state_name = name;
    }
    void setStateID(int id);
    void setStateName(std::string name);
    int getStateID();
    std::string getStateName();
    std::list<Edge> getEdgeList();
    void printEdgeList();
private:
    int state_id;
    std::string state_name;
    std::list<Edge> edgeList;
};


#endif //DATASTRUCTURESANDALGOS_VERTEX_H
