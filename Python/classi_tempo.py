#esercizi sulle clasi

class Tempo:
    pass

def StampaTempo(Tempo):
    print Tempo.Ore," : ",Tempo.Minuti," : ",Tempo.Secondi;
    return

def SommaTempi(T1,T2):
    somma=Tempo();
    somma.Ore=T1.Ore+T2.Ore;
    somma.Minuti=T1.Minuti+T2.Minuti;
    somma.Secondi=T1.Secondi+T2.Secondi;

    #la funzione deve gestire i limiti dei minuti e dei secondi
    if somma.Secondi>=60:
        somma.Secondi=somma.Secondi-60;
        somma.Minuti=somma.minuti+1;
    if somma.Minuti>=60:
        somma.Minuti=somma.Minuti-60;
        somma.Ore=somma.Ore+1;
        
    return somma;


#creo un nuovo oggetto di tipo tempo

OraCorrente=Tempo() #<---COSTRUTTORE

#faccio riempire all'utente tempo
print "Inserisci l'orario corrente:\n"
OraCorrente.Ore=input("Ore: ");
OraCorrente.Minuti=input("Minuti: ");
OraCorrente.Secondi=input("secondi: ");
print "\n";

#check dell'ora assegnata a Oracorrente
print "\nOra Corrente:: ";
StampaTempo(OraCorrente);
print "\n";

#genero un altro oggetto di tipo tempo mediante un costruttore
TempoCottura=Tempo();

#faccio inserire all'untente il tempo di cottura
print "Inserisci il tempo di cottura:\n"
TempoCottura.Ore=input("Ore: ");
TempoCottura.Minuti=input("Minuti: ");
TempoCottura.Secondi=input("secondi: ");
print "\n";

#check dell'ora assegnata a TempoCottura
print "\nTempo di cottura:: ";
StampaTempo(TempoCottura);
print "\n"

print "Il pasto sarà pronto alle ";
StampaTempo(SommaTempi(OraCorrente,TempoCottura));


#fine
