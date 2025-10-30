#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int diagPrincipal = 0, diagSecundaria = 0;

    cout << "Digite os elementos da matriz 3x3:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0;i<3;i++){
        diagPrincipal += matriz[i][i];
        diagSecundaria += matriz[i][2-i];
    }

    cout << "Soma da diagonal principal: " << diagPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << diagSecundaria << endl;

    return 0;
}
