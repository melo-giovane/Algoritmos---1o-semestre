/* 
2. A UNIPLAC decidiu fazer um levantamento sobre os alunos do curso de Sistemas de
Informação. Para isso, você foi convocado para desenvolver o sistema.
Faça um algoritmo que leia o nome, a idade, o sexo e a nota dos alunos em estruturas de
vetores, e:
a) Calcule e informe a faixa etária da turma;
b) Verifique se há algum aluno chamado “Zé”, e caso positivo mande um abraço pra
ele através de mensagem;
c) Calcule a média de nota dos homens e mulheres, e informe qual sexo possui a
melhor média;
d) Verifique e apresente os dados do aluno mais velho e do aluno mais novo;
e) Informe o nome e a nota do melhor aluno, e se este é homem ou mulher.
Obs. 1: A quantidade de alunos é indeterminada, ou seja, para que o processo de leitura
dos dados dos alunos termine, o usuário deve digitar a palavra “FIM” quando for ler a
variável nome.
Obs. 2: Utilize um primeiro laço de repetição para a etapa de leitura dos dados.
Posteriormente resolva cada um dos itens com outros laços de repetição.
*/

#include <iostream>

using namespace std;

main()
{
  string nomes[1000], nome = "x", alunoMaisNovo, alunoMaisVelho, MaiorMedia, nomeMelhorAluno, sexoMelhorAluno;
  int idades[1000], sexos[1000], notas [1000], i=0, maisNovo=1000, maisVelho=0, qtdM=0, qtdF=0;
  float mediaNotaFem, mediaNotaMasc, somaNotaFem=0, somaNotaMasc=0, maiorNota=0;
 
  cout << "Informe o nome (ou digite FIM para sair)";
  cin >> nomes[i];
  nome = nomes[i];
  while (nome != "FIM" && nome != "fim")
  {
    cout << "Informe a idade: ";
    cin >> idades[i];
    cout << "Informe 1 para feminino, 2 para masculino";
    cin >> sexos[i];
    while (sexos[i] != 1 && sexos[i] != 2)
    {
      cout << "Sexo informado invalido";
      cout << "Informe 1 para feminino, 2 para masculino: ";
      cin >> sexos[i];
    }
    cout << "Informe a nota: ";
    cin >> notas[i];
    
    i++;
    cout << "Informe o nome (ou digite FIM para sair)";
    cin >> nomes[i];
    nome = nomes[i];
  }
  
  for (int j=0; j < i; j++)
  {
    if (idades[j] < maisNovo)
    {
      maisNovo = idades[j];
      alunoMaisNovo = nomes[j];
    }
    if (idades[j] > maisVelho)
    {
      maisVelho = idades[j];
      alunoMaisVelho = nomes[j];
    }
    
    if (nomes[j] == "ze" || nomes[j] == "Zé" || nomes[j] == "ZE" || nomes[j] == "ZÉ")
    {
      cout << "Ola "<< nomes[j] << "! um abraco para voce" << endl;
    }
    
    if (sexos[j] == 1)
    {
      somaNotaFem += notas[j];
      qtdF++;
    }
    else
    {
      somaNotaMasc += notas[j];
      qtdM++;
    }
    
    
    
    if (notas[j] > maiorNota)
    {
      nomeMelhorAluno = nomes[j];
      if(sexos[j] == 1)
      {
        sexoMelhorAluno = "feminino";
      }
      else
      {
        sexoMelhorAluno = "masculino";
      }
      maiorNota = notas[j];
    }
    
  }
  mediaNotaFem = somaNotaFem / qtdF;
  mediaNotaMasc = somaNotaMasc / qtdM;

  if (mediaNotaFem > mediaNotaMasc)
  {
    MaiorMedia = "feminino";
  }
  else if (mediaNotaFem == mediaNotaMasc)
  {
    MaiorMedia = "empate";
  }
  else
  {
    MaiorMedia = "masculino";
  }

  cout << "A faixa etaria da turma esta entre " << maisNovo << " a " << maisVelho << " anos." << endl;

  if (MaiorMedia == "empate")
  {
    cout << "Houve um empate entre o masculino e feminino com a media de: " << mediaNotaFem << endl;
  }
  else if (MaiorMedia == "feminino")
  {
    cout << "O sexo de maior media nas notas foi o " << MaiorMedia << ", com a media de: " << mediaNotaFem << endl;  
  }
  else
  {
    cout << "O sexo de maior media nas notas foi o " << MaiorMedia << ", com a media de: " << mediaNotaMasc << endl;  
  }

  cout << "O aluno(a) mais novo eh: " << alunoMaisNovo << endl;
  cout << "O aluno(a) mais velho eh: " << alunoMaisVelho << endl;
  cout << "A melhor nota foi de " << nomeMelhorAluno << ", atingindo " << maiorNota << "." << endl;

}