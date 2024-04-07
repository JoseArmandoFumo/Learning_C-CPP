#include <conio.h>
#include <iostream>

using namespace std;

class Viatura {
	public:
	   int speed;
	   char matricula[40];
	   


	void setViatura (){
	 cout<< "Preencha os dados: \n ";

	 cout <<"Matricula: ";
	 cin>>matricula;
	 ///  if(matricula == )
	 cout << "Informe a velocidade: ";
	 cin>> speed;
	 cout << "Cadastrado com Sucesso! \n\n";
     //system("cls");
	}
	
	void showViatura (){
		for ( int i=0; i<speed; i++){
	      cout <<"=" ;
		}
		cout <<matricula  << "\n";
	}
	
	void menu(){
	  int op;	
		cout << "***************MENU*********************  \n\n";
		cout << "1. Acelerar: " <<endl;
		cout << "2. Desacelerar: " << endl;
		cout << "selecione a opcao desejada: ";
		cin >> op;
		switch (op) {
			
			case 1: setViatura();
					break;
			case 2: showViatura();
					break;
			default: cout << "Opcao Invalida! \n";
					 break;
		}
	}
  };//client
  //******************************************MAIN METHOD******************************
  int main () {
  system("cls");
   int size, i,op;
     
   Viatura v[100];
   cout <<"Informe o numero de carros: ";
   cin >>size;
   system("cls");
   
   for (i=0; i<size; i++){
   	 v[i].setViatura();
   	 //system("cls");
   	// cout << "Cadastrado com Sucesso! \n";
   }

   for (i=0;i<size;i++){
      v[i].showViatura(); 
    }
    
    v[0].menu();

   return 0;
   // getch();
    }
