/* 
Um vendedor tem seu salário calculado em função do valor total de suas vendas. Este
cálculo é feito de acordo com o seguinte critério: se o valor total de suas vendas for igual ou
maior que R$ 20000, o vendedor receberá 10% do valor das vendas. Caso contrário,
receberá apenas 7,5% do valor das vendas.
Escreva um algoritmo que leia o valor total das vendas do vendedor e ao final informe o seu
salário.
*/
#include <iostream>

using namespace std;

main()
{
  float totalVendas, salario;

  cout << "Qual foi o valor total das vendas?";
  cin >> totalVendas;

  if(totalVendas >= 2000)
  {
    salario = totalVendas * 0.1;
  }
  else
  {
    salario = totalVendas * 0.075;
  }

  cout << "Seu salario eh: R$" << salario;
}