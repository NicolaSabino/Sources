#include <iostream>
using namespace std;
 struct studente {
	char nome[15];
	int voto;
 };
 
 void quicksort (studente a[],int s,int d){
 	int i,j;
 	studente x,w;
 	i=s ; j=d; x=a[(s+d)/2];					//x (il pivot) è il valore medio dell array
 	do{
 		while(a[i].voto < x.voto)i++;			// SCORRIMENTO VERSO DESTRA DI i	
 		while(a[j].voto > x.voto)j--;			// SCORRIMENTO VERSO SINISTRA DI j
 		if(i<=j){
 			w=a[i];								//
 			a[i]=a[j];							//
 			a[j]=w;							    //	SOSTITUZIONE		
 			i++; j--;							//
 		}
 	 }while(i<=j);
 	 if(s < j) quicksort(a, s, j);
 	 if(i < d) quicksort(a, i, d);
 }
 
 int main (){
 	int i;
 	const int max_studenti=6;
 	studente scritto[max_studenti+1];
 	cout<<"\t\t * * * Q U I C K S O R T * * *\n\n";
	cout<<"Inserisci i nominativi e i relativi voti(non dimenticare lo spazio):\a\n\n";
 	for (i=1; i<=max_studenti;i++)
 	cin >> scritto[i].nome >> scritto[i].voto;
 	quicksort(scritto,1,max_studenti);
	cout<<"*\t*\t*\t*\t*\t*\t*\n";
	for (int i=1; i<=max_studenti;i++)
 	cout<< scritto[i].nome<<' '<<scritto[i].voto<<'\n';
 	cout<<"________________________________________________\n\n";
	system ("PAUSE");
	return 0;
 }
