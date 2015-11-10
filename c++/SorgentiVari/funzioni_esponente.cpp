#include <iostream>
using namespace std;

// PROTOTIPI DI FUNZIONE

int esp1(int x);
int esp2(int x);
int esp3(int x);

//	** MAIN **

int main(){
	cout<<"\t\t E S P O N E N T E \n\n";
	cout<<"Inserisci un intero...\n";
	int n,s;
	cin>>n;
	cout<<"scegli un esponente [da 1 a 3]...\n";
	cin>>s;
	switch(s){
	case 1: cout<<"il risultato è "<< esp1(n) <<endl;break;
	case 2: cout<<"il risultato è "<< esp2(n) <<endl;break;
	case 3: cout<<"il risultato è "<< esp3(n) <<endl;break;
	}
	return 0;
}

//	FUNZIONI

int esp1(int x){
	int j;
	j=x*1;
	return j;
}

int esp2(int x){
	int j;
	j=x*x;
	return j;
}

int esp3(int x){
	int j;
	j=x*x*x;
	return j;
}
