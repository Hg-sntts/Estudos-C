#include <iostream>
using namespace std;
// Arrays bidimensionais / Matrizes

int main(){

    char simb;
    char array[3][3];
    int l, c, lin, col, casas, player;
    casas = 0;
    player = 1;

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            array[l][c] = '.';
        }
    }

    while (true){

        cout << "Turno: Player " << player << "\n\n";
        
        //Imprime o jogo da velha na tela
        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                cout << "|" << array[l][c] << "|";
            }
            cout << "\n";
        }

        //Escolha do jogador
        cout << "Linha: ";
        cin >> lin;
        cout << "Coluna: ";
        cin >> col;
        cout << "X ou O: ";
        cin >> simb;

        array[lin-1][col-1] = simb;

        system("cls");

        //Checa se alguem venceu
        if((array[0][0] == 'x' && array[0][1] == 'x' && array[0][2] == 'x') || (array[0][0] == 'o' && array[0][1] == 'o' && array[0][2] == 'o')){goto win;};
        if((array[1][0] == 'x' && array[1][1] == 'x' && array[1][2] == 'x') || (array[1][0] == 'o' && array[1][1] == 'o' && array[1][2] == 'o')){goto win;};
        if((array[2][0] == 'x' && array[2][1] == 'x' && array[2][2] == 'x') || (array[2][0] == 'o' && array[2][1] == 'o' && array[2][2] == 'o')){goto win;};
        if((array[0][0] == 'x' && array[1][0] == 'x' && array[2][0] == 'x') || (array[0][0] == 'o' && array[1][0] == 'o' && array[2][0] == 'o')){goto win;};
        if((array[0][1] == 'x' && array[1][1] == 'x' && array[2][1] == 'x') || (array[0][1] == 'o' && array[1][1] == 'o' && array[2][1] == 'o')){goto win;};
        if((array[0][2] == 'x' && array[1][2] == 'x' && array[2][2] == 'x') || (array[0][2] == 'o' && array[1][2] == 'o' && array[2][2] == 'o')){goto win;};
        if((array[0][0] == 'x' && array[1][1] == 'x' && array[2][2] == 'x') || (array[0][0] == 'o' && array[1][1] == 'o' && array[2][2] == 'o')){goto win;};
        if((array[0][2] == 'x' && array[1][1] == 'x' && array[2][0] == 'x') || (array[0][2] == 'o' && array[1][1] == 'o' && array[2][0] == 'o')){goto win;};

        //Checa se deu velha
        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                        if(array[l][c] != '.'){
                    casas++;
                            if(casas == 9){
                        goto fim;
                    }
                }
            }  
        }

        //Alterna o player
        (player == 1) ? player = 2 : player = 1;

        //Contador para ver se todas as casas foram preenchidas, zera no fim de cada loop
        casas = 0;
        }

    fim: cout << "\nDeu velha\n\n";
    win: cout << "\nParabens Player " << player << "! voce venceu!\n\n";

    for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                cout << "|" << array[l][c] << "|";
            }
            cout << "\n";
        }
    
    
    system("pause");

    return 0;
}