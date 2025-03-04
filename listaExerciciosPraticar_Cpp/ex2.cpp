/* 
2. O custo de um carro novo ao consumidor, é a soma do custo de fábrica com o custo dos
impostos (aplicados ao custo de fábrica), acrescido do percentual do revendedor. Supondo
que a percentagem do revendedor seja de 10% e que os impostos custam 45% do custo de
fábrica, faça um algoritmo que determine o preço final do automóvel (custo ao
consumidor).
*/

#include <iostream>



using namespace std;


main()
{
    float custoFabrica, impostos, comissao, custoTotal;

    cout << "Qual o custo de fabrica? ";
    cin >> custoFabrica;
    
    
    impostos = custoFabrica * 0.45;
    comissao = custoFabrica * 0.1;
    custoTotal = custoFabrica + comissao + impostos;


    cout << "\n====================================";
    cout << "\nCusto de fabrica eh: " << custoFabrica << " reais   ||";
    cout << "\nvalor dos impostos sao: " << impostos << " reais||";
    cout << "\nvalor da comissao eh: " << comissao << " reais   ||";
    cout << "\nO preco total eh: " << custoTotal << " reais      ||";
    cout << "\n====================================";


}