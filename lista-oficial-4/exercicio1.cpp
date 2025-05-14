/* 
1. Construa um algoritmo que leia o nome e a nota de 15 alunos na prova de algoritmos e ao
final apresente a média das notas da turma. Se o usuário desejar encerrar a leitura antes dos
15 alunos, o mesmo deve digitar “fim” para o nome.
*/

#include <iostream>

using namespace std;

main()
{
  int alunos=0;
  string nome;
  float nota, somaNota=0, mediaNota;

  while (alunos < 15)
  {
    cout << "Informe o nome ('fim' para encerrar): ";
    cin >> nome;
    if (nome == "fim")
    {
      break;
    }
    
    cout << "Informe sua nota na prova de algoritmos: ";
    cin >> nota;
    somaNota += nota;
    alunos++;
  }
  mediaNota = somaNota / alunos;

  cout << "Media dos alunos: " << mediaNota << endl;
}