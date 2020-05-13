#include <iostream>

using namespace std;

float oceny[5]; float suma=0, œrednia;

int main()
{
    for (int i=0; i<5; i++)
    {

        cout<<endl<<"podaj "<<i+1<<" ocene:";
        cin>>oceny[i];
        suma += oceny[i];
    }

    cout<< "suma = " <<suma;

    return 0;
}
