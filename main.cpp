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
        cout << "1 - Combina��o" << endl;
        cout << "2 - Arranjos" << endl;
        cout << "3 - Permuta��o simples" << endl;
        cout << "4 - Permuta��o com repeti��o" << endl;
        cout << "5 - Anagrama" << endl;
        cout << "0 - Terminar a execu��o" << endl;

        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Op��o > ";
        cin >> op;
        switch(op)
        {
        case 1:
            Combination combination;
            int elementos, agrupamentos;
            cout << "Informe o quantos elementos a combina��o possui: ";
            cin >> elementos;

            cout << "Informe o quantos agrupamentos a combina��o possui: ";
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
            ///cout << "Resultado: " << permutation.getArranjo() << endl; func�o nao esta pronta
            break;
        case 3:
            cout << "Digite um valor ";
            cin >> number;
            if (permutation.getFactorial(number))
            {
                 cout << "O Fatorial �: " << permutation.getFactorial(number) << endl;
            }
            else cout << "N�mero excede o limite da vari�vel primitiva 'long long' " << endl;
            break;
        case 4:
        {
            cout << "Informe o valor de P: ";
            cin >> number;
            Repetition repetition(number);
            cout << "\nInforme o valor dos elementos repetidos separados por v�rgula: ";
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
            cout << "O n�mero de anagramas que essa palavra possu� " << anagram.getResult() << endl;
        }
        break;
        case 0:
            cout << "Obrigado por utilizar " << endl;
            break;
        default:
            cout << "Entrada inv�lida!" << endl;
        }
        if (op != 0)
        {
            cout << "Aperte qualquer tecla para continuar...";
            getch();
            cls;
        }

    }
}


