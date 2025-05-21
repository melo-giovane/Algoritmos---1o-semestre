#include <iostream>

using namespace std;
main()
{
  int x[5], y[5], a[5];

  //entrada
  for (int i=0; i<5; i++)
  {
    cout << "Informe o X na posicao " << i << ": ";
    cin >> x[i];
    cout << "Informe o Y na posicao " << i << ": ";
    cin >> y[i];
    a[i] = x[i] + y[i];
  }
  for (int i=0; i<5; i++)
  {
    cout << "\nA [" << i << "]: " << a[i];

  }
}