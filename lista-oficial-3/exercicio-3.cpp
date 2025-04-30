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
int contAltos=0, contMaisVelhos=0, idade, idadeMaisVelho, alturaMaisAlto =0;
string maisAlto, maisVelho, nome;
float altura, mediaAltura, somaAltura;

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
  }
  if (idade > 35)
  {
    contMaisVelhos++;
    somaAltura += altura;
  }
  if (idade > idadeMaisVelho)
  {
    maisVelho = nome;
  }
  if (altura > alturaMaisAlto)
  {
    maisAlto = nome;
  }
}
mediaAltura = somaAltura / contMaisVelhos;

cout << "A media de idade das pessoas com mais de 1,8m é: " << mediaAltura << endl;
cout << "O total de pessoas com mais de 35 canos eh: " << contMaisVelhos << endl;
cout << "O nome do mais alto eh: " << maisAlto << endl;
cout << "O nome do mais velho eh: " << maisVelho << endl;

}