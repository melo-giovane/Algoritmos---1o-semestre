/* 
1. Faça um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso.
Depois solicite ao usuário o número do mês e o algoritmo deverá escrever na tela o nome
do mês.
*/
#include <iostream>

using namespace std;

main()
{
    string meses[12] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    int numeroMes;

    cout << "Digite o numero do mes (1 a 12): ";
    cin >> numeroMes;

    if (numeroMes >= 1 && numeroMes <= 12) {
        cout << "O mes correspondente eh: " << meses[numeroMes - 1] << endl;
    } else {
        cout << "Numero invalido. Digite um numero de 1 a 12." << endl;
    }

    return 0;
}
