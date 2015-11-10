#include <iostream>
using namespace std;

struct studente{
	char nome[15];
	int voto;
	studente* succ;
};
studente* inizio;	//puntatore di tipo studente(INIZIO)
studente e;		//variabile globale di tipo studente
typedef studente* lista;

//	* * Funzioni * *
bool uguale(char stringa1[],char stringa2[]){
	int i=0;
	bool a=true;
	while(stringa1[i]!='\0' && a==true)
	{
		if(stringa1[i]==stringa2[i])i++;
		else a=false;
	}
	return a;
}

void stampa(lista& inizio){
	lista p;
	p=inizio;
	do{
		if(inizio==0) cout<<"Lista vuota!\n";
		cout<<"Lo studente "<< p->nome << " ha  ottenuto "<< p->voto <<endl<<endl;
		p=p->succ;
		cout<<endl;
	}while(p!=0);
}

void ins_testa(lista& inizio, studente& e){
	lista p;
	p=new studente;
	*p=e;//riempimento
	p->succ=inizio;
	inizio=p;
	cout<<"Hai inserito "<<e.nome<<"\t"<<e.voto<<endl;
}

void est_testa(lista& inizio, studente& e){
    if(inizio==0)cout<<"la lista è vuota\n";
    else{lista p;
        p = inizio;
        e = *p;
        inizio = p->succ;
        cout<<"hai eliminato "<<e.nome<<endl;
        delete p;
        }

}

void ins_coda(lista& inizio, studente& e){
    lista p,q;
    if(inizio==0){//inserimento in testa
    q=new studente;
    *q=e;//riempimento
    q->succ=inizio;
    inizio=q;
    cout<<"hai inserito "<<e.nome<<" con voto "<<e.voto<<endl<<endl;
    }
    else{
    for(p=inizio; p->succ!=0; p=p->succ)q=p;//scorre fino alla fine della lista
    q=new studente;
    *q=e;//riempimento
    p->succ=q;
    cout<<"Ho inserito "<<e.nome<<" con voto "<<e.voto<<endl<<endl;
    q->succ=0;
    }
}

void est_coda(lista& inizio,studente& e){
    lista p,q;
    if(inizio==0)cout<<"la lista è vuota!\n\n";
    else{
        for(p=inizio;p->succ!=0;p=p->succ) q=p;//scorre la lista fno all ultimo elemento
        e=*p;
        cout<<"lo studente "<<e.nome<<" è stato eliminato\n\n";
        q->succ=0;
        delete p;
    }
}

void ins_ordinato(lista& inizio, studente& e){
    lista p,q,r;
    for(p=inizio;p!=0 && e.voto > p->voto;p=p->succ) q=p;//scorre la lista
    r=new studente;
    *r=e;//riempimento
    if(p==inizio){
        r->succ=inizio;
        inizio=r;
        cout<<"Ho inserito "<<e.nome<<" correttamente\n\n";
        }
    else{
        q->succ=r;
        r->succ=p;
        cout<<"Ho inserito "<<e.nome<< "ordinatamente\n\n";
    }
}


void est_ordinato(lista& inizio,studente& e){
    lista p,q;
    if(inizio==0)cout<<"la lista è vuota\n\n";
    else{
        for(q=inizio;q!=0 && uguale(q->nome,e.nome);q=q->succ)
            for(p=inizio;p!=0 && p->succ!=q;p=p->succ)
        if(q==0)cout<<"Elemento non trovato!\n\n";//è arrivato fino all'ultimo elemento della lista
        else{
            cout<<"Lo studente "<<e.nome<<" è stato eliminato";
            p->succ=q->succ;
            delete q;
            }
        }
}

int main(){
char c;
while(1){
    cout<<"a:\tINSERISCI IN TESTA\nb:\tESTRAI IN TESTA\n";
    cout<<"c:\tINSERISCI IN FONDO\nd:\tESTRAI IN FONDO\n";
    cout<<"e:\tINSERISCI ORDINATAMENTE\nf:\tESTRAI ORDINATAMENTE\n";
    cout<<"s:\tS T A M P A\t\nq:\tC H I U D I\n";
    cin>>c;
    switch(c){
        case 'a':{
                cout<<"inserisci NOME [spazio] VOTO [invio]\n";
                cin>>e.nome>>e.voto;
                ins_testa(inizio,e);
                };break;
        case 'b':{
                est_testa(inizio,e);
                };break;
        case 'c':{
                cout<<"inserisci NOME [spazio] VOTO [invio]\n";
                cin>>e.nome>>e.voto;
                ins_coda(inizio,e);
                };break;
        case 'd':{
                est_coda(inizio,e);
                };break;
        case 'e':{
                cout<<"inserisci NOME [spazio] VOTO [invio]\n";
                cin>>e.nome>>e.voto;
                ins_ordinato(inizio,e);
                };break;
        case 'f':{
                cout<<"inserisci NOME [invio]\n";
                cin>>e.nome>>e.voto;
                est_ordinato(inizio,e);
                };break;
        case 's':stampa(inizio);break;
        case 'q':return 0;
        }
    }
}


//funziona tutto tranne l'estrazione ordinata
