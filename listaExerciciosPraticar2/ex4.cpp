/* 4. Escreva um algoritmo que leia um valor informado pelo usuário e informe se este é positivo ou negativo. */
#include <iostream>

using namespace std;

main()
{
  float numero;

  cout << "Informe um numero: ";
  cin >> numero;

  if(numero > 0)
  {
    cout << "Positivo";
  }
  else if(numero == 0)
  {
    cout << "Neutro";
  }
  else
  {
    cout << "Negativo";
  }

}