#   programma che calcola la distanza tra due punti
# in un piano cartesiano mediante il teprema di pitagora

import math;

print "Inserisci  le coordinate del punto a\n";
ax=input("\t a(x)= ");
ay=input("\ta(y)= ");
print  "\nInserisci le coordinate del punto b\n";
bx=input("\t b(x)= ");
by=input("\tb(y)= ");

print "\n\n\t-APPLICO PITAGORA-\n";
print "L'equazione risolvente e'";

x=math.sqrt( pow((ax-bx),2) + pow((ay-by),2));

print  "x=sqrt((", ax," - ",bx,"))^2  +  (",ay," -  ",by,"))^2)";

print"x=",int(x); #arrotondamento a intero
