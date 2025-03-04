/* 
Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Para isso o
usuário deverá informar apenas a sua data de nascimento. Considere que cada mês tenha
30 dias e o ano tenha 360 dias.
*/

#include <iostream>

using namespace std;

main()
{
  // v
  int diaN, mesN, anoN;
  int dias;
  // e
  cout << "Informe o ano de nascimento: ";
  cin >> anoN;
  
  cout << "Informe o mes de nascimento: ";
  cin >> mesN;
  
  cout << "Informe o dia de nascimento: ";
  cin >> diaN;

  // p 
  dias = ((2025 - anoN) * 360) + (56 - ((mesN * 30) + diaN));

  // s
  cout << "A pessoa viveu " << dias << " ate a data de 26/02/2025";
}