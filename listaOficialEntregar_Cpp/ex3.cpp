/* 
3. A revendedora Pica Pau Ltda., paga a seus vendedores, um salário fixo de R$ 350,00, mais
uma comissão fixa de R$ 50,00 por carro vendido e mais 5% do valor das vendas. Faça um
algoritmo que leia o nome do vendedor, quantos carros vendeu e o valor total das vendas.
Ao final, apresente o todos os dados lidos e o salário total do vendedor. 
 */
#include <iostream>

using namespace std;

main()
{
//v
  float salario, comissaoV, valorTotVendas, salarioTotal;
  int comissaoF, qtdVendas;
  string nomeVendedor;
//e
  cout << "Qual o seu nome? ";
  cin >> nomeVendedor;

  cout << "Quantos carros vendeu? ";
  cin >> qtdVendas;

  cout << "Qual o valor total das vendas? ";
  cin >> valorTotVendas;

//p
  salario = 350;
  comissaoF = qtdVendas * 5;
  comissaoV = valorTotVendas * 0.05;
  salarioTotal = salario + comissaoF + comissaoV;


//s
cout << "\n===============================";
cout << "\nVendedor..............: " << nomeVendedor << endl;
cout << "Quantidade de vendas..: " << qtdVendas << endl;
cout << "Valor total das vendas: R$" << valorTotVendas << endl;
cout << "\nSalario final.........: R$" << salarioTotal << endl;
cout << "\n===============================";

}