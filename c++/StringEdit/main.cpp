/**
 * Nicola Sabino
 * nicola.sabino94@gmmail.com
 *
 * GNU Public License
 *
 * Posizionare l'eseguibile nella cartella bin di linux per utilizzare il programma in qualsiasi directory
 * del sistema
 *
 * Il programma serve a manipolare array di caratteri o file di caratteri e li ordina con un SelectionSort
 */

#include <iostream>
#include <fstream>

using namespace std;

int contalettere(char* a){
    int cont=0;
    while(*a!='\0'){
        cont++;
        a++;
    }
    return cont;

}

void selectionsort(char* a){
    while(*a!='\0'){
        char* b=a+1;
        while(*b!='\0'){
            if(*b<*a){
                //swap
                char app;
                app=*a;
                *a=*b;
                *b=app;
            }
            b++;
        }
        a++;
    }
}

void stampa(char* a){
    while(*a!='\0'){
        cout<<*a;
        a++;
    }
    cout<<endl;
}

int main(int argc,char *argv[]) {

   if(argc==2){
       string app=argv[1];
       if (app=="-h"){
           //system("clear");
           cout<<"\tHELP\n\n./StringEdit [-op] [stringa o percorso file]"<<endl<<endl;
           cout<<"-o Ordina un vettore\n-of ordina da file\n"
                   "-c Conta le lettere di un vettore\n-co Conta i caratteri di un file"<<endl;
       }
       else cout<<"errore!"<<endl;
   }else if(argc==3){

       string app1=argv[1];
       /**
        * Ordinamento da stringa inserita via terminale
        */
       if(app1=="-o"){
            selectionsort(argv[2]);
            stampa(argv[2]);
       }

       /**
        * Conta lettere di una stringa inserita via terminale
        */
       if(app1=="-c"){
           cout<<contalettere(argv[2]);
           cout<<endl;
       }

       /**
         * Ordinare i caratteri di un file
         */
       if(app1=="-of"){
           char c;
           int contatore=0;
           string file=argv[2];
           fstream file_stringa; //creo un oggetto di tipo fstream;
           file_stringa.open(file,ios::in);

           /**
            * conta quanti caratteri ha il file
            */
           while(file_stringa.get(c)){
               contatore++;
           }

           file_stringa.close();

           /*---------*/

           file_stringa.open(file,ios::in);
           char stringa_appoggio[contatore];

           for(int i=0;i<contatore;i++){
               file_stringa.get(c);
               stringa_appoggio[i]=c;
           }

           /* ordino */

           selectionsort(&stringa_appoggio[0]);

            //stampa
           for(int i=0;i<contatore;i++){
               cout<<stringa_appoggio[i];
           }
           cout<<endl;

           file_stringa.close();

       }

       /**
        * conta lettere da file
        */
       if(app1=="-co"){
           char c;
           int contatore=0;
           string file=argv[2];
           fstream file_stringa; //creo un oggetto di tipo fstream;
           file_stringa.open(file,ios::in);

           /**
            * conta quanti caratteri ha il file
            */
           while(file_stringa.get(c)){
               contatore++;
           }

           file_stringa.close();

           /*---------*/

           file_stringa.open(file,ios::in);
           char stringa_appoggio[contatore];

           for(int i=0;i<contatore;i++){
               file_stringa.get(c);
               stringa_appoggio[i]=c;
           }

           cout<<contatore<<endl;
       }
   }
}
