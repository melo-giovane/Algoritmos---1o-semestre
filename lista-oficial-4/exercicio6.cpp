/* 
6. Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de
consumo. Para cada consumidor são digitados os seguintes dados: número do consumidor,
quantidade de kwh consumidos durante o mês e o tipo (código) do consumidor (1-
residencial, 2-comercial, 3-industrial)
Residencial - preço em reais por kwh = 0,3
Comercial - preço em reais por kwh = 0,5
Industrial - preço em reais por kWh = 0,7
Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero).
Calcular e imprimir:
a) O custo total para cada consumidor
b) O total de consumo para os três tipos de consumidor
c) Qual categoria consome mais?
*/

#include <iostream>
using namespace std;

main()
{
  int numeroConsumidor=1, tipoConsumidor, contConsumidor=0;
  float kwhMes, precoKwh, custoTotalIndividual, consumo1=0, consumo2=0, consumo3=0;

  cout << "Informe o numero do consumidor ('0' para sair): ";
  cin >> numeroConsumidor;

  while (numeroConsumidor != 0)
  {
    contConsumidor++;

    cout << "Informe a quantidade de kwh consumidos durante o mes: ";
    cin >> kwhMes;
    cout << "tipo (codigo) do consumidor:"<< endl;
    cout <<"(1-residencial, 2-comercial, 3-industrial)"<< endl;
    cin >> tipoConsumidor;

    if (tipoConsumidor == 1)
    {
      precoKwh = 0.3;
      consumo1 += kwhMes;
      
    }
    else if (tipoConsumidor == 2)
    {
      precoKwh = 0.5;      
      consumo2 += kwhMes;
    }
    else if (tipoConsumidor == 3)
    {
      precoKwh = 0.7;
      consumo3 += kwhMes;
    }
    else
    {
      cout << "entrada invalida";
      contConsumidor--;
    }
//A    

    if(tipoConsumidor == 1 || tipoConsumidor == 2 || tipoConsumidor == 3)
    {
      custoTotalIndividual = precoKwh * kwhMes;
      cout << "O custo total para o consumidor " << numeroConsumidor << " foi de R$" << custoTotalIndividual << endl;

      cout << "Informe o numero do consumidor ('0' para sair): ";
      cin >> numeroConsumidor;      
    }
  }//fim do while


if (contConsumidor > 0)
{
//B
  cout << "O consumo total para consumidores to tipo 1(Residencial) foi de: " << consumo1 << "kwh." << endl;
  cout << "O consumo total para consumidores to tipo 2(Comercial) foi de: " << consumo2 << "kwh." << endl;
  cout << "O consumo total para consumidores to tipo 3(Industrial) foi de: " << consumo3 << "kwh." << endl;


//C
  if (consumo1 > consumo2 && consumo1 > consumo3)
  {
    cout << "A categoria de maior consumo foi a residencial" << endl;
  }
  else if (consumo2 > consumo1 && consumo2 > consumo3)
  {
    cout << "A categoria de maior consumo foi a comercial" << endl;
  }
  else if (consumo3 > consumo1 && consumo3 > consumo2)
  {
    cout << "A categoria de maior consumo foi a industrial" << endl;
  }
  else
  {
    cout << "Houve um empate" << endl;
  }
}

}