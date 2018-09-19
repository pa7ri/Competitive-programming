#include <iostream>

using namespace std;

int main()
{
    int numContestants, budget, numHotels, numWeeks, numBeds, priceWeekend, minPrice, localCost;
    bool possible;
    
    while(cin >> numContestants >> budget >> numHotels >> numWeeks){
        minPrice = budget;
        possible = false;
        for(int i=0; i<numHotels; i++) {
            cin >> priceWeekend;
            for(int j=0; j <numWeeks; j++) {
                cin >> numBeds;
                localCost = numContestants*priceWeekend;
                if(numBeds>= numContestants && minPrice>localCost ) {
                    possible = true;
                    minPrice = localCost;
                }
            }
            
        }
        if(possible) { cout << minPrice << "\n"; }
        else { cout << "stay home" << "\n"; }
        
    }
    
    return 0;
}