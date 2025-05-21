#include <iostream>

using namespace std;

main()
{
  int idade=1, maisVelho=0, qtdMaisVelhos=0;

  while (idade != 0)
  {
    cout << "Informe sua idade (Digite 0 para sair): ";
    cin >> idade;

    if (idade > maisVelho)
    {
      maisVelho = idade;
      qtdMaisVelhos=1;
    }
    else if (idade == maisVelho)
    {
      qtdMaisVelhos++;
    }
  }

  cout << "Idade dos mais velhos: " << maisVelho << endl;
  cout << "Quantidade de pessoas com a idade de mais velho: " << qtdMaisVelhos << endl;
}