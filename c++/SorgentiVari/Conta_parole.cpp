#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

   string parola;
   int conteggio = 0;
   ifstream infile("new.txt");
   if (!infile.good()){
      cout << "errore apertura file" << endl;
      return 0;
   }
   while ( infile >> parola ) {
      ++conteggio;
      cout << "Parola: " << parola << " numero: " << conteggio << endl;
   }

}
