#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2] = {0};

    cout << "Digite os elementos da matriz A (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> A[i][j];

    cout << "Digite os elementos da matriz B (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> B[i][j];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultado da multiplicação A x B:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
