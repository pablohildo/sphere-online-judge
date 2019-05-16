#include <iostream>

using namespace std;

int main() {
    char telefoneEnt[15], telefoneSai[15];
    cin >> telefoneEnt;
    for (int i = 0; i < 15; i++) {
        if (telefoneEnt[i] >= 65 && telefoneEnt[i] <= 67) {
            telefoneSai[i] = '2';
        } else if(telefoneEnt[i] >= 68 && telefoneEnt[i] <= 70){
            telefoneSai[i] = '3';
        } else if(telefoneEnt[i] >= 71 && telefoneEnt[i] <= 73){
            telefoneSai[i] = '4';
        } else if(telefoneEnt[i] >= 74 && telefoneEnt[i] <= 76){
            telefoneSai[i] = '5';
        } else if(telefoneEnt[i] >= 77 && telefoneEnt[i] <= 79){
            telefoneSai[i] = '6';
        } else if(telefoneEnt[i] >= 80 && telefoneEnt[i] <= 83){
            telefoneSai[i] = '7';
        } else if(telefoneEnt[i] >= 84 && telefoneEnt[i] <= 86){
            telefoneSai[i] = '8';
        } else if(telefoneEnt[i] >= 87 && telefoneEnt[i] <= 90){
            telefoneSai[i] = '9';
        } else {
            telefoneSai[i] = telefoneEnt[i];
        }
    }
    cout << telefoneSai << endl;
    return 0;
}
