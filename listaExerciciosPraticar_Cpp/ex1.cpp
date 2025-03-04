/* 
1. Faça um algoritmo onde o usuário digita a
temperatura em graus Celsius e o algoritmo
converte o valor para graus Farenheit. A
fórmula de conversão é:
°F = °C * 1,8 + 32
*/
#include <iostream>

using namespace std;

main() 
{
    // V
    float grausF, grausC;

    // E
    cout << "Qual a temperatura em celsius: ";
    cin >> grausC;

    // P
    grausF = (grausC * 1.8) + 32;

    // S
    cout << "A temperatura em farenheit eh " << grausF << "F";
}