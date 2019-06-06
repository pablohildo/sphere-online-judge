#include <iostream>

using namespace std;

int main(){
    int n, m, menor = 0, aux = 0, auxCarro = 0;
    cin >> n >> m;
    int carros[2][n] = {0};
    // Leitura
    for (int i = 0; i < n; i++)
    {
        carros[0][i] = i+1;
        for (int j = 0; j < m; j++)
        {
            int entrada;
            cin >> entrada;
            carros[1][i] += entrada;
        }
    }
    // Ordenação
    for (int i = 0; i < n-1; i++)
    {
        menor = i;
        for (int j = i+1; j < n; j++)
        {
            if(carros[1][j] < carros[1][menor]){
                menor = j;
            }
        }
        aux = carros[1][i];
        auxCarro = carros[0][i];
        carros[1][i] = carros[1][menor];
        carros[0][i] = carros[0][menor];
        carros[1][menor] = aux;
        carros[0][menor] = auxCarro;
    }
    // Impressão
    for (int i = 0; i < 3; i++)
    {
        cout << carros[1][i] << endl;
    }  
}