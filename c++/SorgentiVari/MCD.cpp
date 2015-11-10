#include <iostream>;
	
	
	int mcd(int alfa, int beta)
	{
	int resto;
	while (beta!=0)
	{	resto = alfa%beta;
		alfa = beta;
		beta = resto;
	}
	return alfa;
	}
	
	
	int main()
	{
		int a,b,i,n;
		cout <<"Quante coppie di numeri vuoi esaminare?\n";
		cin >> n;
		
		for(i=1;i<=n;i++)
		{	
			cout<<"Coppia numero"<<i<<"?"<<endl;
			cin>>a>>b;
			cout<<"il MCD fra "<<a<<" e "<<b<<"è"<<mcd(a,b)<<"\a"<<endl;
		}
		return 0;
		system ("PAUSE");
	}
