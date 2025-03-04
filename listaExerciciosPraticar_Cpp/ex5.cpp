#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	//variáveis
	string prod;
	float preco1, preco2, infl;
	
	//entradas
	cout << "Insira o nome do produto: ";
	cin >> prod;
	
	cout << "Qual o valor em 17/03? ";
	cin >> preco1;
	cout << "Qual o valor em 18/03? ";
	cin >> preco2;
	
	//processar inflação
	infl = ((preco2 - preco1)/preco1)*100;
	
	//saídas
	cout << "A variacao do preco do(a) "<< prod << " do dia 17/03 para 18/03 foi:\n" << infl << "%.";
}
