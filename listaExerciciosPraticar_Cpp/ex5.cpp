/* 
5. Faça um algoritmo que leia os preços de uma mercadoria em 17/03 e 18/03, tendo como
base a variação dos preços desta mercadoria, calcule a taxa de inflação ou deflação ocorrida
no período.
*/

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	//vari�veis
	string prod;
	float preco1, preco2, infl;
	
	//entradas
	cout << "Insira o nome do produto: ";
	cin >> prod;
	
	cout << "Qual o valor em 17/03? ";
	cin >> preco1;
	cout << "Qual o valor em 18/03? ";
	cin >> preco2;
	
	//processar infla��o
	infl = ((preco2 - preco1)/preco1)*100;
	
	//sa�das
	cout << "A variacao do preco do(a) "<< prod << " do dia 17/03 para 18/03 foi:\n" << infl << "%.";
}
