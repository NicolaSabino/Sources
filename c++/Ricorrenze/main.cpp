#include <iostream>
using namespace std;

int main() {
    char testo[75];
    int lungh;
    int conta_comb=0;
    int k=0;
    int i;
    char combinazione [75];

    cout<<"Inserisci testo (senza spazi).\n";
    cin>>testo;

    cout<<"Inserisci una combinazione.\n";
    cin>>combinazione;
    i=-1;
    do {
        i++;
    }while (combinazione[i]!='\0');

    lungh=i;
    cout<<"la lunghezza del vettore è "<<lungh<<endl;

    //ciclo di controllo
    for (i=0;i<75;i++) {
        int k=0;//indice di combinazione[]
        int j=i;//variamile di appoggio per testo[]
        bool ok=true;
        while(k<lungh && ok==true){
            if(testo[j]==combinazione[k]){
                j++;
                k++;
            }
            else ok=false;
        }
        if (k==lungh) conta_comb++;
    }

    cout<<"Il testo inserito contiene la combinazione inserita "<<conta_comb<<" volte.\n";

    return 0;
}