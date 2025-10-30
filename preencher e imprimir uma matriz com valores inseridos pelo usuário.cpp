#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];

    cout << "Digite os elementos da matriz 2x2:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz completa:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
