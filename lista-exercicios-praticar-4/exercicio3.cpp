#include <iostream>

using namespace std;

string nome;
int idade=0, idadeInformada;

main()
{
  cout << "Qual o seu nome? \nobs: Digite 'fim' para encerrar.\n";
  cin >> nome;

  while (nome != "fim")
  {
    cout << "Qual a sua idade?\n";
    cin >> idadeInformada;
    if (idadeInformada > idade)
    {
      idade = idadeInformada;
    }
    cout << "Qual o seu nome?\n";
    cin >> nome;
  }
  cout << "Idade do(a) aluno(a) mais velho: " << idade;
  
}