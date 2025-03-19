/* 
7. Escreva um algoritmo que leia o número do telefone, nome do consumidor, número de pulsos registrados, total de interurbanos (em minutos) e tipo de telefone (1 = residencial, 2 = comercial) de um cliente da Gattino Telecom. Calcular e imprimir:
a) Valor da tarifa básica.
   Telefone residencial: R$ 17,20
   Telefone comercial: R$ 25,80

b) Valor do serviço excedente
   0,07 por pulso excedente, acima de 90 pulsos.

c) Valor dos interurbanos
   R$ 0,50 por minutos de interurbanos

d) Valor dos impostos
   12% de impostos pagos ao governo

e) Valor da conta
   Soma de todos os serviços.
*/
#include <iostream>

using namespace std;

main()
{
  int pulsos, tipo;
  float minutosInter, vlrInter, vlrBasico, vlrExcedente, vlrImposto, vlrTotal;
  string tipoTexto, nome, numeroTelefone;

  cout << "Informe 1 para residencial ou 2 para comercial: ";
  cin >> tipo;
  cout << "Informe o nome: ";
  cin >> nome;
  cout << "Informe o numero do telefone: ";
  cin >> numeroTelefone;
  cout << "Informe o total de pulsos: ";
  cin >> pulsos;
  cout << "Informe a quantidade de minutos interurbanos: ";
  cin >> minutosInter;

  if (tipo == 1)
  {
   tipoTexto = "Residencial";
   vlrBasico = 17.2;
   vlrInter = minutosInter * 0.5;
   if(pulsos > 90)
   {
      vlrExcedente = (pulsos - 90) * 0.07;
   }
   else
   {
      vlrExcedente = 0;
   }
  }
  else if (tipo == 2)
  {
   tipoTexto = "Comercial";
   vlrBasico = 25.8;
   vlrInter = minutosInter * 0.5;
      if(pulsos > 90)
      {
         vlrExcedente = (pulsos - 90) * 0.07;
      }
      else
      {
         vlrExcedente = 0;
      }
  }
  else
  {
   cout << "tipo diferente de 1 ou 2.";
   return 1;
  }
  
  vlrImposto = (vlrBasico + vlrInter + vlrExcedente) * 0.12;
  vlrTotal = vlrBasico + vlrInter + vlrExcedente + vlrImposto;

  cout << "\n===================================";
  cout << "\n---------Gattino Telecom-----------\n";
  cout << "\nTelefone " << tipoTexto << endl;
  cout << "Numero do telefone: " << numeroTelefone << endl;
  cout << "Nome: " << nome << "\n" << endl;
  cout << "Valor Basico:........... R$" << vlrBasico << endl;
  cout << "Custo Interurbano:...... R$" << vlrInter << endl;
  cout << "Custo Pulsos Excedentes: R$" << vlrExcedente << endl;
  cout << "Valor Imposto:.......... R$" << vlrImposto << endl;
  cout << "Total da Fatura:........ R$" << vlrTotal << endl;
  cout << "\n===================================";


}