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