/* 
4. Uma pessoa comprou 3 (três) artigos em uma loja. Para cada artigo, tem-se nome, preço e
percentual de desconto. Faça um algoritmo que imprima nome do artigo, preço sem
desconto, preço com desconto de cada artigo e o total a pagar.
*/

#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//vari�veis
	string produto1, produto2, produto3;
	float preco1, preco2, preco3, desc1, desc2, desc3, precof1, precof2, precof3, total;
	
	//entradas
	//produto 1
	cout << "Insira o nome do primeiro produto: ";
	cin >> produto1;
	cout << "Qual o pre�o? ";
	cin >> preco1;
	cout << "Qual a porcentagem de desconto? ";
	cin >> desc1;
	
	//produto2
	cout << "\nInsira o nome do segundo produto: ";
	cin >> produto2;
	cout << "Qual o pre�o? ";
	cin >> preco2;
	cout << "Qual a procentagem de desconto? ";
	cin >> desc2;
	
	//produto 3
	cout << "\nInsira o nome do terceiro produto: ";
	cin >> produto3;
	cout << "Qual o pre�o? ";
	cin >> preco3;
	cout << "Qual a procentagem de desconto? ";
	cin >> desc3;
	
	//processar desconto
	precof1 = preco1 - (preco1 * desc1 / 100);
	precof2 = preco2 - (preco2 * desc2 / 100);
	precof3 = preco3 - (preco3 * desc3 / 100);
	
	total = precof1 + precof2 + precof3;
	
	//sa�das
	cout << "\n==============================================";
	cout << "\nProduto 1: " << produto1 << " - R$" << preco1 << " Valor a pagar: R$" << precof1;
	cout << "\nProduto 2: " << produto2 << " - R$" << preco2 << " Valor a pagar: R$" << precof2;
	cout << "\nProduto 1: " << produto3 << " - R$" << preco3 << " Valor a pagar: R$" << precof3;
	cout << "\nValor total a pagar: R$" << total;
	cout << "\n==============================================";
	
}
