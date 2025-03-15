/* 
6. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem. Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas propriedades e definições.

Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
Definição 1 – chama-se triângulo equilátero aquele que têm os comprimentos dos três lados iguais.
Definição 2 – chama-se triângulo isóscele aquele que tem os comprimentos de dois lados iguais
Definição 3 – chama-se triângulo escaleno aquele que tem os comprimentos dos três lados diferentes.
*/

#include <iostream>

using namespace std;

main()
{
  float lado1, lado2, lado3;


  cout << "Informe o comprimento do lado 1: ";
  cin >> lado1;
  cout << "Informe o comprimento do lado 2: ";
  cin >> lado2;
  cout << "Informe o comprimento do lado 3: ";
  cin >> lado3;

  if (lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado2))
  {
    cout << "Nao eh um triangulo";
  }
  else 
  {
    if ((lado1 == lado2) && (lado2 == lado3))
    {
      cout << "Triangulo equilatero";
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
      cout << "Triangulo isocele";
    }
    else
    {
      cout << "Triangulo escaleno";
    }

  }

  
  
}

