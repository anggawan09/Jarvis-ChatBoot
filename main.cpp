#include <iostream> 
#include "otak.h" 
using namespace std; 
main(){ 
	otak BOT; 
	for(;;){ 
		cout<<"\nKAMU : "; 
		string kalimat; 
		getline(cin, kalimat);
		cout<<"BOT : "; 
		BOT.respon(kalimat);
	} 
}
