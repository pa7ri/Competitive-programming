#include <iostream>
#include <map>
#include <iomanip> 

using namespace std;

int main()
{
    int numTests;
    float percentage, totalTrees;
    string tree;
    map<string, float> reserveTrees;
    map<string, float>::iterator it;
    
    cout << fixed;
    cout << setprecision(4);
    
    cin >> numTests;
    cin.ignore();
    getline(cin,tree);
    for(int i=0; i<numTests; i++) {
        reserveTrees.clear();
        totalTrees = 0;
        getline(cin,tree);
        while(tree != "") {
            it = reserveTrees.find(tree);    
            if(it != reserveTrees.end()) {
                it->second++;
            }
            else { reserveTrees.insert({tree, 1}); }
            getline(cin,tree);
            totalTrees++;
        }
        
        if(totalTrees!=0) {
            for (it=reserveTrees.begin(); it!=reserveTrees.end(); it++) {
                percentage = it->second / totalTrees * 100;
                cout << it->first << " " << percentage << endl;
            }
            if(i!=numTests-1) cout << endl;
        }
    }
    return 0;
}