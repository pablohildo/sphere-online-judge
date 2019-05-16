#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, a, b, cont = 1;
    char player1[10];
    char player2[10];

    while (true) {
        cin >> n;
        if (n == 0) break;
        cin >> player1;
        cin >> player2;
        cout << "Teste " << cont << endl;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if((a+b)%2 == 0) cout << player1 << endl;
            else cout << player2 << endl;
        }
        cout << endl;
        cont++;
    }
    return 0;
}
