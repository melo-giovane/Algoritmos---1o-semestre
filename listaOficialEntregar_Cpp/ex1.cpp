/* 
1. Construa um algoritmo que leia a cotação do dólar, leia um valor em dólares, converta esse
valor para Real e mostre o resultado.
*/

#include <iostream>

using namespace std;
main() 
{
  //v
    float cotDolar, dolar, real;

  //e
  cout << "Insira o valor em dolar ";
  cin >> dolar;

  cout << "\n qual a cotacao do dolar? ";
  cin >> cotDolar;
  //p
  real = dolar * cotDolar;

  //s
  cout << "O valor em reais eh:R$ " << real;

}