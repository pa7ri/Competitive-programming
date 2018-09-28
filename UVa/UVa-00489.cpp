#include <iostream>

#include <map>

using namespace std;

bool isWordGuessed(map<char, bool> mp, map<char, bool>::iterator it);

int main()
{
    int numRound, maxTries=7, localTries;
    string winWord, guessWord;
    map<char, bool> guessedLetters; 
    map<char, bool> usedLetters; 
    map<char, bool>::iterator it; 
    map<char, bool>::iterator itTry; 
    cin >> numRound; 
    while(numRound!=-1) {
       guessedLetters.clear();
       usedLetters.clear();
       cin >> winWord >> guessWord;
       localTries=maxTries;
       for(int i=0; i<winWord.length(); i++) {
           guessedLetters.insert({winWord[i], false});
        } 
        int j=0;
        while(localTries>0 && j<guessWord.length() && !isWordGuessed(guessedLetters, it)) {  
            itTry=usedLetters.find(guessWord[j]);
            if(itTry==usedLetters.end()) {
                usedLetters.insert({guessWord[j], false});
                it = guessedLetters.find(guessWord[j]);
                if(it != guessedLetters.end()) {
                    it->second = true;
                }
               else{  localTries--;   } 
            }
            j++; 
        }
      cout << "Round " << numRound << endl;
      if(localTries<=0) { 
        cout << "You lose." << endl;
      }
      else if(isWordGuessed(guessedLetters, it)) {
        cout << "You win." << endl;
      }
      else {
        cout << "You chickened out." << endl;
      }
      cin >> numRound; 
      }
  
    return 0;
}



bool isWordGuessed(map<char, bool> mp, map<char, bool>::iterator it) {
    it = mp.begin();
    while(it!=mp.end()) {
     if(!it->second) { return false; }
     it++;
     }
  return true;
 }