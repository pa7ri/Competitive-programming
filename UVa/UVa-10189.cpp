#include <iostream>

using namespace std;

int countMines(char field[100][100], char currentChar, int posX, int posY, int fieldSizeX, int fieldSizeY);

int main()
{
    
    int fieldSizeX, fieldSizeY, numField=1;
    string line;
    char field[100][100];
    char currentChar;
    cin >> fieldSizeX >> fieldSizeY;
    while(fieldSizeX>0 && fieldSizeY>0) {
        
        for(int i=0; i<fieldSizeX; i++) {
        cin >> line;
         for(int j=0; j<fieldSizeY; j++) {
             field[i][j]=line[j];
         }
        }
        
        cout << "Field #" << numField << ":" << endl;
        for(int i=0; i<fieldSizeX; i++) {
         for(int j=0; j<fieldSizeY; j++) {
             currentChar=field[i][j];
             if(currentChar=='*') cout << "*";
             else cout << countMines(field,currentChar, i, j,fieldSizeX,fieldSizeY);
         }
         cout << endl;
        }
    cin >> fieldSizeX >> fieldSizeY;
    if(fieldSizeX!=0 && fieldSizeY!=0) {    	
         cout << endl;
    }
    numField++;
    }
    return 0;
}



int countMines(char field[100][100] ,char currentChar, int posX, int posY, int fieldSizeX, int fieldSizeY) {
    int mines = 0;
    if(posX>0 && field[posX-1][posY] =='*') mines++;
    if(posX<fieldSizeX-1 && field[posX+1][posY] =='*') mines++;
    if(posY>0 && field[posX][posY-1]=='*') mines++;
    if(posY<fieldSizeY-1 && field[posX][posY+1]=='*') mines++;
    if(posX>0 && posY>0 && field[posX-1][posY-1]=='*') mines++;
    if(posX<fieldSizeX-1 && posY<fieldSizeY-1 && field[posX+1][posY+1]=='*') mines++;
    if(posX>0 && posY<fieldSizeY-1 && field[posX-1][posY+1]=='*') mines++;
    if(posX<fieldSizeX-1 && posY>0 && field[posX+1][posY-1]=='*') mines++;
    return mines;
}
