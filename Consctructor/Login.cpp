#include <conio.h>
#include <iostream>

using namespace std;
//************THIS IS A LOGIN PROGRAMS THAT BLOCK THE ACCOUNT AFTER  3 WRONG ATTEMPS***************************************************
class Login {
	public:
		int ID;
		char name[30];
		int Pin;
		// int id, char nome[30], int pin
		Login (){
		//	ID = id;
			cout << "ID: ";
			cin >> ID;
		//	name = nome;
			cout << "Nome: ";
			cin >> name;
			
		//	Pin = pin;
			cout << "PIN: ";
			cin >> Pin;
		}
};
static int count = 0; 
int main (){

	Login l;	
	//int count = 0;
	  if (l.Pin == 1234){
	  cout << "Seja Bem-vindo " <<l.name;
	} 
	 else {
	 	do{
		  cout <<"O pin Introduzido Errado! \n";
	 	count += 1;
	        if(count < 3){	  
	  	       cout << "Introduza o Pin: ";
	 	 	   cin >>  l.Pin;
	 		}
	    }while (count<3 && l.Pin !=1234);
	  
	     if (count == 3)
	      	cout <<"  Conta Bloqueada!";
         else
	   		 cout << "Seja Bem-vindo " <<l.name;
	}
	 
	return 0;
}
