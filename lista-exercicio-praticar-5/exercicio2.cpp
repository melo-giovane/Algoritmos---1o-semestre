#include <iostream>

using namespace std;
main()
{
  int x[100];
  for (int i=0; i<100; i++)
  {
    if (x[i] < 0)
    {
      x[i] =0;
    }
  }

  for (int i=0; i<100; i++)
  {
    cout << "\nX[" << i << "] = " << x[i];
  }
}
