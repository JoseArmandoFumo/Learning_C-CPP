//#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Aluno {
	public:
	int ID;
	char *nome;
	char *nac;
	int pin;

	Aluno (){
	cout << "Bem vindo \n";
	nac= "Moz";
	pin = 0;
	}
	Aluno (int id, char *N, char *NA, int p){
	      ID = id;
	      nome = N;
	      nac =  NA;
	      pin = p;
	      }
	};
int main (){
  system("cls");

  Aluno A1;

  Aluno A2 (111, "ABC", "SA", 123);
    int x, px; char *a, *b;
    x=111;
    px = 222;
    a = "ATT";
    b = "EGP";
  // cout << "**************A3**************** \n";
  Aluno A3(x, a, b, px);
  cout <<A2.nac << A1.nac <<"\n";
  cout <<A1.ID << A3.nome <<"\n";
  cout << A3.pin;
  getch();
  return 0;
  }
