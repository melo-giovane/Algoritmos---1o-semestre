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
  float vlrInicialCarro, vlrTotal, vlrVidro, vlrAr, vlrTrava, vlrPintura, vlrDirecao, desc, vlrAdicionais, vlrTotalVista;
  int vidro, ar, travas, pinturaMetalica, direcao, pgto;

  cout << "Informe o valor do carro: R$";
  cin >> vlrInicialCarro;
  cout << "Informe 1 caso deseje o opcional e 0 caso nao deseje: " << endl;
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
  if(ar == 1)
  {
    vlrAr = 2000; 
  }
  else
  {
    vlrAr = 0;
  }
  if(travas == 1)
  {
    vlrTrava = 500; 
  }
  else
  {
    vlrTrava = 0;
  }
  if(pinturaMetalica == 1)
  {
    vlrPintura = 1000; 
  }
  else
  {
    vlrPintura = 0;
  }
  if(direcao == 1)
  {
    vlrDirecao = 2500; 
  }
  else
  {
    vlrDirecao = 0;
  }

vlrAdicionais = vlrAr + vlrDirecao + vlrPintura + vlrTrava + vlrVidro;
vlrTotal = vlrInicialCarro + vlrAdicionais;

  if(pgto == 1)
  {
    desc = vlrTotal * 0.05;
    vlrTotalVista = vlrTotal - desc;
    cout << "Valor basico do carro: R$" << vlrInicialCarro << endl;
    cout << "Valor dos adicionais: R$" << vlrAdicionais << endl;
    cout << "Valor total do carro: R$" << vlrTotal << endl;
    cout << "Desconto A Vista: R$" << desc << endl;
    cout << "Valor Final do carro: R$" << vlrTotalVista << endl;
  }
  else if(pgto == 2)
  {
    cout << "Valor básico do carro: R$" << vlrInicialCarro << endl;
    cout << "Valor dos adicionais: R$" << vlrAdicionais << endl;
    cout << "Valor total do carro: R$" << vlrTotal << endl;    
  }
  else
  {
    cout << "Forma de pagamento invalida!";
  }


}