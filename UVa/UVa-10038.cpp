#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testSize, firstElem, secondElem, item;
    bool isJolly;
    while(cin >> testSize) {
       bool maskSeq[testSize] ={false};
       cin >> firstElem;
       int i=0;
       isJolly = true;
       while(i<testSize-1) {
          cin >> secondElem;
          if((firstElem-secondElem)>=0) { item =firstElem-secondElem; }
          else { item =secondElem-firstElem; }
          if(item==0 || item==testSize || maskSeq[item-1]) { 
              isJolly=false;
          }
          else { maskSeq[item-1] = true; }
          firstElem = secondElem;
          i++;
       }
    
     if(isJolly) { cout << "Jolly" << "\n" ; }
     else { cout << "Not jolly" << "\n" ; }
    }  
    
    return 0;
}