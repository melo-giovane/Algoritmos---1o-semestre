/* 
4. Elabore um algoritmo que leia o nome, o preço unitário e a quantidade vendida de vários
produtos, que serão informados pelo usuário. Obs.: como a quantidade de produtos é
indeterminada, para que o processo de leitura dos dados termine, o usuário deve digitar
“fim” quando for ler a variável que armazena o nome do produto.
Ao final, o algoritmo deverá apresentar:
a) O nome e o valor do produto mais barato;
b) O nome e a quantidade do produto mais vendido;
c) A média de preço dos produtos.
*/

#include <iostream>

using namespace std;

main()
{
  string produto, produtoMaisBarato, produtoMaisVendido;
  int vendas, maiorVendas=0, totalProdutos=0;
  float valor, somaValor=0, mediaValor, valorMaisBarato=9999999;


  cout << "Informe o nome do produto: ";
  cin >> produto;

  while (produto != "fim")
  {
    totalProdutos++;

    cout << "Informe o valor do produto: ";
    cin >> valor;
    cout << "Informe a quantidade vendida: ";
    cin >> vendas;


    if(valor < valorMaisBarato)
    {
      produtoMaisBarato = produto;
      valorMaisBarato = valor;
    }
    if(vendas > maiorVendas)
    {
      maiorVendas = vendas;
      produtoMaisVendido = produto;
    }
    somaValor += valor;

    cout << "Informe o nome do produto: ";
    cin >> produto;
  }

  if (totalProdutos > 0)
  {
    mediaValor = somaValor / totalProdutos;

    cout << "O produto mais barato eh: " << produtoMaisBarato << ", custando: R$" << valorMaisBarato << endl;
    cout << "O produto mais vendido eh: " << produtoMaisVendido << ", com o total de vendas sendo: " << maiorVendas << endl;
    cout << "A media do valor dos produtos eh: R$" << mediaValor << endl; 

  }



}