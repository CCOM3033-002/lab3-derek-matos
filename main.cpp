/*Derek Matos 
septiembre 9 de 2025
Lab #3: Numeros ALeatorios*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    srand(time(0));

    int numA1 = rand() % (100 - 0 + 1) + 0;
    int numA2 = rand() % (100 - 0 + 1) + 0;
    int numA3 = rand() % (100 - 0 + 1) + 0;

    cout << numA1 << " "<< numA2 << " "<< numA3 << endl;

    return 0;

}
