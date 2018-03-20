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

    int op;
    do
    {
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

        cout << "\nEscolha o que deseja fazer: " << endl;
        cout << "1 - Combinação" << endl;
        cout << "2 - Arranjos" << endl;
        cout << "3 - Permutação simples" << endl;
        cout << "4 - Permutação com repetição" << endl;
        cout << "5 - Anagrama" << endl;
        cout << "6 - Terminar a execução" << endl;

        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Opção > ";
        switch(scanf("%d", &op))
        {
        case 1:
            Combination combination;
            int elementos, agrupamentos;
            cout << "Informe o quantos elementos ela possui: ";
            cin >> elementos;

            cout << "Informe o quantos agrupamentos ela possui: ";
            cin >> agrupamentos;
            combination.setCombination(elementos, agrupamentos);
            cout << "Resultado: " << combination.getCombination() << endl; //marco fazer logica para que o valor da variavel "elemento serja maior que agrupamentos
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            break;
        default:
            cout << "Entrada Inválida!" << endl;
        }
        cout << "Aperte qualquer tecla para continuar...";
        getch();
        cls;
    }
    while (op != 0);
}


