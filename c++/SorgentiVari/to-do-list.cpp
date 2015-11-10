/**
*Esame del Professor Dragoni
*/

#include <iostream>
using namespace std;

struct da_fare{
    char nome_evento[20];//<--dimensione massima della stringa
    int prior;
    da_fare* succ;
};

typedef da_fare*lista;
lista inizio;
da_fare e;


//da controllare la funzione nuovo compito
void nuovo_compito(lista& inizio, da_fare e){//inserimento ordinato in base alla priorità
    lista p=0,q,r;
    for(q=inizio;q!=0 && q->prior < e.prior;q=q->succ) p=q;//scorre la lista
    r=new da_fare;
    for(int i=0; i<20;i++) r->nome_evento[i] = e.nome_evento[i];//20 nn è a caso...è la dimensione massima della stringa
    r->prior =e.prior;
    r->succ=q;
    //controlo se devo inserire in testa
    if(q==inizio) inizio=r;
    else p->succ=r;

}

bool preleva_compito(lista& inizio, da_fare& e){
    lista p=inizio;
    if(p==0){
    cout<<"Nessun compito da svolgere\n";
    return false;
    }else{
    e=*p;
    inizio=p->succ;
    cout<<"devi "<<e.prior<<"  prior"<<e.nome_evento;
    delete p;
    return true;
    }
}

void stampa(lista&inizio){
if(inizio==0)cout<<"lista vuota\n\n";
lista p=inizio;
    do{
        cout<<p->nome_evento<<" "<<p->prior<<endl;
        p=p->succ;
        }while(p!=0);
}

int main(){
char c;
    while(1){
    cout<<"i: immettere, e: estrarre, x: uscire, s:stampa\n\n";
    cin>>c;
        switch(c){
        case 'i':{cout<<"Nome_evento:\t";cin>>e.nome_evento;
                cout<<"prior:\t";cin>>e.prior;
                nuovo_compito(inizio,e);
                };break;
        case 'e':preleva_compito(inizio,e);break;
        case 's':stampa(inizio);break;
        default:cout<<"CARATTERE NON VALIDO\n\n";break;
        case 'x':return 0;
        }
    }
}
