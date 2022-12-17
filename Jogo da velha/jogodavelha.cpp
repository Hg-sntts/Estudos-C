#include <iostream>
using namespace std;
// Arrays bidimensionais / Matrizes

char simb;
char array[3][3];
int l, c, lin, col, casas = 0, player = 1;

void imprimirCasas();
bool checarWin();
void mensagemVitoria();
bool deuVelha();
void preencherCasas();

int main(){

    preencherCasas();

    while (true){

        cout << "Turno: Player " << player << "\n\n";
        
        imprimirCasas(); //Imprime o jogo da velha na tela

        //Escolha do jogador
        cout << "Linha: ";
        cin >> lin;
        cout << "Coluna: ";
        cin >> col;
        cout << "X ou O: ";
        cin >> simb;

        array[lin-1][col-1] = simb;

        system("cls");
        
        if(checarWin() == true){break;} //Checa se alguem venceu, se sim, interrompe o programa
        
        if(deuVelha() == true) {break;} //Checa se deu velha, se sim, interrompe o programa
         

        //Alterna o player
        (player == 1) ? player = 2 : player = 1;

        //Contador para ver se todas as casas foram preenchidas, zera no fim de cada loop
        casas = 0;
        }
    
    system("pause");

    return 0;
}

void preencherCasas()
{
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            array[l][c] = ' ';
        }
    }
}

void imprimirCasas()
{
    for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                cout << "|" << array[l][c] << "|";
            }
            cout << "\n";
        }
}

bool checarWin()
{
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            if((array[l][0] == 'x' && array[l][1] == 'x' && array[l][2] == 'x') || (array[l][0] == 'o' && array[l][1] == 'o' && array[l][2] == 'o'))
            {
                mensagemVitoria();
                imprimirCasas();
                return true;
            }
        }
    }

    if((array[0][0] == 'x' && array[1][1] == 'x' && array[2][2] == 'x') || (array[0][0] == 'o' && array[1][1] == 'o' && array[2][2] == 'o')){mensagemVitoria();}
    if((array[0][2] == 'x' && array[1][1] == 'x' && array[2][0] == 'x') || (array[0][2] == 'o' && array[1][1] == 'o' && array[2][0] == 'o')){mensagemVitoria();}
    
}

void mensagemVitoria()
{
    cout << "\nParabens Player " << player << "! voce venceu!\n\n";
}

bool deuVelha()
{
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            if((array[l][c] == 'x') || (array[l][c] == 'o')){
                casas++;
                if(casas == 9){
                    cout << "Deu velha! " << endl;
                    imprimirCasas();
                    return true;
                }
            }
        }  
    }
}