/* 
5. Faça um algoritmo que leia o nome e o salário bruto de um funcionário e calcule o salário
líquido do mesmo. Sobre o seu salário bruto, incide um desconto de 10% para previdência.
Feito o desconto para a previdência, sobre o restante é feito um desconto de 25% a título
de imposto de renda. O algoritmo deve mostrar o nome do funcionário, o seu salário bruto,
o seu salário líquido e os descontos. 
*/
#include <iostream>

using namespace std;

main()
{
  // v
  float salarioBruto, descontos, salarioLiquido;
  string nomeFuncionario;

  // e
  cout << "Insira o nome do funcionario: ";
  cin >> nomeFuncionario;

  cout << "Insira o salario bruto: R$";
  cin >> salarioBruto;

  // p 
  descontos = (salarioBruto * 0.1) + ((salarioBruto * 0.9) * 0.25);
  salarioLiquido = salarioBruto - descontos;
  
  // s
  cout << "\n===============================\n";
  cout << "Nome do funcionario: " << nomeFuncionario << endl;
  cout << "Salario bruto: R$" << salarioBruto << endl;
  cout << "Descontos: R$" << descontos << endl;
  cout << "\nSalario liquido: R$" << salarioLiquido;
  cout << "\n===============================\n";
  

}
