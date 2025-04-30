/* 
4. Construa um algoritmo que calcule e apresente na tela a tabuada completa do número 1 ao
10.
*/

#include <iostream>

using namespace std;

main()
{
  for (int i=1; i < 11; i++)
  {
    cout << "Tabuada do " << i << endl;
    for (int j=1; j < 11; j++)
    {
      cout << i << " x " << j << " = " << i*j << endl;
    }
    cout << endl;
  }
}