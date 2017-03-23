#pragma once
#include "CHeader.h"


#define tmChar 1000
#define nMax 50

using namespace std;

   template <class RETURN_INT>
   RETURN_INT covSTRINT(const std::string& nS)
   {
	   int num;
       stringstream Ls;
	   Ls<<nS;//Recebendo a string
	   Ls>>num;//Inserindo a string
	   return num;
   }struct temp;


//Syntax for use namespace 
//using namespace templat or templat::covSTRINT
//convSTRINT<int>("STRING");


class Cfile{
private:
int nFile;
int nValue;
//##
char nAioSystem[9]; // off
size_t tm; // off
//##
static char n[16];// Nome do arquivo
static char sM;
string sTitle;
string sName;
string sFile;

public:

Cfile();


temp *t;
static bool getStr(const char* ,string , const char*);
static bool mStr(const char*);
static bool CCreateFile(const char*);
static INT64 read(const char*, const char*,const char*);
protected:
static INT64 num;// armazena os numeros separados

};
