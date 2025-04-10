#include <iostream>

using namespace std;

main() 
{
  int contF=0, contM=0, sexo, total;
  float mediaF, mediaM, notasF=0, notasM=0, notaF, notaM;

  cout << "Informe o total de alunos: ";
  cin >> total;

  for(int i=0; i < total; i++)
  {
    cout << "Informe 1 para masculino, 2 para feminino: ";
    cin >> sexo;
    cout << "Informe sua nota: ";
    if (sexo == 1)
    {
      cin >> notaM;
      notasM += notaM;
      contF ++;
    }
    else if (sexo == 2)
    {
      cin >> notaF;
      notasF += notaF;
      contM ++;
    }
  }

  

  mediaF = notasF / contF;
  mediaM = notasM / contM;

  if (mediaF > mediaM)
  {
    cout << "A maior media foi das mulheres, " << mediaF; 
  }
  else if (mediaF == mediaM)
  {
    cout << "A media foi a mesma entre os dois grupos, " << mediaF;
  }
  else{
  cout << "A maior media foi dos homens, " << mediaM;
  
  }
}