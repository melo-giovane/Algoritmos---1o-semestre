#include <iostream>

using namespace std;

main()
{
  int estoque_minimo, qtde_atual;

  cout << "Informe o estoque minimo: ";
  cin >> estoque_minimo;
  cout << "Informe a qtde atual: ";
  cin >> qtde_atual;

  if (qtde_atual < estoque_minimo)
  {
    cout << "Abaixo do estoque minimo";
  }
}