/* 
5. Faça um programa para o Hotel Sono Bom. O algoritmo deve ler os seguintes dados:
a) O número da reserva
b) O nome do responsável pela reserva.
c) A quantidade de hóspedes.
d) O tipo de quarto.
e) A quantidade de diárias.
f) O valor consumido no frigobar.
g) Número de serviços de massagens utilizadas pelo cliente.
h) O valor do consumo de bar.
Tipos de quarto
1-Standard: R$ 50,00 a diária
2-Luxo: R$ 80,00 a diária
3-VIP: R$ 150,00 a diária
Quantidade de pessoas
1-Casal (até duas pessoas): sem adicional
2-Família Pequena (3 ou 4 pessoas): adicional de R$ 20,00 por dia
3-Família Grande (acima de 5 pessoas): adicional de R$ 40,00 por dia
Serviço de massagem
Até 3 massagens = R$ 80,00 por massagem
Acima de 3 massagens = R$ 65,00 por massagem
Serviço de frigobar
É o valor consumido no frigobar acrescido de uma taxa de R$ 12,00 de manutenção
Serviço de bar
É o valor consumido no bar, acrescido de 10% de comissão ao garçom
No valor da conta (soma dos serviços acima) é acrescida uma taxa de 5% de ISS. Neste
hotel há uma promoção para os clientes com permanência maior que 5 dias, para os quais o
ISS é 3%, e para aqueles que permanecem mais que 10 dias o ISS é de 1%. 
O algoritmo deverá calcular e imprimir:
a) O número da reserva
b) Nome do responsável pela reserva.
c) Tipo de quarto.
d) Número de dias.
e) Valor das diárias.
f) Valor total do serviço de massagem.
g) Valor total do serviço de frigobar.
h) Valor total do serviço de bar.
i) ISS.
j) Conta Final.
*/
#include <iostream>
using namespace std;

main()
{
  int numReserva, qtdHosp, tipoQuarto, qtdDiarias, qtdMassagens;
  float vlrFrigobar, vlrBar, vlrDiaria, adicionalH, vlrMassagens, vlrHosp, iss, vlrTotal;
  string responsavel, quarto;

cout << "Informe o numero da reserva: ";
cin >> numReserva;
cout << "Informe o nome do responsavel: ";
cin >> responsavel;
cout << "Informe a quantidade de hospedes: ";
cin >> qtdHosp;
cout << "Informe 1 para Standard, 2 para Luxo e 3 para VIP: ";
cin >> tipoQuarto;
cout << "Iforme a quantidade de diarias: ";
cin >> qtdDiarias;
cout << "Informe o valor consumido no frigobar: R$";
cin >> vlrFrigobar;
cout << "Informe o numero de massagens: ";
cin >> qtdMassagens;
cout << "Informe o valor consumido no bar: R$";
cin >> vlrBar;

if(qtdHosp < 0 || tipoQuarto < 1 || tipoQuarto > 3 || qtdDiarias < 0 || vlrFrigobar < 0 || qtdMassagens < 0 || vlrBar < 0)
{
  cout << "Entrada(s) invalida(s)";
}
else 
{

  //Valor diaria
  if (tipoQuarto == 1)
  {
    vlrDiaria = 50 * qtdDiarias;
    quarto = "Standard";
  }
  else if (tipoQuarto == 2)
  {
    vlrDiaria = 80 * qtdDiarias;
    quarto = "Luxo";
  }
  else
  {
    vlrDiaria = 150 * qtdDiarias;
    quarto = "VIP";
  }
  
  //Quantidade de pessoas;.
  if(qtdHosp < 2)
  {
    adicionalH = 0;
  }
  else if(qtdHosp < 5)
  {
    adicionalH = 20 * qtdDiarias;
  }
  else
  {
    adicionalH = 40 * qtdDiarias;
  }
  //Servico de massagem
  if(qtdMassagens < 4)
  {
    vlrMassagens = qtdMassagens * 80;
  }
  else
  {
    vlrMassagens = qtdMassagens * 65;
  }
  
  vlrFrigobar = vlrFrigobar + 12;
  
  vlrBar = vlrBar * 1.1;
  
  vlrHosp = vlrDiaria + adicionalH + vlrMassagens + vlrBar + vlrFrigobar;
  
  if(qtdDiarias > 10)
  {
    iss = vlrHosp * 0.01;
  }
  else if(qtdDiarias > 5)
  {
    iss = vlrHosp * 0.03;
  }
  else
  {
    iss = vlrHosp * 0.05;
  }
  vlrTotal = vlrHosp + iss;
  
  //Saidas
  cout << "\n==========================\n";
  cout << "------Hotel Sono Bom------\n";
  //a)
  cout << "Numero da reserva: " << numReserva << endl;
  //b)
  cout << "Responsavel: " << responsavel << endl;
  //c)
  cout << "Tipo de quarto: " << quarto << endl;
  //d)
  cout << "Quantidade de diarias: " << qtdDiarias << endl;
  //e)
  cout << "Valor das diarias: R$" << vlrDiaria << endl;
  //f)
  cout << "Valor do servico de massagem: R$" << vlrMassagens << endl;
  //g)
  cout << "Valor consumido no frigobar: R$" << vlrFrigobar << endl;
  //h)
  cout << "Valor total do servico de bar: R$" << vlrBar << endl;
  //i)
  cout << "Valor do ISS: R$" << iss << endl << endl;
  //j)
  cout << "Valor total da conta: R$" << vlrTotal;
  cout << "\n==========================\n";
  }
}
