#include <iostream>

using namespace std;

int main()
{
    int m, n, cont = 0;
    cin >> m >> n;
    char mat[m+2][n+2];
    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            cin >> mat[i][j];
        }
    }

    for(int i=0; i < m+2; i++) mat[i][0]='.';
    for(int i=0; i < m+2; i++) mat[i][n+1]='.';
    for(int i=0; i < m+2; i++) mat[0][i]='.';
    for(int i=0; i < m+2; i++) mat[m+1][i]='.';

    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if(mat[i][j]=='#' && (mat[i-1][j] == '.' || mat[i+1][j] == '.' || mat[i][j-1] == '.' || mat[i][j+1] == '.')) cont++;
        }
    }
    cout << cont << endl;
}
