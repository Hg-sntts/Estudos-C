#include <iostream>
using namespace std;

char palavra[30], letra[1], secreta[30], letrasTentadas[30];
int tamanho, indice, chances, acertos, indiceLetras;
bool acerto;

void tamanhoPalavra();
void armazenarLinha();
void imprimirLinhas();
void letrasUsadas();
void verificaAcerto();
void venceOuPerde();

int main(){

    chances = 6;
    tamanho = 0;
    indice = 0;
    acerto = false;
    acertos = 0;
    indiceLetras = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    tamanhoPalavra();
    armazenarLinha();

    while((chances > 0) && (acertos < tamanho))
    {
        cout << "Chances restantes : " << chances << "\n\n";
        cout << "Palavra secreta:  ";

        imprimirLinhas();

        cout << endl;
        cout << "Letras ja usadas: ";

        letrasUsadas();

        cout << endl; 
        cout << "Digite uma letra: ";
        cin >> letra[0];
        letrasTentadas[indiceLetras] = letra[0];

        verificaAcerto();

        acerto = false;
        indiceLetras++;
        system("cls");

    }

    venceOuPerde();

    return 0;
}

void tamanhoPalavra(){
    while(palavra[indice] != '\0') //percorre a string até onde o ENTER aparecer '/0'
    {
        indice++;
        tamanho++;
    }
}

void armazenarLinha(){
    for(indice = 0; indice < 30; indice++)
    {
        secreta[indice] = '-';
    }
}

void imprimirLinhas(){
    for(indice = 0; indice < tamanho; indice++)
       {
            cout << secreta[indice];
       }
}

void letrasUsadas(){
    for(indice = 0; indice < indiceLetras; indice++)
       {
            cout << letrasTentadas[indice] << " - ";
       }

}

void verificaAcerto(){
    for(indice = 0; indice < tamanho; indice++)
       {
            if(palavra[indice] == letra[0])
            {
                acerto = true;
                secreta[indice] = palavra[indice];
                acertos++;
            }
       }

       if(!acerto)
       {
            chances--;
       }
}

void venceOuPerde(){
       if(acertos == tamanho)
    {
        cout << "Parabens, voce venceu!\n\n";
    } else 
    {
        cout << "Que pena, voce perdeu.\n\n";
    }
}