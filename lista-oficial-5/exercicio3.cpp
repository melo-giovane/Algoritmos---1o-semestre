/*
3. A UNIPLAC decidiu fazer um inventário dos itens (livros e revistas) da biblioteca. Para isso,
você foi convocado para desenvolver o sistema.

Faça um algoritmo que leia o nome do item, o ano da publicação, o valor (preço) e o tipo do
documento (livro ou revista) em estruturas de vetores, e:
a) Calcule e informe a média de valores (preços) de todos os livros;
b) Verifique se há algum livro ou revista chamada “Algoritmos para Experts” no acervo,
e caso positivo mande uma mensagem ao usuário confirmando a presença deste;
c) Calcule a média de idade dos livros e das revistas, e informe qual tipo de documento
possui a maior média de idade;
d) Verifique e apresente todos os dados do item mais caro e do item mais barato;
e) Informe o nome e o valor do item mais recente de todo o acervo, e se este é livro ou
revista.
Obs. 1: A quantidade de itens é indeterminada, ou seja, para que o processo de leitura dos
dados dos itens termine, o usuário deve digitar a palavra “FIM” quando for ler a variável
nome.
Obs. 2: Utilize um primeiro laço de repetição para a etapa de leitura dos dados.
Posteriormente resolva cada um dos itens com outros laços de repetição.
*/

#include <iostream>

using namespace std;

main()
{
  string nomesItens[1000], nomeAtual="", nomeMaisCaro, nomeMaisBarato, nomeMaisRecente, tipoMaisBarato, tipoMaisCaro, tipoMaisRecente;
  int  tiposItens[1000], anosPublicacoes[1000], i=0, idadeItem, maiorMediaIdade;
  float valoresItens[1000],  qtdLivro=0, qtdRevista=0, valorTotalLivro=0, valorTotalRevista=0, mediaValorLivro, mediaValorRevista, mediaIdadeLivro, mediaIdadeRevista, idadeTotalLivro=0, idadeTotalRevista=0;
  float valorMaisCaro=0, valorMaisBarato=999999, anoMaisBarato=000, anoMaisCaro=0, anoMaisRecente=0, valorMaisRecente=0;

  // Primeira leitura de dados
  cout << "Qual o nome do item (ou digite 'FIM' para sair)";
  cin >> nomesItens[i];
  nomeAtual = nomesItens[i];


  // Laço leitura dos dados
  while (nomeAtual != "FIM" && nomeAtual != "fim")
  {
    cout << "informe 1 para livro, 2 para revista: " << endl;
    cin >> tiposItens[i];
    cout << "Qual o ano de publicacao?" << endl;
    cin >> anosPublicacoes[i];
    cout << "Qual o valor do item?" << endl;
    cin >> valoresItens[i];

    cout << "Qual o nome do item (ou digite 'FIM' para sair)";
    cin >> nomesItens[i];
    nomeAtual = nomesItens[i];

    idadeItem = 2025 - anosPublicacoes[i];


    // Se for livro
    if (tiposItens[i] == 1)
    {
      valorTotalLivro += valoresItens[i];
      idadeTotalLivro += idadeItem;
      qtdLivro ++;
    }

    // Se for revista
    if (tiposItens[i] == 2)
    {
      valorTotalRevista += valoresItens[i];
      idadeTotalRevista += idadeItem;
      qtdRevista ++;
    }

    i++;
  }

  // A) Calculando media de valores dos >livros<
  mediaValorLivro = valorTotalLivro / qtdLivro;
  mediaValorRevista = valorTotalRevista / qtdRevista;

  cout << "A media de valor dos livros eh: R$" << mediaValorLivro << endl;
  cout << "A media de valor dos Revistas eh: R$" << mediaValorRevista << endl;


  // B) Verificando se há o item "Algoritmos para Experts"
  for (int j=0; j < i; j++)
  {
    if (nomesItens[j] == "Algoritmos para Experts")
    {
      cout << "O Acervo contem o livro Algoritmos para Experts";
    }

  }

  // C) Calculando media de idade dos livros e das revistas

    mediaIdadeLivro = idadeTotalLivro / qtdLivro;
    mediaIdadeRevista = idadeTotalRevista / qtdRevista;


  // informando qual tipo de item tem maior media de idade

  if (mediaIdadeLivro > mediaIdadeRevista)
  {
    maiorMediaIdade = 1;
  }
  else if (mediaIdadeRevista > mediaIdadeLivro)
  {
    maiorMediaIdade = 2;
  }
  else
  {
    maiorMediaIdade = 3;
  }

switch (maiorMediaIdade)
{
    case 1:
        cout << "O item com maior media de idade eh livro, " << mediaIdadeLivro << endl;
        break;
    case 2:
        cout << "O item com maior media de idade eh Revista, " << mediaIdadeRevista << endl;
        break;
    case 3:
        cout << "Os dois tipos de itens tem a mesma media de idade, " << mediaIdadeLivro << endl;
        break;
}

// D) Verifique e apresente todos os dados do item mais caro e do item mais barato;

for (int k=0; k<i; k++)
{
  if (valoresItens[k] > valorMaisCaro)
  {
    valorMaisCaro = valoresItens[k];
    nomeMaisCaro = nomesItens[k];
    anoMaisCaro = anosPublicacoes[k];
    if (tiposItens[k]==1)
    {
      tipoMaisCaro = "Livro";
    }
    else
    {
      tipoMaisCaro = "Revista";
    }
  }
  else if (valoresItens[k] < valorMaisBarato)
  {
    valorMaisBarato = valoresItens[k];
    nomeMaisBarato = nomesItens[k];
    anoMaisBarato = anosPublicacoes[k];
        if (tiposItens[k]==1)
    {
      tipoMaisBarato = "Livro";
    }
    else
    {
      tipoMaisBarato = "Revista";
    }
  }

}

cout << "O nome do item mais caro eh: " << nomeMaisCaro << endl;
cout << "O valor do item mais caro eh: R$" << valorMaisCaro << endl;
cout << "O ano de publicacao do item mais caro eh: " << anoMaisCaro << endl;
cout << "O tipo do item mais caro eh: " << tipoMaisCaro << endl;
cout << "-------------------------------------------------------------------------------" << endl;
cout << "O nome do item mais barato eh: " << nomeMaisBarato << endl;
cout << "O valor do item mais barato eh: R$" << valorMaisBarato << endl;
cout << "O ano de publicacao do item mais barato eh: " << anoMaisBarato << endl;
cout << "O tipo do item mais barato eh: " << tipoMaisBarato << endl;

// E) Informe o nome e o valor do item mais recente de todo o acervo, e se este é livro ou revista.
for (int l = 0; l < i; l++)
{
  if (anosPublicacoes[l] > anoMaisRecente)
  {
    anoMaisRecente = anosPublicacoes[l];
    nomeMaisRecente = nomesItens[l];
    valorMaisRecente = valoresItens[l];

    if (tiposItens[l] == 1)
    {
      tipoMaisRecente = "Livro";
    }
    else
    {
      tipoMaisRecente = "Revista";
    }
  }
}

cout << "-------------------------------------------------------------------------------" << endl;
cout << "O item mais recente do acervo eh: " << nomeMaisRecente << endl;
cout << "Ano de publicacao: " << anoMaisRecente << endl;
cout << "Valor: R$" << valorMaisRecente << endl;
cout << "Tipo: " << tipoMaisRecente<< endl;
}
