#ifndef _OTAK_H 
#define _OTAK_H 
#include <iostream> 
#include <fstream> 
#include "suara.h" 
using namespace std; 

class otak{ 
public: 
void respon(string kalimat); 
void bicara(string kalimat); 
suara Suara;
}; 
#endif
