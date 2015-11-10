//	INPUT/OUTPUT

/**
*	si necessita di un file demo.txt nella directory contentente l'eseguibile del programma
*/

#include <fstream>
#include <iostream>
using namespace std;

int main(){
	char c;
	fstream i,o;
	i.open("demo.txt",ios::in);
	o.open("output.txt",ios::out);
	while(i>>c){
		if(c=='a')o<<'o';
		else o<<c;
	}
	cout<<"HO GENERATO IL FILE demo.txt\n\n\n";
	i.close();
	o.close();
	system ("PAUSE");
	return 0;
}

//non considera gli spazi!!!!
