/* 
4. Considere que para um automóvel que realizou determinado percurso, se tenha: marca,
quilometragem inicial, quilometragem final e litros consumidos. Faça um algoritmo que
mostre um relatório contendo, além destes dados, qual o consumo do automóvel em
Km/litros. 
*/

#include <iostream>

using namespace std;

main()
{
  // v
  string marca;
  float kmInicial, kmFinal, kmRodados, litrosConsumidos, consumo;
  
  // e
  cout << "Insira o nome da marca do veículo: ";
  cin >> marca;

  cout << "Qual a km inicial? ";
  cin >> kmInicial;

  cout << "Qual a km final? ";
  cin >> kmFinal;

  cout << "Quantos litros consumiu? ";
  cin >> litrosConsumidos;

  // p 
  kmRodados = kmFinal - kmInicial;
  consumo = ((kmRodados) / litrosConsumidos);
  
  // s
  cout << "\n===========================\n";
  cout << "Marca do veiculo: " << marca << endl;
  cout << "Km inicial: " << kmInicial << "km" << endl;
  cout << "Km final: " << kmFinal << "km" << endl;
  cout << "km rodados: " << kmRodados << "km"<< endl;
  cout << "Consumo: " << consumo << "Km/litros";
  cout << "\n===========================\n";
}
