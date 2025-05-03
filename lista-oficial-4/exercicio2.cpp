/* 
2. Construa um algoritmo que leia o nome e a idade de vários alunos de uma turma e ao final
apresente na tela o nome e a idade do aluno mais velho. Como o número de alunos é
indeterminado, faça com que para parar a leitura dos nomes e idades, o usuário tenha que
digitar 0 (zero) para a idade.
*/

#include <iostream>

using namespace std;

main()
{
  string nome, maisVelho;
  int idade, idadeMaisVelho=-2;

  cout << "Informe a idade ('0' para encerrar): ";
  cin >> idade;

  while (idade != 0)
  {
    cout << "informe o nome: ";
    cin >> nome;

    if (idade > idadeMaisVelho)
    {
      idadeMaisVelho = idade;
      maisVelho = nome;
    }

    cout << "informe a idade ('0' para encerrar): ";
    cin >> idade;


  }

  cout << "Aluno(a) mais velho(a): " << maisVelho << endl;
  cout << "Idade do(a) aluno(a) mais velho(a): " << idadeMaisVelho << endl;
}