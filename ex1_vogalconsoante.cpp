// Faça um programa que verifique (usando if e else) se uma letra digitada é vogal ou consoante.
#include <iostream>

using namespace std;
int main()
{
    char letra;
    cout << "Digite uma letra" << endl;
    cin >> letra;
    if (letra=='a' or letra =='e' or letra=='i' or letra=='o' or letra=='u'){
        cout << "A letra eh vogal.";
    }
    else{
        cout << "A letra eh consoante";
    }
    return 0;
}
