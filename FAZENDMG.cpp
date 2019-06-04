#include <iostream>

using namespace std;
bool mat[1502][1502] = {};
int main(){
    int n, x, y, l, c, area = 0, perimetro = 0;
    while (true)
    {
        cin >> n;

        if(n == 0) break;

        for (int i = 0; i < n; i++)
        {
            cin >> x >> y >> l >> c;
            for (int j = x; j < x + l; j++)
            {
                for (int k = y; k < y+c; k++)
                {
                    mat[j+1][k+1] = true;
                }
            }     
        }
        for (int i = 0; i < 1502; i++)
        {
            for (int j = 0; j < 1502; j++)
            {
                if(mat[i][j]){
                    area++;
                    if (!mat[i][j+1]) perimetro++;
                    if (!mat[i][j-1]) perimetro++;
                    if (!mat[i+1][j]) perimetro++;
                    if (!mat[i-1][j]) perimetro++;
                }
            }
        }
        cout << area << ' ' << perimetro << endl;
        area = 0;
        perimetro = 0;
        for (int i = 0; i < 1502; i++)
        {
            for (int j = 0; j < 1502; j++)
            {
                mat[i][j] = 0;
            }
        }
    }
}