#include <iostream>
using namespace std;

int main() {
    int matriz[5][5], linha, soma = 0;

    cout << "Digite os elementos da matriz 5x5:\n";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Informe o número da linha (0 a 4): ";
    cin >> linha;

    for(int j=0;j<5;j++){
        soma += matriz[linha][j];
    }

    cout << "Soma dos elementos da linha " << linha << ": " << soma << endl;
    return 0;
}
