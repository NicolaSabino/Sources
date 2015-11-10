#include <iostream>
using namespace std;

int main(){
int h;
cout<<"\t\t* * * L'ALBERELLO DI NATALE * * *\n\n\n";
cout<<"inserisci l'altezza dell'alberello <3 :\t";
cin>>h;
cout<<endl<<endl;
for(int i=0;i<h;i++){//scorre in altezza l'albero
    cout<<"\t";

    for(int k=h;k!=i;k--)cout<<" ";
    for(int j=0;j<i;j++)cout<<"* ";
    cout<<endl;
    }

    cout<<endl<<"\t\tBUON NATALE!!"<<endl<<endl;
return 0;
}
