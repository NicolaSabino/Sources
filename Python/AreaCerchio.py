#programma che calcola l'area di un cerchio

import math

def  area(xc,yc,xp,yp):
    raggio=Distanza(xc,yc,xp,yp);
    print "il raggio e'",int(raggio);
    Risultato=AreaDelCerchio(int(raggio));  #approssimazione a intero
    return  Risultato;

def Distanza(a,b,c,d):
    j=(a-c)**2;
    k=(b-d)**2;
    return math.sqrt(j+k);

def AreaDelCerchio(a):
    return  int(math.pi*(a**2));
