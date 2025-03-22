/* 
4. Escreva algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de
operação a ser realizada (depósito ou retirada) e o valor da operação. Após, determine e
mostre o novo saldo. Se o novo saldo ficar negativo, deve ser mostrada, também, a
mensagem “conta estourada”.
*/
#include <iostream>

using namespace std;

main()
{
  int numConta, operacao;
  float saldo, vlrOp, novoSaldo;
  string tipo;

  cout << "Infome o numero da conta: ";
  cin >> numConta;
  cout << "Infome o saldo atual : R$";
  cin >> saldo;
  cout << "Informe 1 para deposito, 2 para saque: ";
  cin >> operacao;
  cout << "Qual o valor? " << endl;
  cin >> vlrOp;

  if (saldo < 0 || operacao > 2 || operacao < 1)
  {
    cout << "Entrada(s) invalida(s).";
  }
  else
  {
    if (operacao == 1)
    {
      novoSaldo = saldo + vlrOp;
      tipo = "Deposito";
    }
    else
    {
      novoSaldo = saldo - vlrOp;
      tipo = "Saque";
    }

    if (novoSaldo < 0)
    {
      cout << "Conta estourada";
    }
    else 
    {
    cout << endl << "========================================" << endl;
    cout << "numero da conta: " << numConta << endl;
    cout << "Saldo anterior: " << saldo << endl;
    cout << "Valor do " << tipo << ": R$" << vlrOp << endl << endl;
    cout << "Saldo atual: R$" << novoSaldo << endl;
    cout << "========================================";     
    }
  }
}