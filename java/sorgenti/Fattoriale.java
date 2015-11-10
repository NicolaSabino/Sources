//rivedere il codice e compilarlo con javac

class Fattoriale{

	/**
	* Metodo publico che calcola il fattoriale
	*/
	static public long factorial(long number){
		if(number < 0){
			return 0; //attenzione argomento non corretto
		}else if(number <=1){
			return 1; //caso base
		}else{
			 return number * factorial(number-1);
		}
	}
	
	/**
	* M A I N
	*/

	static public void main(String[] args){
		long a=20;
		System.out.print("Il fattoriale di " + a +" e' ");
		System.out.println(factorial(a));
	}
}
