#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n, m, a, k;
    int somaN=0,somaM=0,somaA=0,somaK=0;
    string senha;
    cin >> n >> m >> a >> k;
    cin >> senha;
    somaN = senha.size();
    for (int i = 0; i < somaN; i++) {
        if (senha[i] >= 97 && senha[i] <= 122) somaM++;
        if (senha[i] >= 65 && senha[i] <= 90) somaA++;
        if (senha[i] >= 48 && senha[i] <= 57) somaK++;
    }
    if(somaN < n || somaM < m || somaA < a || somaK < k) cout << "Ufa :)" << endl;
    else cout << "Ok =/" << endl;
}
