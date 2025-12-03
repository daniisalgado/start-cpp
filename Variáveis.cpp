#include <iostream> // Necessário para cout
#include <string>   // Necessário para usar string
#include <clocale>  // Necessário para setlocale

using namespace std;

// Todo programa em C++ tem uma e somente uma função principal que é a função MAIN
int main () {
    
    // Para usarmos acentos
    setlocale(LC_ALL,"");

    // Variáveis é um espaço na memória onde vamos guardar valores temporariamente
    int numerosInteiros = 3;
    double numerosComCasasDecimais = 9.99;
    char letra = 'a';
    const char * letras = "abcdefg";
    string textos = "Aluna: Daniela";
    bool verdadeiroFalso = false;

    cout << numerosInteiros << "\n";  
    cout << numerosComCasasDecimais << "\n";  
    cout << letra << "\n";  
    cout << letras << "\n"; 
    cout << textos << "\n"; 
	cout << verdadeiroFalso << "\n";  

    // A função main diz que retorna um inteiro, então colocamos o 0 como tipo retorno
    return 0;
}
