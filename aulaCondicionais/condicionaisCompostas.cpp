#include <iostream>

using namespace std;

main()
{
  int idade;

  cout << "Qual a sua idade?\n";
  cin >> idade;

  if (idade >= 18)
  {
    cout << "Pode tirar CNH";
  }
  else
  {
    cout << "Nao pode tirar CNH";
  }
  
}