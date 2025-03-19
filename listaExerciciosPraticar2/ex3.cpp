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

  cout << "Informe 1 para masculino, 2 para feminino: ";
  cin >> genero;
  cout << "Informe a altura em metros: ";
  cin >> altura;

  if(genero == 1)
  {
    pesoIdeal = (72.7 * altura) - 58;
  }
  else if(genero == 2)
  {
    pesoIdeal = (62.1 * altura) - 44.7;
  }
  else
  {
    cout << "tipo diferente de 1 ou 2";
    return 1;
  }

  cout << "Peso ideal: " << pesoIdeal << "kg.";

}