#include <iostream>

using namespace std;

 int main()
{
	cout<< "\t\t   C A L C O L A T R I C E\a"<<endl;
		cout<< "\n**\t addizioni sottrazioni divisioni e moltiplicazioni\t**\n**\t  tra numeri INTERI POSITIVI\t\t\t\t**"<<endl;
		cout<<"___________________________________________________________________\n";
	while(1){ 
	double op1, op2;
	char op;
	cin>> op1 >> op >>op2;
		switch(op)
		{
			case'+':cout<< op1+op2 << endl;break;//il break è fondamentale altrimenti 
			case'-':cout<< op1-op2 << endl;break;// mette a video tutti i casi!!
			case'*':cout<< op1*op2 << endl;break;
			case'/':cout<< op1/op2 << endl;break;
			default:cout<< "Errore!! \a"<< endl;
		}
		cout<< "___________________________________________________________________"<<endl;
	}
	
}



