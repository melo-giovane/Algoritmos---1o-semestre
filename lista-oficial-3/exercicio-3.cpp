/* 
3. Construa um algoritmo que leia o nome, a idade e a altura de 20 pessoas e ao final
apresente:
a) A média de idade das pessoas com mais de 1,80 de altura
b) O total de pessoas com mais de 35 anos
c) O nome do mais alto
d) O nome do mais novo
*/

#include <iostream>

using namespace std;

main()
{
int contAltos, contVelhos, idade;
string maisAlto, maisVelho, nome;
float altura;

for (int i = 0; i < 20; i++)
{
  cout << "Qual seu nome?" << endl;
  cin >> nome;
  cout << "Qual sua idade?" << endl;
  cin >> idade;
  cout << "Qual sua altura?" << endl;
  cin >> altura;
}

}