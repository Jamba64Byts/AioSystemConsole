// teste.cpp : Defines the entry point for the console application.
#include "CHeader.h"
#include <iostream>
#include <windows.h>
#include "Ctime.h"
#include "Cfile.h"
INT64 NUM1;

using namespace std;

int main()
{
// Instrucao desse codigo
/*
 Este codigo pedi para o usurio digitar o tempo de aiox sera usado
 Passo1 Ele obtem o valor do usuario
 Passo2 Soma este valor com milesimos de um dia no caso 1 + 86400 = 1 dia caso digite 1 o loop inicializa
 passo2 Metodo Busca o valor escrito no arquivo config

*/
Cfile objFile;

//Cfile::getStr("TESTE1","TESTE2","TESTE3");
//Cfile::mStr("As");
//objFile->CCreateFile("AioSystem.ini");

/*
char tm[10];
cout<<"Digite nome do titulo"<<endl;
cin.getline(tm,10);
if (Cfile::mStr(tm) == true)
{
	cout<<"E maiuscula"<<endl;
}
*/

NUM1 = Cfile::read("SR_Dyas","AioSystem.ini");
cout<<"Valor retorno"<<NUM1<<endl;

Ctime::getTime();
Ctime::setTime();
Ctime *p = new Ctime();
p->sum();
p->startTime();

system("pause");
return 0;
}