#include <iostream>

using namespace std;

int main(){
  int n, pivot=1, somapre=0, somapos=0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  while (true) {
    for (int i = 0; i <= pivot; i++){
      somapre+=a[i];
      cout << "somapre" << somapre << endl;
    }
    for (int i = 0; i >= pivot; i++){
      somapos+=a[i];
      cout << "somapos " << somapos << endl;
    }
    if(somapre == somapos) break;
    if(pivot > n) break;
    somapre = 0;
    somapos = 0;
    pivot++;
  }
  cout << pivot << endl;
}
