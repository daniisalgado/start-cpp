#include <iostream>
/*
Iostream é uma biblioteca
I - Vem de Input - Entrada
O - Vem de Output - Saída
*/

#include <locale.h> //Para usarmos acentos

/*
Importando todos os identificadores do NameSpace STD para usar o cout e endl
O Namespace é nada mais nada menos que uma organização de pastas
*/
using namespace std;

/*
Todo o programa em C++ tem uma e somente uma função principal que é a função MAIN
*/

int main () { 
     //Para usarmos acentos 
     setlocale(LC_ALL, "");
     //Imprimir na tela
     cout << "Olá, Mundo! \n"; 
     
     cout << "Eu sou a Daniela Salgado e vou dominar essa linguagem! " << endl;
//A função main diz que retornar um inteiro, então colocamos o 0 como tipo retorno
     return 0;
}

