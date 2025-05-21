#include <iostream>
using namespace std;
main()
{
  string nomes[100];
  int idades[100];

  //entradas
  for (int i=0; i<10; i++)
  {
    cout << "Informe o nome: ";
    cin >> nomes[i];
    cout << "Informe a idade: ";
    cin >> idades[1];
  }

  int mais_velho = idades[0];
  for (int i=0; i<10; i++)
  {
    if (idades[i] > mais_velho)
    {
      mais_velho = idades[i];
    }
  }

  //saída
  for (int i=0; i<10; i++)
  {
    cout << "\nNome da " << i+1 << " pessoa: " << nomes[i];
    cout << "\nIdade: " << idades[1];
  }

  // cout << "\n\n Mais velho: " << nomes[];
}