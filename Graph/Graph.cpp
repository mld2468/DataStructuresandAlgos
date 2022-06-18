#include "Graph.h"

void Graph::addVertex(Vertex newV) {
    bool check = checkIfVertexExistsByID(newV.getStateID());
    if (check) {
        std::cout << "This ID already exists!";
    }
    else {
        vertices.push_back(newV);
        std::cout << "Vertex added!" << std::endl;
    }

}

bool Graph::checkIfVertexExistsById(int id) {
    bool flag = false;
    for (int i=0;i<vertices.size();i++) {
        if(vertices.at(i).getStateID() == id) {
            return true;
        }
    }
    return flag;
}

bool Graph::checkIfEdgeExistsbyID(int fromVertex, int destVertex) {
    Vertex v = getVertexbyID(fromVertex);
    list <Edge> e;
    e = v.getEdgeList();

    for (auto iter e.begin(); iter != e.end(); iter++) {
        if (iter->Edge::getDestinationVertexID() == destVertex) {
            flag = true;
            return true;
            break;
        }
    }
    return false;
}

Vertex Graph::getVertexbyID(int vid) {
    Vertex temp;
    for (int i=0; i < vertices.size(); i++) {
        temp = vertices.at(i);
        if (temp.getStateID() == vid) {
            return temp;
        }
        else {
            return temp;
        }
    }
}

void Graph::addEdgebyID(int from, int dest, int weight) { //Review!!!!
    bool check1 = checkIfVertexExistsById(from);
    bool check2 = checkIfVertexExistsById(dest);
    if (check1 && check2) {
        bool check3 = checkIfEdgeExistsbyID(from, dest);
        if (check3) {
            std::cout << "There exists an edge between " << getVertexbyID(from).getStateName() << "(" << from << " ) and "
            << getVertexbyID(dest).getStateName() << "(" << dest << ")";
        }
        else {
            for (int i = 0; i < vertices.size(); i++) {
                if (vertices.at(i).getStateID() == from) {
                    Edge e(dest, weight);
                    vertices.at(i).edgeList.push_back(e);
                }
                else if (vertices.at(i).getStateID() == dest) {
                    Edge e(from, weight);
                    vertices.at(i).edgeList.push_back(e);
                }
            }
            std::cout << "Edge between " << getVertexbyID(dest).getStateName() << "and " << getVertexbyID(from).getStateName()
            << "have been added successfully.";
        }
    }
    else {
        std::cout << "Invalid Vertex ID Entered.";
    }
}

void Graph::printGraph() {
    for (int i=0; i<vertices.size(); i++) {
        Vertex temp;
        temp = vertices.at(i);
        std::cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
        temp.printEdgeList();
    }
}

void Graph::updateEdgebyID(from, dest, w) {
    bool check = checkIfEdgeExistsbyID(from, dest);
    list <Edge> e;

    if (check) {
        for (int i=0; i < vertices.size(); i++) {
            if (vertices.at(i).getStateID() == from) {
                for (auto iter = vertices.at(i).edgeList.begin(); iter != vertices.at(i).edgeList.end(); iter++) {
                    if (iter->getDestinationVertexID() == dest) {
                        iter->setWeight(w);
                        break;
                    }
                }
            }
            else if (vertices.at(i).getStateID() == dest) {
                for (auto iter = vertices.at(i).edgeList.begin(); iter != vertices.at(i).edgeList.end(); iter++) {
                    if (iter->getDestinationVertexID() == from) {
                        iter->setWeight(w);
                        break;
                    }
                }
            }
        }
    }
    else {
        std::cout << "Edge between " << getVertexbyID(from).getStateName() << "(" << from << ") and " <<
        getVertexbyID(dest).getStateName() << "(" << dest << ") does not exist." << std::endl;
    }
}

void Graph::deleteEdgebyID(Vertex fromVertex, Vertex toVertex) {
    bool check = checkIfEdgeExistsbyID(fromVertex, toVertex);

    if (check) {
        for (int i=0; i < vertices.size(); i++) {
            if (vertices.at(i).getStateID() == fromVertex) {
                for (auto iter = vertices.at(i).edgeList.begin(); iter != vertices.at(i).edgeList.end(); iter++) {
                    if (iter->getDestinationVertexID() == toVertex) {
                        vertices.at(i).edgeList.erase(iter);
                        break;
                    }
                }
            }
            else if (vertices.at(i).getStateID() == toVertex) {
                for (auto iter = vertices.at(i).edgeList.begin(); iter != vertices.at(i).edgeList.end(); iter++) {
                    if (iter->getDestinationVertexID() == fromVertex) {
                        vertices.at(i).edgeList.erase(iter);
                        break;
                    }
                }
            }
        }
        std::cout << "Edge deleted successfully";
    }
    else {
        std::cout << "Edge between " << fromVertex.getStateName() << "(" << fromVertex << ") and " <<
        toVertex.getStateName() << "(" << toVertex << ") does not exist!";
    }
}

void Graph::deleteVertexbyID(int vID) {
    int vIndex = 0;
    for(int i=0; i<vertices.size(); i++) {
        if(vertices.at(i).getStateID() == vID) {
            vIndex = i;
        }
    }
    for(auto iter = vertices.at(vIndex).edgeList.begin(); iter != vertices.at(vIndex).edgeList.end(); iter++) {
        deleteEdgebyID(iter->getDestinationVertexID(), vID);
    }
    vertices.erase(vertices.begin() + vIndex);
    std::cout << "Vertex Deleted Successfully!" << std::endl;
}

void Graph::updateVertex(int vID, std::string vName) {
    bool check = checkIfVertexExistsById(vID);
    if(check) {
        for(int i=0; i < vertices.size(); i++) {
            if(vertices.at(i).getStateID() == vID) {
                vertices.at(i).setStateName(vName);
                break;
            }
        }
        std::cout << "Vertex (State) Updated Successfully!" << std::endl;
    }
}
