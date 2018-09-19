#include <iostream>

using namespace std;

int main()
{
    int numQueries, N, M, divN, divM;
    cin >> numQueries;
    while(numQueries>0) {
        cin >> divN >> divM;
        for(int i=0; i<numQueries; i++){
            cin >> N >> M;
            if(N == divN || M == divM) cout << "divisa" << "\n";
            else if(N > divN && M > divM) cout << "NE" << "\n";
            else if(N < divN && M < divM) cout << "SO" << "\n";
            else if(N > divN && M < divM) cout << "SE" << "\n";
            else /*if(N < 0 && M > 0)*/ cout << "NO" << "\n";
        }
        cin >> numQueries;
    }
    return 0;
}