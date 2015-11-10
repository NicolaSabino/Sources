//RETTANGOLO
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout<<"___R E T T A N G O L O___\n";
	int i,j,n,m;							// i e j sono due contatori
	cout<<"\nNumero di linee: ";
	cin>>n;
	cout<<"\nNumero di colonne: ";
	cin>>m;
		for(i=1;i<=n;i++){
			cout<<"\n";
				for(j=1;j<=m;j++)
				cout<<"+ ";
		}
	cout<<"\n";
	system("PAUSE");
}
