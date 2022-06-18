#include "Edge.h"
#include "Vertex.h"
#include "Graph.h"

int main() {
    Graph g;
    std::string sname;
    Vertex v1;
    int option, id1, id2, w;

    do {
        std::cout << "What operation do you want to perform?" << std::endl;
        std::cout << "Select option number. Enter 0 to exit." << std::endl;
        std::cout << "1. Add Vertex" << std::endl;
        std::cout << "2. Update Vertex" << std::endl;
        std::cout << "3. Delete Vertex" << std::endl;
        std::cout << "4. Add Edge" << std::endl;
        std::cout << "5. Update Edge" << std::endl;
        std::cout << "6. Delete Edge" << std::endl;
        std::cout << "7. Check if 2 Vertices are Neighbors" << std::endl;
        std::cout << "8. Print All Neighbors of a Vertex" << std::endl;
        std::cout << "9. Print Graph" << std::endl;
        std::cout << "10. Clear Screen" << std::endl;
        std::cout << "0. Exit Program" << std::endl;

        std::cin >> option;

        switch (option) {
            case 0:
                break;
            case 1:
                std::cout << "Add vertex operation -" << std::endl;

                std::cout << "Input State ID: ";
                std::cin >> id1;
                std::cout << "Input State Name: ";
                std::cin >> sname;
                v1.setStateID(id1);
                v1.setStateName(sname);
                g.addVertex(v1);
                break;
            case 2:
                std::cout << "Update vertex operation -" << std::endl;

                std::cout << "Enter State ID of Vertex (State) to Update: ";
                std::cin >> id1;
                std::cout << std::endl;
                std::cout << "Enter State Name: ";
                std::cin >> sname;
                g.updateVertex(id1,sname);
                break;
            case 3:
                std::cout << "Delete vertex operation -" << std::endl;

                std::cout << "Enter ID of Vertex(State) to Delete: ";
                std::cin >> id1;
                g.deleteVertexbyID(id1);
                break;
            case 4:
                std::cout << "Add edge operation -" << std::endl;

                std::cout << "Enter ID of Source Vertex(State): ";
                std::cin >> id1;
                std::cout << std::endl;
                std::cout << "Enter ID of Destination Vertex(State): ";
                std::cin >> id2;
                std::cout << std::endl;
                std::cout << "Enter Weight of Edge: ";
                std::cin >> w;
                g.addEdgebyID(id1, id2, w);
                break;
            case 5:
                std::cout << "Update edge operation -" << std::endl;

                std::cout << "Enter ID of Source Vertex (State): ";
                std::cin >> id1;
                std::cout << std::endl;
                std::cout << "Enter ID of Destination vertex (State): ";
                std::cin >> id2;
                std::cout << "Enter UPDATED weight of edge between the 2 IDs: ";
                std::cin >> w;
                std::cout << std::endl;
                g.updateEdgebyID(id1, id2, w);

                std::cout << "Edge updated!" << std::endl;
                break;
            case 6:
                std::cout << "Delete edge operation -" << std::endl;

                std::cout << "Enter ID of Source Vertex (State): ";
                std::cin >> id1;
                std:cout << std::endl;
                std::cout << "Enter ID of Destination Vertex (State): ";
                std::cin >> id2;
                g.deleteEdgebyID(id1, id2);

                std::cout << "Edge deleted successfully!";
                break;
            case 7:
                std::cout << "Check if 2 vertices are neighbors -" << std::endl;

                break;
            case 8:
                std::cout << "Print all neighbors of a vertex -" << std::endl;

                break;
            case 9:
                std::cout << "Print graph operation -" << std::endl;

            default:
                std::cout << "Enter proper option number " << std::endl;
        }
        std::cout << std::endl;
    }
    while (option != 0);
};