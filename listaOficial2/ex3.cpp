/* 
3. Desenvolva um programa para calcular o preço final de um carro. Tendo como base o valor
inicial do carro, informado pelo usuário, questione o proprietário se o veículo possui alguns
opcionais, conforme o esquema abaixo.
Vidro elétrico = adiciona R$ 500,00
Ar condicionado = adiciona R$ 2000,00
Trava central e Alarme = adiciona R$ 500,00
Pintura Metálica = adiciona R$ 1000,00
Direção Hidráulica = adiciona R$ 2500,00
Obs.: Caso o proprietário opte por pagamento à vista, calcule um desconto de 5%
*/
#include <iostream>

using namespace std;
main()
{
  float vlrInicialCarro, vlrTotal, vlrVidro, vlrAr, vlrTrava, vlrPintura, vlrDirecao, desc;
  int vidro, ar, travas, pinturaMetalica, direcao, pgto;

  cout << "Informe o valor do carro: R$";
  cin >> vlrInicialCarro;
  cout << "Informe 1 caso deseje o opcional e 0 caso não deseje: ";
  cout << "Vidro eletrico: ";
  cin >> vidro;
  cout << "Ar condicionado: ";
  cin >> ar;
  cout << "Trava eletrica central e alarme: ";
  cin >> travas;
  cout << "Pintura metalica: ";
  cin >> pinturaMetalica;
  cout << "Direcao hidraulca: ";
  cin >> direcao;
  cout << "Pagamento a vista? digite 1 para sim e 2 para nao: ";
  cin >> pgto;

  if(vidro == 1)
  {
    vlrVidro = 500; 
  }
  else
  {
    vlrVidro = 0;
  }


}