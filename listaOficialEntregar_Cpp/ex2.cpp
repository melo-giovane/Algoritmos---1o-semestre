/* 
2. Uma sorveteria vende 3 tipos de picolés. Sabendo-se que o picolé do tipo 1 é vendido por
R$ 0,50, o do tipo 2 por R$ 0,60 e o do tipo 3 por R$ 0,75, faça um algoritmo que, para cada
tipo de picolé, mostre a quantidade vendida e o total arrecadado.
*/

#include <iostream>

using namespace std;

main()
{
  // v
  int qtdPicole1, qtdPicole2, qtdPicole3, totalVendas;
  float totalArrecadado;
 
  // e
  cout << "informe a quantidade de vendas do picole tipo 1: ";
  cin >> qtdPicole1;

  cout << "informe a quantidade de vendas do picole tipo 2: ";
  cin >> qtdPicole2;

  cout << "informe a quantidade de vendas do picole tipo 3: ";
  cin >> qtdPicole3;
  // p 
  totalVendas = qtdPicole1 + qtdPicole2 + qtdPicole3;
  totalArrecadado = (qtdPicole1 * 0.5) + (qtdPicole2 * 0.6) + (qtdPicole3 * 0.75);

  // s
  cout << "O total de vendas foram: " << totalVendas <<"." << endl;
  cout << "Valor total arrecadado: R$" << totalArrecadado;
}