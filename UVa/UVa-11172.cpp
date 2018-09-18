#include <iostream>

using namespace std;

int main()
{
    int caseNum, firstNum, secondNum;
    cin >> caseNum;
    while(caseNum>0) {
        cin >> firstNum >> secondNum;
        if(firstNum<secondNum) cout << "<" << "\n";
        else if(firstNum>secondNum) cout << ">" << "\n";
        else cout << "=" << "\n";
        caseNum--;
    }
    return 0;
}
