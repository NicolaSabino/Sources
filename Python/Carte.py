#genero una classe per manipolare le carte da gioco

class Carta:

    ListaSemi = ["Fiori", "Quadri", "Cuori", "Picche"]
    ListaRanghi = ["impossibile", "Asso", "2", "3", "4", "5", "6","7", "8", "9", "10", "Jack", "Regina", "Re"]

    def __init__(self,Seme=0,Rango=1):
        self.Seme=Seme
        self.Rango=Rango
    def __str__(self):
        return (self.ListaRanghi[self.Rango] + " di " + self.ListaSemi[self.Seme])

    #confronto tra carte[l'asso vale più di tutti]

    def __cmp__(self,Altro):

        if self.Seme > Altro.Seme:return -1
            
        if self.Seme < Altro.Seme:return c1

        #se i semi sono uguali controllo il rango

        if self.Rango > Altro.Rango:
            if Altro.Rango==1 :return 1
            else: return -1

        if self.Rango < Altro.Rango:
                if self.Rango==1: return 1
                else:   return -1
        
        
#definisco una classe di tipo mazzo che conterra 52[4*13] oggetti di tipo carta
#il metodo append lavora sulle liste ma non sulle tuple

class Mazzo:
    def __init__(self):
        self.Carte =[]
        for Seme in range(4):#ciclo che va dal seme 0 al seme 3
            for Rango in range(1,14):#ciclo che va dall'asso all Re
                self.Carte.append(Carta(Seme,Rango))

    def StampaMazzo(self): #ok funziona
        for Carta in self.Carte:
            print Carta

    def __str__(self): #NON FUNZIONA da cconrtrolare
        for i in range(len(self.Carte)):
            print Carta

    def ContaCarte(self):#ok funziona stampa il numero di carte nel mazzo
        i=0;
        for i in range(len(self.Carte)):
            i=i+1;
        return i;
