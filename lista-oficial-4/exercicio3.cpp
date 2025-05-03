/* 
3. Construa um algoritmo que simule uma eleição. Essa eleição possui 3 candidatos. O algoritmo
deve ler o voto de um número indeterminado de eleitores e apresentar na tela o percentual
de cada candidato.
Para votar no candidato 1 utilize a entrada ‘1’
Para votar no candidato 2 utilize a entrada ‘2’
Para votar no candidato 3 utilize a entrada ‘3’
Para encerrar a leitura dos votos utilize a entrada ‘0’
*/

#include <iostream>
using namespace std;

main()
{
  int entrada;
  float porcentagem1, porcentagem2, porcentagem3, votos1=0, votos2=0, votos3=0, totalDeVotos=0;

  cout << "Para votar no candidato 1 utilize a entrada (1)" << endl;
  cout << "Para votar no candidato 2 utilize a entrada (2)" << endl;
  cout << "Para votar no candidato 3 utilize a entrada (3)" << endl;
  cout << "Para encerrar a leitura dos votos utilize a entrada (0)" << endl;

  cin >> entrada;

  while (entrada != 0)
  {
    totalDeVotos++;
    if (entrada == 1)
    {
      votos1++;
    }
    else if (entrada == 2)
    {
      votos2++;
    }
    else if (entrada == 3)
    {
      votos3++;
    }
    else
    {
      cout << "Entrada invalida";
      totalDeVotos--;
    }

      cout << "Para votar no candidato 1 utilize a entrada (1)" << endl;
      cout << "Para votar no candidato 2 utilize a entrada (2)" << endl;
      cout << "Para votar no candidato 3 utilize a entrada (3)" << endl;
      cout << "Para encerrar a leitura dos votos utilize a entrada (0)" << endl;

      cin >> entrada;
  }

  if (totalDeVotos > 0)
  {
    porcentagem1 = votos1 / totalDeVotos * 100;
    porcentagem2 = votos2 / totalDeVotos * 100;
    porcentagem3 = votos3 / totalDeVotos * 100;
  
    cout << "Total de votos: " << totalDeVotos << endl;
    cout << "Votos do candidato 1: " << votos1 << ", porcentagem: " << porcentagem1 << "%" << endl;
    cout << "Votos do candidato 2: " << votos2 << ", porcentagem: " << porcentagem2 << "%" << endl;
    cout << "Votos do candidato 3: " << votos3 << ", porcentagem: " << porcentagem3 << "%" << endl;
  }
  else
  {
    cout << "Nenhum voto";
  }

}