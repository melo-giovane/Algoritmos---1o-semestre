/* 
5. Faça um algoritmo que simule um sistema de eleição para 20 eleitores. Nesse sistema
existem 3 candidatos que são votados através de seus códigos. São eles:
1 = Candidato 1;
2 = Candidato 2;
3 = Candidato 3;
5 = Voto nulo;
6 = Voto em branco;
Elabore um algoritmo que calcule e escreva o total de votos e o percentual de votos para cada
candidato, para os votos brancos e para os nulos. Ao final, Algoritmo também deverá escrever
na tela o nome do vencedor da eleição.
*/

#include <iostream>

using namespace std;

int main()
{
    int votosC1 = 0, votosC2 = 0, votosC3 = 0;
    int nulos = 0, brancos = 0, voto;
    int totalVotos = 20;

    for (int i = 0; i < totalVotos; i++)
    {
        cout << "Informe seu voto de acordo com a tabela:" << endl;
        cout << "1 = Candidato 1" << endl;
        cout << "2 = Candidato 2" << endl;
        cout << "3 = Candidato 3" << endl;
        cout << "5 = Voto nulo" << endl;
        cout << "6 = Voto em branco" << endl;
        cout << "Seu voto: ";
        cin >> voto;

        if (voto == 1)
        {
            votosC1++;
        }
        else if (voto == 2)
        {
            votosC2++;
        }
        else if (voto == 3)
        {
            votosC3++;
        }
        else if (voto == 5)
        {
            nulos++;
        }
        else if (voto == 6)
        {
            brancos++;
        }
        else
        {
            cout << "Voto inválido! Tente novamente." << endl;
            i--;
        }

        cout << endl;
    }


    cout << "Resultados da Eleicao:" << endl;
    cout << "Candidato 1: " << votosC1 << " votos (" << (votosC1 * 100.0 / totalVotos) << "%)" << endl;
    cout << "Candidato 2: " << votosC2 << " votos (" << (votosC2 * 100.0 / totalVotos) << "%)" << endl;
    cout << "Candidato 3: " << votosC3 << " votos (" << (votosC3 * 100.0 / totalVotos) << "%)" << endl;
    cout << "Votos nulos: " << nulos << " (" << (nulos * 100.0 / totalVotos) << "%)" << endl;
    cout << "Votos em branco: " << brancos << " (" << (brancos * 100.0 / totalVotos) << "%)" << endl;

    cout << endl;
    if (votosC1 > votosC2 && votosC1 > votosC3)
    {
        cout << "Candidato 1 venceu a eleicao!" << endl;
    }
    else if (votosC2 > votosC1 && votosC2 > votosC3)
    {
        cout << "Candidato 2 venceu a eleicao!" << endl;
    }
    else if (votosC3 > votosC1 && votosC3 > votosC2)
    {
        cout << "Candidato 3 venceu a eleicao!" << endl;
    }
    else
    {
        cout << "A eleicao terminou em empate entre dois ou mais candidatos." << endl;
    }

    return 0;
}
