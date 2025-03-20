/* 
1. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. Construa um algoritmo que
mostre o nome e a conta de um cliente, tendo como base as seguintes taxas de serviços é:
R$ 5.50 por diária, se o número de diárias for maior que 5;
R$ 7.00 por diária, se o número de diárias for igual a 5;
R$ 9.00 por diária, se o número de diárias for menor que 5.
*/
#include <iostream>

using namespace std;

main()
{
  string nome;
  int diarias;
  float taxa, vlrDiarias, vlrTotal;

  cout << "Informe o nome: ";
  cin >> nome;
  cout << "Informe a quantidade de diarias: ";
  cin >> diarias;

  if (diarias > 5)
  {
    taxa = diarias * 5.5;
  }
  else if (diarias == 5)
  {
    taxa = diarias * 7;
  }
  else
  {
    taxa = diarias * 9;
  }

  vlrDiarias = 60 * diarias;
  vlrTotal = vlrDiarias + taxa;
  
  cout << "Cliente: " << nome << endl;
  cout << "Quantidade de diarias: " << diarias << endl;
  cout << "Valor das diarias:....R$" << vlrDiarias << endl;
  cout << "Valor da taxa:........R$" << taxa << endl;
  cout << "Valor total:..........R$" << vlrTotal;
}