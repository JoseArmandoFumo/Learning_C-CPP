#include <iostream>
#include <conio.h>

using namespace std;

typedef struct {

		int genero;
		char name[30];
	}eleitor;
	
	
		void showData (eleitor e[], int size){
		
		cout << "**** DADOS DOS ELEITORES  \n\n" ;
		cout << "NOME                       GENERO:           \n" ;
		
		for (int i =1; i <=size ; i++) {
			if (e[i].genero ==1){		
				cout << e[i].name<<"      	    " <<"Masculino \n";
				}
			else{
				if(e[i].genero == 2)
				    cout << e[i].name << "              "<<"Femenino \n";
				else
				     cout << e[i].name << "                "<< "Outro  \n";
			}
									}
		}
		
		//criar outra funcao sorte e chamar essa funcao em cada if
		//no metodo sort fazer print a cada if verificado

	void setData(eleitor e[], int size){
	
		int op,i,j;
	do {

		for ( i=1; i<=size; i++){
				cout << " ************ LISTA DE ELEITORES ************************ \n\n";
	
			showData(e, size);
		
			cout << " \n\n";
			
			cout <<"*************************PREENCHA OS DADOS DO ELEITOR ********************* \n\n";
			cout << "Digite o genero (1.Masculino |2. Femenino |3.Outro): ";
			cin >> e[i].genero;
			cout <<"Digite o nome do  eleitor: ";
			cin >> e[i].name;		
			
		//	cout << "Eleitor Cadastrado com Sucesso! \n";
		//	system("cls");
				
		cout << "Deseja Cadastrar mais? (Nao=0  Sim = 1): ";
		cin >> op;
		system("cls");
		if(op==1)
		{
			continue;
	    }
		else{
			break;
			system("cls");		
		}
	}
	
	} while(op=0);
	
	}// end setDAta




	int main (){
			eleitor e[100];
			int size;
		cout << "numero de eleitores: ";
		cin >> size;
	
		setData(e, size);
		
	return 0;
				}



