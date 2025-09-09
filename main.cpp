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

    cout << "numero aeatorio generador:" << numA1 << " "<< numA2 << " "<< numA3 << endl;

    if( numA1 >= numA2 && numA1 >= numA3){
        if (numA2 >= numA3){
            cout << "orden desendiente:" << numA1 << " >= " << numA2 << " >= " << numA3 << endl;
        }
        else {
            cout << "orden desendiente:" << numA1 << " >= " << numA3 << " >= " << numA2 << endl;
        }
    }
    else if (numA2 >= numA1 && numA2 >= numA3){
        if (numA1 >= numA3){
            cout << "orden desendiente:" << numA2 << " >= " << numA1 << " >= " << numA3 << endl;
        }
        else {
            cout << "orden desendiente:" << numA2 << " >= " << numA3 << " >= " << numA1<< endl;
        }
    }
    else if (numA3 >= numA1 && numA3 >= numA2){
        if (numA1 >= numA2){
            cout << "orden desendiente:" << numA3 << " >= " << numA1 << " >= " << numA2 << endl;
        }
        else {
            cout << "orden desendiente:" << numA3 << " >= " << numA2 << " >= " << numA1 << endl;
        }
    }
    else {
        cout << "No es posible pornelo en forma desendiente." << endl;
    }

    return 0;

}
