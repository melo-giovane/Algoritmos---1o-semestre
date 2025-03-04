/* 
Faça um algoritmo para calcular o volume de uma esfera de raio r. Fórmula:
 V = 4πr3 / 3 
*/
#include <iostream>

using namespace std;

main()
{
  // v
  float volume, raio;
  // e
  cout << "Qual o raio da esfera? ";
  cin >> raio;

  // p 
  volume = (4 * 3.1416 * raio * raio * raio / 3);
  // s
  cout << "O volume de uma esfera de raio " << raio << " eh: " << volume << ".\n";
}
