/* 
1. Faça um algoritmo que leia o nome e o sexo de 10 pessoas e ao final apresente o total de
homens e o total de mulheres.
*/

#include <iostream>

using namespace std;

main()
{
  int sexo, homem=0, mulher=0;

  
  for (int i=0; i < 10; i++)
  {
    cout << "informe 1 para homem, 2 para mulher: ";
    cin >> sexo;
    if (sexo == 1)
    {
      homem++;
    }
    else if (sexo == 2)
    {
      mulher++;
    }
    else
    {
      cout << "Entrda invalida" << endl;
      i--;
    }
  }

  cout << "Total de mulheres: " << mulher << endl;
  cout << "Total de homens: " << homem << endl;
  



}