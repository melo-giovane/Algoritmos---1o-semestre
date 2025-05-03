/* 
5. Construa um algoritmo que leia o nome, o sexo e o salário de vários funcionários de uma
empresa. Ao final, o algoritmo deve apresentar qual sexo possui a maior média salarial. Para
definir o sexo utilize a legenda: ‘M’ para masculino, ‘F’ para feminino e ‘X’ para encerrar a
leitura dos dados.
*/

#include <iostream>
using namespace std;

main()
{
  string sexo, nome, sexoMaiorMediaSalarial;
  int contM=0, contF=0;
  float salario, mediaSalarialM, mediaSalarialF, somaSalarialM=0, somaSalarialF=0;

  cout << "informe ('M' para masculino, 'F' para feminino e 'X' para encerrar): ";
  cin >> sexo;

  while (sexo != "X" && sexo != "x")
  {
    cout << "Informe o nome: ";
    cin >> nome;
    cout << "Informe o salario: R$";
    cin >> salario;

      if (sexo == "M" || sexo == "m")
      {
        contM++;
        somaSalarialM += salario;
      }
      else if (sexo == "F" || sexo == "f")
      {
        contF++;
        somaSalarialF += salario;
      }
      else
      {
        cout << "Entrada invalida";
      }
    cout << "informe ('M' para masculino, 'F' para feminino e 'X' para encerrar): ";
    cin >> sexo;
  }

  if (contM > 0)
    mediaSalarialM = somaSalarialM / contM;

  if (contF > 0)
    mediaSalarialF = somaSalarialF / contF;

  if (contM == 0 && contF == 0)
  {
    cout << "\nNenhum dado valido foi inserido.\n";
  }
  else if (mediaSalarialM > mediaSalarialF)
  {
    cout << "\nO sexo com maior media salarial eh o masculino com a media salarial de: R$" << mediaSalarialM << endl;
  }
  else if (mediaSalarialF > mediaSalarialM)
  {
    cout << "\nO sexo com maior media salarial eh o feminino com a media salarial de: R$" << mediaSalarialF << endl;
  }
  else
  {
    cout << "\nMesma media salarial para ambos os sexos, com a media salarial de: R$" << mediaSalarialM << endl;
  }
  

}