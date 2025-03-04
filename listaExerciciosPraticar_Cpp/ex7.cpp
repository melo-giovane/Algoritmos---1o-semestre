/* 7. Faça um algoritmo para calcular a quantidade de barbante necessária para amarrar um
pacote. O algoritmo terá como entrada a largura, altura e comprimento do pacote, em
centímetros. Para que o pacote fique firme são necessárias 3 amarras e cada amarra
consome 10 cm de barbante. */

#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Portuguese");
	//v
	float larg, altura, comprimento, amarra1, amarra2, amarra3, total;
	
	//e
	cout << "Qual a largura do pacote? ";
	cin >> larg;
	cout << "Qual a altura do pacote? ";
	cin >> altura;
	cout << "Qual o comprimento do pacote? ";
	cin >> comprimento;
	
	//p
	amarra1 = ((2 * (altura + larg)) + 10);
	amarra2 = ((2 * (comprimento + larg)) + 10);
	amarra3 = ((2 * (altura + comprimento)) + 10);
	
	total = (amarra1 + amarra2 + amarra3);	
	
	//s
	cout << "A quantidade necess�ria de barbante s�o: " << total << " cent�metros.";
	
}
