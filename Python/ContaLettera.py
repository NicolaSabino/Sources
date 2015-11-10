#funzione che controlla quante volte si ripete una data lettera in una stringa

def contalettera(stringa, x):
    c=0;
    for z in stringa:
        if z==x:
            c=c+1;
    return c;

#seconda versione_____________________________

def contalettera_(stringa,x):
    c=0;
    i=0;
    while i<len(stringa):
        if stringa[i]==x:
            c=c+1;
        i=i+1;
    return c;
