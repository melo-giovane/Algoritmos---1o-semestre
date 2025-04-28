/* 
2. Construa um algoritmo que leia o nome e a nota de 20 alunos e ao final informe a média da
turma e se existe algum aluno com nota igual a 0 (zero).
*/

#include <iostream>

using namespace std;

int main()
{
  int zerados=0, alunos=0;
  float media, nota, somaNotas=0;
  string nome;

  for(int i=0; i < 20; i++)
  {
    cout << "Informe o seu nome: ";
    cin >> nome;

    cout << "Infome sua nota: ";
    cin >> nota;

    if (nota > 10 || nota < 0)
    {
      cout << "Entrada invalida" << endl;
      i--;
    }
    if (nota == 0)
    {
      zerados++;
      alunos++;
    }
    else
    {
      alunos++;
      somaNotas += nota;
    }
  }
  media = somaNotas / alunos;

  cout << "A media da turma foi: " << media << endl;

  if (zerados == 0)
  {
    cout << "Não tivemos nenhum aluno zerado";
  }
  else
  {
    cout << "Total de zerados: " << zerados;
  }

}