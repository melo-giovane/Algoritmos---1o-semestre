/* 
  1. Um pescador precisa de um programa para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca (que é 50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Faça um programa que leia o peso de peixes e verifique se há excesso. Se
houver excesso, informe a multa a ser paga pelo pescador.
*/
#include <iostream>

using namespace std;

main()
{
  float peso, multa;

  cout << "Informe o peso dos peixes em kg: ";
  cin >> peso;

  if (peso > 50)
  {
    multa = (peso - 50) * 4;
    cout << "Multado" << endl << "O valor da multa eh: R$" << multa;
  }
}