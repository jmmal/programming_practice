#include <vector>
#include <iostream>

class CastleGuards
{
public:
	int missing(std::vector<std::string> castle);
};

int CastleGuards::missing(std::vector<std::string> castle)
{
	int numRows = 0;
	int numCols = 0;
	
	bool tempRow = false;
	bool tempCol = false;

	for(int i = 0; i < castle.size(); i++) {
		for(int j = 0; j < castle[0].length(); j++) {
			if (castle[i][j] == 'X') tempRow = true;
		}
		if (!tempRow) numRows++;
		tempRow = false;
	}
	
	for(int i = 0; i < castle[0].length(); i++) {
		for(int j = 0; j < castle.size(); j++) {
			if (castle[j][i] == 'X') tempCol = true;
		}
		if (!tempCol) numCols++;
		tempCol = false;
	}

	if ( numCols > numRows) return numCols;
	return numRows;
}
