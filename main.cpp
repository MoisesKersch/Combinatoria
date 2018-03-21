#include <iostream>
#include <Permutation.h>
#include <Repetition.h>
#include <Anagram.h>
#include <Combination.h>
#include <Divisor.h>
#include <windows.h>
#include <locale>
#include <clocale>
#include <conio.h>
#define cls system ("cls");

using namespace std;

int main()
{

    setenv("LANG","en_US.utf8",1);
    setlocale(LC_ALL,"");
    int number;
    string word;
    int op = 1;
    while (op)
    {
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

        cout << "\nEscolha o que deseja fazer: " << endl;
        cout << "1 - Combinação" << endl;
        cout << "2 - Arranjos" << endl;
        cout << "3 - Permutação simples" << endl;
        cout << "4 - Permutação com repetição" << endl;
        cout << "5 - Anagrama" << endl;
        cout << "0 - Terminar a execução" << endl;

        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Opção > ";
        cin >> op;
        switch(op)
        {
        case 1:
            Combination combination;
            int elementos, agrupamentos;
            cout << "Informe o quantos elementos a combinação possui: ";
            cin >> elementos;

            cout << "Informe o quantos agrupamentos a combinação possui: ";
            cin >> agrupamentos;
            combination.setCombination(elementos, agrupamentos);
            cout << "Resultado: " << combination.getCombination() << endl; //marco fazer logica para que o valor da variavel "elemento serja maior que agrupamentos
            break;
        case 2:
            Permutation permutation;
            cout << "Informe o quantos elementos o arranjo possui: ";
            cin >> elementos;

            cout << "Informe o quantos agrupamentos o arranjo possui: ";
            cin >> agrupamentos;
            permutation.setArranjo(elementos, agrupamentos);
            ///cout << "Resultado: " << permutation.getArranjo() << endl; funcão nao esta pronta
            break;
        case 3:
            cout << "Digite um valor ";
            cin >> number;
            if (permutation.getFactorial(number))
            {
                 cout << "O Fatorial é: " << permutation.getFactorial(number) << endl;
            }
            else cout << "Número excede o limite da variável primitiva 'long long' " << endl;
            break;
        case 4:
        {
            cout << "Informe o valor de P: ";
            cin >> number;
            Repetition repetition(number);
            cout << "\nInforme o valor dos elementos repetidos separados por vírgula: ";
            cin >> word;
            repetition.setRepetitions(word);
            cout << "P(" << number << ") (" << word <<") = " << repetition.getRepetition() << endl;
        }
        break;
        case 5:
        {
            cout << "Digite uma palavra: ";
            cin >> word;
            Anagram anagram(word);
            cout << "O número de anagramas que essa palavra possuí " << anagram.getResult() << endl;
        }
        break;
        case 0:
            cout << "Obrigado por utilizar " << endl;
            break;
        default:
            cout << "Entrada inválida!" << endl;
        }
        if (op != 0)
        {
            cout << "Aperte qualquer tecla para continuar...";
            getch();
            cls;
        }

    }
}


