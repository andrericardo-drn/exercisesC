// Fa�a um programa que leia tr�s n�meros e mostre-os em ordem decrescente. 
#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3, aux;
	cout << "Digite o primeiro n�mero" << endl;
	cin >> num1 ;
	cout << "Digite o segundo n�mero" << endl;
	cin >> num2 ;
	cout << "Digite o terceiro n�mero" << endl;
	cin >> num3 ;
	 if(num2 < num1)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num3 < num1)
    {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if(num3 < num2)
    {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    cout << "N�meros em ordem decrescente:" << num1 <<" "<< num2 <<" "<< num3 << endl;
}
