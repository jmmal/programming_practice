#include <vector>
#include <queue>
#include <iostream>

class CellRemoval
{
public:
    int cellsLeft(std::vector<int> parent, int deletedCell);
};

int CellRemoval::cellsLeft(std::vector<int> parent, int deletedCell)
{
    int matureCells = parent.size();
    std::vector<bool> parentNodes(parent.size(), false);
    for (size_t i = 0; i < parent.size(); i++) {
        if (parent[i] == -1) {
            if (!parentNodes[i]) {
                parentNodes[i] = true;
                matureCells--;
            }
        } else if (!parentNodes[parent[i]]) {
            parentNodes[parent[i]] = true;
            matureCells--;
        }
    }

    std::queue<int> cells;
    cells.push(deletedCell);
    int tempCell;
    while(!cells.empty()) {
        tempCell = cells.front();
        cells.pop();
        if (parentNodes[tempCell]) {
            for (size_t i = 0; i < parent.size(); i++) {
                if (parent[i] == tempCell) {
                    cells.push(i);
                }
            }
        } else {
            matureCells--;
        }
    }

    return matureCells;
}
