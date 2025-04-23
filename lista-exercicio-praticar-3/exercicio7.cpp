/* 
7. Construa um algoritmo que leia o nome e a nota de 40 alunos e se o aluno tiver uma nota
igual ou superior a 7, informe que este aluno está aprovado, caso contrário, apresente que
o mesmo está reprovado.
*/
#include <iostream> 

using namespace std;

float nota;

main()
{
  for (int i=0; i < 40; i++)
  {
    cout << "Informe a sua nota: ";
    cin >> nota;

    while (nota > 10 || nota < 0)
    {
      cout << "Dados invalidos, informe novamente: ";
      cin >> nota;
    }
    
    if (nota >= 7)
    {
      cout << "Aprovado" << endl;
    }
    else
    {
      cout << "Reprovado" << endl;
    }
  }
}