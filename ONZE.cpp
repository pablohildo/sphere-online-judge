#include <iostream>

using namespace std;

int main(){
    int n;
    while (true) {
        cin >> n;
        if(n == 0) break;
        if(n%11 == 0) cout << n << " is a multiple of 11." << endl;
        else cout << n << " is not a multiple of 11." << endl;
    }
}
