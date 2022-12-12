#include <iostream>
using namespace std;

// Jogo da forca

int main(){

    char palavra[30], letra[1], secreta[30], letrasTentadas[30];
    int tamanho, indice, chances, acertos, indiceLetras;
    bool acerto;

    chances = 6;
    tamanho = 0;
    indice = 0;
    acerto = false;
    acertos = 0;
    indiceLetras = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");
    cout << palavra;

    while(palavra[indice] != '\0') //percorre a string até onde o ENTER aparecer '/0'
    {
        indice++;
        tamanho++;
    }

    for(indice = 0; indice < 30; indice++)
    {
        secreta[indice] = '-';
    }

    while ((chances > 0) && (acertos < tamanho))
    {
       cout << "Chances restantes : " << chances << "\n\n";
       cout << "Palavra secreta:  ";

       for(indice = 0; indice < tamanho; indice++)
       {
            cout << secreta[indice];
       }

       cout << endl;
       cout << "Letras ja usadas: ";

       for(indice = 0; indice < indiceLetras; indice++)
       {
            cout << letrasTentadas[indice] << " - ";
       }

       cout << endl; 
       cout << "Digite uma letra: ";
       cin >> letra[0];
       letrasTentadas[indiceLetras] = letra[0]; 
       


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

        acerto = false;
        indiceLetras++;
        system("cls");

    }
    
    if(acertos == tamanho)
    {
        cout << "Parabens, voce venceu!\n\n";
    } else 
    {
        cout << "Que pena, voce perdeu.\n\n";
    }

    system("pause");

    return 0;
}