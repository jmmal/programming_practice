#include <vector>
#include <iostream>

class TrafficMonitor
{
public:
    int getMin(std::vector<std::string> links);
};


int TrafficMonitor::getMin(std::vector<std::string> links)
{
    int monitors = 0;
    int nodes = links.size();
    bool graph[nodes][nodes];

    for (size_t i = 0; i < nodes; i++) {
        for (size_t j = 0; j < nodes; j++) {
            if (links[i][j] == 'Y') graph[i][j] = true;
            else graph[i][j] = false;
        }
    }

    bool nodesLeft = true;
    int edges;
    int parent;

    while (nodesLeft) {
        nodesLeft = false;
        for (size_t i = 0; i < nodes; i++) {
            edges = 0;
            for (size_t j = 0; j < nodes; j++) {
                if (graph[i][j]) {
                    edges++;
                    parent = j;
                }
            }

            // found a leaf
            if (edges == 1) {
                for (size_t x = 0; x < nodes; x++) {
                        graph[x][parent] = false;
                        graph[parent][x] = false;
                }
                monitors++;
                nodesLeft = true;
                break;
            }
        }
    }

    return monitors;
}
