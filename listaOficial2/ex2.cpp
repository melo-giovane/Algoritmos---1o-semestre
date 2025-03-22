/* 
Suponha que o conceito de um aluno seja determinado em função da sua nota. Suponha
também que esta nota seja um valor inteiro na faixa de 0 a 100 conforme a seguinte faixa:

Nota Conceito
0 a 39 = E
40 a 59 = D
60 a 75 = C
76 a 89 = B
90 a 100 = A
Crie um algoritmo que apresente o conceito e a nota do aluno.
*/

#include <iostream>

using namespace std;

main()
{
  int nota;
  string conceito;

  cout << "Informe a nota: ";
  cin >> nota;

  if(nota > 100 || nota < 0)
  {
    cout << "Nota invalida";
  }
  else if(nota >= 90)
  {
    conceito = "A";
  }
  else if(nota > 75)
  {
    conceito = "B";
  }
  else if(nota > 60)
  {
    conceito = "C";
  }
  else if(nota >= 40)
  {
    conceito = "D";
  }
  else
  {
    conceito = "E";
  }
  
  cout << "Nota: " << nota << endl;
  cout << "Conceito: " << conceito;
}