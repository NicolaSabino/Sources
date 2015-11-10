#include <iostream>

using namespace std;

 int main()
{
	double op1, op2;
	char op;
	cout<< "___  C A L C O L A T R I C E  ___\a"<<endl;
	cin>> op1 >> op >>op2;
		switch(op)
		{
			case'+':cout<< op1+op2 << endl;break;//il break è fondamentale altrimenti 
			case'-':cout<< op1-op2 << endl;break;// mette a video tutti i casi!!
			case'*':cout<< op1*op2 << endl;break;
			case'/':cout<< op1/op2 << endl;break;
			default:cout<< "Errore!! \a"<< endl;
		}
		system ("PAUSE");
}

