#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        string x;
        cin >> x;
        if(x == "0"){
            break;
        }
        int somaP = 0, somaI = 0;
        for(int i = 0; i < x.size(); i++){
            if((i+1)%2==0){
                somaP +=  x[i]-'0';
            } else {
                somaI += x[i]-'0';
            }
        }
        if((somaI - somaP)%11 == 0)
        {
            cout << x << " is a multiple of 11." << endl;
        } else if((somaI-somaP)==0){
            cout << x << " is a multiple of 11." << endl;
        } else {
            cout << x << " is not a multiple of 11." << endl;
        }
    }
}
