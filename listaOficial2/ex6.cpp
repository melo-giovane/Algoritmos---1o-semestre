/* 
6. A CASAN calcula o valor da conta de água com base no total dos m3 consumidos, de acordo
com a tabela abaixo:

Consumo Valor
Até 10 m3 R$ 2,99
De 11 a 25 m3 R$ 5,48
De 26 a 50 m3 R$ 7,69
Acima de 50 m3 R$ 9,22

IMPORTANTE: quem consumiu 15 m3, por exemplo, paga R$ 2,99 pelos primeiros 10 m3 e
R$ 5,48 pelos 5 restantes. Já quem consumiu 30 m3, paga R$ 2,99 pelos primeiros 10, R$
5,48 de 11 a 25 e R$ 7,69 pelo restante. Assim sucessivamente.
Além disso, existe uma taxa de saneamento básico de acordo com a categoria:

Categoria Valor da Taxa
Residencial R$ 5,00
Comercial R$ 10,00
Industrial R$ 15,00

Após somar o valor pago pelo consumo com a taxa de saneamento, há ainda a incidência de
dois impostos:
PIS: 0,65% do valor da conta
COFINS: 3% do valor da conta
Assim, o valor total da conta é o consumo, mais saneamento, mais os dois impostos.
Escreva um algoritmo, que leia a matrícula de um consumidor, o número de m3 consumidos
no mês e sua classe (RESIDENCIAL, COMERCIAL ou INDUSTRIAL).
Calcular e imprimir:
a) O valor a ser pago de saneamento básico
b) O valor do PIS
c) O valor do COFINS
d) O valor total da conta
*/
#include <iostream>
using namespace std;
main()
{
float consumo, vlrConsumo, vlrConta, taxa, pis, cofins, vlrTotal;
int tipo;
string categoria;

//consumo
if(consumo < 10)
{
  vlrConsumo = consumo * 2.99;
}
else if(consumo <= 25)
{
  vlrConsumo = ((consumo - 10) * 5.48) + (10 * 2.99);
}
else if(consumo <= 50)
{
  vlrConsumo = ((consumo - 25) * 7.69) + (25 * 5.48) + (10 * 2.99);
}
else
{
  vlrConsumo = ((consumo - 50) * 9.22)+ (50 * 7.69) + (25 * 5.48) + (10 * 2.99);
}

//Saneamento
if(tipo == 1)
{
  taxa = 5;
  categoria = "Residencial";
}
else if(tipo == 2)
{
  taxa = 10;
  categoria = "Comercial";
}
if(tipo == 1)
{
  taxa = 15;
  categoria = "Industrial";
}

//Valor antes dos impostos
vlrConta = vlrConsumo + taxa;

//Impostos
pis = vlrConta * 0.0065;
cofins = vlrConta * 0.03;
}