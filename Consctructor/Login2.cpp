#include <conio.h>
#include <iostream>

using namespace std;
//************THIS IS A LOGIN PROGRAMS THAT BLOCK THE ACCOUNT AFTER  3 WRONG ATTEMPS***************************************************
class Login {
	public:
		int ID;
		char name[30];
		int Pin;
		public:
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
		
		void display (){
		 int count = 0; 
			  if (Pin == 1234){
	  cout << "Seja Bem-vindo " <<name;
	} 
	 else {
	 	do{
		  cout <<"O pin Introduzido Errado! \n";
	 	count += 1;
	        if(count < 3){	  
	  	       cout << "Introduza o Pin: ";
	 	 	   cin >>  Pin;
	 		}
	    }while (count<3 && Pin !=1234);
	  
	     if (count == 3)
	      	cout <<"  Conta Bloqueada!";
         else
	   		 cout << "Seja Bem-vindo " <<name;
	}
		}
};

int main (){

	Login l ;
	
		l.display();
	

	 
	return 0;
}
