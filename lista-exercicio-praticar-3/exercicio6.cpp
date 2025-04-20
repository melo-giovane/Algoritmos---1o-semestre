#include <iostream>

using namespace std;

main()
{
  int num = 55;

  for (int i = 0; num < 189; i++)
  {
    if (num % 2 == 0)
    {
      cout << num << endl;
      num++;
    }
    else
    {
      num++;
    }
  }
}