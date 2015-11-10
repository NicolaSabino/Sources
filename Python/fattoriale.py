#metodo ricorsivo per implemetare una funzione che calcoli il fattoriale di un numero

def fattoriale(n):
    if n==0:
        print  n ,"= ";
        return 1;
    else:
        print n  ," * ";
        FattorialeMenoUno= fattoriale(n-1);
        risultato=FattorialeMenoUno*n;
        return risultato


#seconda versione_________________________________

def fatt(n):
        if n==0:
            return 1;
        else:
            return n * fatt(n-1);
    
