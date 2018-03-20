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
    int value;
    string input;
    int op;
    do
    {
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

        cout << "\nEscolha o que deseja fazer: " << endl;
        cout << "1 - Combina��o" << endl;
        cout << "2 - Arranjos" << endl;
        cout << "3 - Permuta��o simples" << endl;
        cout << "4 - Permuta��o com repeti��o" << endl;
        cout << "5 - Anagrama" << endl;
        cout << "6 - Terminar a execu��o" << endl;

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
            cin >> value;
            cout << "O Fatorial �: " << permutation.getFactorial(value) << endl;
            break;
        case 4:
            cout << "Informe o valor de P " << endl;
            cin >> value;
            cout << "Informe o valor dos elementos repetidos " << endl;
            cin >> input;
            Repetition repetition(value);
            repetition.setRepetitions(input);
            cout << "Resultado: " << repetition.getRepetition() << endl;
            break;
        case 5:
            break;
        case 0:

            break;
        default:
            cout << "Entrada Inv�lida!" << endl;
        }
        cout << "Aperte qualquer tecla para continuar...";
        getch();
        cls;
    }
    while (op != 0);
}


