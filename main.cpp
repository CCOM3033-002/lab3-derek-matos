/*Derek Matos 
septiembre 9 de 2025
Lab #3: Numeros ALeatorios*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    srand(time(0));

    int numeroAleatorio = rand() % (100 - 0 + 1) + 0;

    cout << numeroAleatorio << endl;

    return 0;

}
