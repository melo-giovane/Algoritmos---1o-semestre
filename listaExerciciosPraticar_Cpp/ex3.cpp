/* 
3. Construa um algoritmo para pagamento de comissão de vendedores de peças, levando em
consideração que sua comissão será de 5% do total da venda e que você tem os seguintes
dados: Identificação do vendedor, Preço unitário da peça e Quantidade vendida.
*/
#include <iostream>

using namespace std;

main()
{
  // v
  int qtdPicole1, qtdPicole2, qtdPicole3, totalVendas;
  float totalArrecadado;
 
  // e
  cout << "informe a quantidade de vendas do picole tipo 1";
  cin >> qtdPicole1;

  cout << "informe a quantidade de vendas do picole tipo 2";
  cin >> qtdPicole2;

  cout << "informe a quantidade de vendas do picole tipo 3";
  cin >> qtdPicole3;
  // p 
  totalVendas = qtdPicole1 + qtdPicole2 + qtdPicole3;
  totalArrecadado = (qtdPicole1 * 0.5) + (qtdPicole2 * 0.6) + (qtdPicole3 * 0.75);

  // s
  cout << "O total de vendas foram: " << totalVendas <<"." << endl;
  cout << "Valor total arrecadado: R$" << totalArrecadado;
}
