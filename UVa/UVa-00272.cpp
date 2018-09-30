#include <iostream>
#include <string>

using namespace std;

int main()
{
  string textLine;
  int i=0;
  bool first = true;  
  while(getline (cin, textLine)){
    for (int i=0; i<textLine.length(); i++){
        if(textLine[i]=='\"') {
            if(first) { cout << '\`' << '\`' ; }
            else  { cout << '\'' << '\''; }
            first = !first;
        } else {
            cout << textLine[i];
        }
    }
  cout << "\n";
 }     
}
