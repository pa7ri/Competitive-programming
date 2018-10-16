#include <iostream>

using namespace std;

/*Directions :
*0 -> up
*1 -> left
*2 -> down
*3 -> right
*/

int main()
{
	int currentDir, sizeSpiral, numSearched, posX, posY, spiralCounter, spiralCorner, i;
	bool found;

	cin >> sizeSpiral >> numSearched;

	while (sizeSpiral != 0 && numSearched != 0) {
		spiralCounter = 1, spiralCorner = 1, currentDir = 0;
		found = false;
		posX = sizeSpiral / 2 + 1;
		posY = sizeSpiral / 2 + 1;

		while (!found){
			i = 0;
			while (i < spiralCorner && !found) {
				if (spiralCounter == numSearched) {
					found = true;
				}
				else {
					switch (currentDir) {
						case 0: {
							posY++;
							break;
						}
						case 1: {
							posX--;
							break;
						}
						case 2:{
							posY--;
							break;
						}
						case 3: {
							posX++;
							break;
						}
					}
				}
				i++;
				spiralCounter++;
			}
			if (currentDir != 3) {
				currentDir++;
			}
			else currentDir = 0;

			if (currentDir == 0 || currentDir == 2) spiralCorner++;
		}
		cout << "Line = " << posY << ", column = " << posX << "." << endl;
		cin >> sizeSpiral >> numSearched;
	}

	return 0;
}