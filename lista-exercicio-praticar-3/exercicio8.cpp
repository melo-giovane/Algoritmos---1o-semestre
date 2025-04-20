/* 8. Construa um algoritmo que leia a idade e altura de 20 alunos e ao final apresente a média
de idade dos alunos acima de 1,75 de altura e quantos alunos maiores 25 anos existe na
turma. */

#include <iostream>

using namespace std;

int idade, mais25=0, altos=0;
float altura, mediaIdadeMaiores, somaIdadeMaiores=0;

main()
{
  for (int i=0; i < 20; i++)
  {
    cout << "Informe sua idade: ";
    cin >> idade;
    cout << "informe sua altura: ";
    cin >> altura;
  
  if (altura > 1.75)
  {
    altos++;
    somaIdadeMaiores += altura;
  }
  if (idade >= 25)
  {
    mais25++;
  }
 }
  mediaIdadeMaiores = somaIdadeMaiores / altos;

  cout << "media de idade dos alunos acima de 1,75 de altura: " << mediaIdadeMaiores;
  cout << endl << "Quantidade de alunos maiores de 25 anos: " << mais25;
}