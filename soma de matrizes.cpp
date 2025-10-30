#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int soma = 0;

    cout << "Digite os elementos da matriz 3x3:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }

    cout << "Soma de todos os elementos: " << soma << endl;
    return 0;
}
