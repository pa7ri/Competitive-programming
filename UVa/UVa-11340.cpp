#include <iostream>
#include <string>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main() {
    int numTest, numPaidChar, numLines;
    double totalPayment, priceChar;
    char c;
    unordered_map<char, double>  priceCharHash;
    unordered_map<char, double>::const_iterator got;
    string text;
    
        cout << fixed;
        cout << setprecision(2);
    
    cin >> numTest;
    
    for(int i =0;i < numTest; i++) {
       priceCharHash.clear();
       totalPayment =0;
       cin >> numPaidChar;
       for(int j =0; j <numPaidChar; j++) { 
           cin >> c >> priceChar;
           priceCharHash.insert({c, priceChar});
        }
        cin >> numLines; 
        cin.ignore();
        for(int k =0; k <numLines; k++) {  
            getline(cin, text);
            for(int h =0; h <text.length(); h++) {
               got = priceCharHash.find(text[h]);
               if(got!=priceCharHash.end()) {
                totalPayment+=priceCharHash.at( text[h] );
               }
            }
        }
        cout << (totalPayment/100) << "$" << "\n";
    } 
    return 0;
}