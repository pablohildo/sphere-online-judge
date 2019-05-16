#include <iostream>

using namespace std;

int main() {
    int c, soma=0;
    cin >> c;
    char ent[c];
    cin >> ent;
    for (int i = 0; i < c; i++) {
      switch (ent[i]) {
        case 'P':
            soma += 2;
            break;
        case 'C':
            soma += 2;
            break;
        case 'A':
            soma += 1;
            break;
      }
    }
    cout << soma << endl;
    return 0;
}
