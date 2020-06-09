#include "suara.h" 
#include <iostream> 
#include <windows.h> 
using namespace std; 
void suara::bicara(string kalimat){ 
string perintah = "espeak \""+kalimat+"\""; 
const char* perintahDikirim = perintah.c_str();
cout <<kalimat <<endl;
system(perintahDikirim); 
}
