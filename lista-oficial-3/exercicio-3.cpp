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
int contAltos=0, contMaisVelhos=0, idade, idadeMaisNovo=200;
string maisAlto, maisNovo, nome;
float altura, mediaIdade, somaIdades, alturaMaisAlto =0;

for (int i = 0; i < 20; i++)
{
  cout << "Qual seu nome?" << endl;
  cin >> nome;
  cout << "Qual sua idade?" << endl;
  cin >> idade;
  cout << "Qual sua altura?" << endl;
  cin >> altura;

  if (altura > 1.8)
  {
    contAltos++;
    somaIdades += idade;
  }
  if (idade > 35)
  {
    contMaisVelhos++;
  }
  if (idade < idadeMaisNovo)
  {
    idadeMaisNovo = idade;
    maisNovo = nome;
  }
  if (altura > alturaMaisAlto)
  {
    alturaMaisAlto = altura;
    maisAlto = nome;
  }
}
mediaIdade = somaIdades / contAltos;

cout << "A media de idade das pessoas com mais de 1,8m eh: " << mediaIdade << endl;
cout << "O total de pessoas com mais de 35 anos eh: " << contMaisVelhos << endl;
cout << "O nome do mais alto eh: " << maisAlto << endl;
cout << "O nome do mais novo eh: " << maisNovo << endl;
}