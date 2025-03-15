/*
3. Escreva um algoritmo que, tendo como dados de entrada a altura e o sexo de uma pessoa, calcule o seu peso ideal, utilizando as seguintes fórmulas:
Homens: Peso Ideal = 72.7 * altura – 58
Mulheres: Peso Ideal = 62.1 * altura – 44.7 
*/
#include <iostream>

using namespace std;

main()
{
  float pesoIdeal, altura;
  int genero;

  cout << "Informe a altura em metros: ";
  cin >> altura;
  cout << "Informe 1 para homem, 2 para mulher: ";
  cin >> genero;

  if(genero == 1)
  {
    pesoIdeal = (72.7 * altura) - 58;
  }
  else 
  {
    pesoIdeal = (62.1 * altura) - 44.7;
  }

  cout << "Peso ideal: " << pesoIdeal << "kg.";

}