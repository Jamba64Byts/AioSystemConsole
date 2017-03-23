#include "CHeader.h"
#include "Cfile.h"

using namespace std;
//Initialize variable statics
char Cfile::n[16];
char Cfile::sM;
INT64 Cfile::num;
Cfile::Cfile()
{

/*
  FILE *file;
  errno_t err;
  err = fopen_s(&file,"../config/AioSystem.txt","r");

  cout<<err<<endl;
  if(err == 2)
  {
	  cout<<"Criou arquivo..."<<endl;
     fopen_s(&file,"../config/AioSystem.txt","a");
  }
    else if(err != 2)
  {
    cout<<"Arquivo AioSystem Carregado..."<<endl;
  }

/* instrucao desativada
  char n[]= "AioSystem";
  tm = strlen(n);
  for(unsigned int i=0;i<tm;i++)
  {
      nAioSystem[i] = n[i];
  }
    cout<<tm<<"Caracter"<<"\a Acabou de levar o nome da config para class.";
    cout<<"\n";
*/
}

bool Cfile::getStr(const char* sTitle, string wName, const char* wFile)
{ 
	//string n ;
	//Mostra tamnho n.size() ou length();
   return 0;
}

//Verifica o tamanho e retorna true ou false
bool Cfile::mStr(const char* mS)
{
	size_t nTm = strlen(mS);
	cout<<nTm<<endl;
	for(unsigned int i=0;i<nTm;i++)
	{  
	 n[i] = mS[i];
	 sM = mS[i];
	}
	if(!islower(sM))
	{
	cout<<"Maiusculo 100 %ok"<<endl;
	return true;
	}
	else
	{
    cout<<"Error Config somente letra Maiuscula em titulo"<<endl;
    return false;
	}
}


bool Cfile::CCreateFile(const char* vFILE){

FILE *file;
int err;
char v[50];
bool result;
size_t newTM = strlen(vFILE);
if(nMax<newTM &&  newTM> nMax)
{
  cout<<"Ecedeu o limite de digitos finalizou o programa"<<endl;
  return 0;
}

else if(nMax> newTM && newTM <nMax ){

strcpy_s(v,"../IniConfig/");
strcat_s(v,vFILE);
err = fopen_s(&file,v,"r");

// (err) retorna 0 quando tem o arquivo e 2 quado nao tem
switch (err){
     case 0:
	 cout<<"Teste para ver se esta aqui 0"<<endl;
	 result = (err == 0) ? true : false;
	 break;
	 case 2:
     cout<<"Criou arquivo..."<<endl;
     fopen_s(&file,v,"w");
	 result = (err == 0) ? false : true;
	 break;
	 default:
	 cout<<"Valor nao esperado pelo sistem defalt"<<endl;
	 result = false;
	 break;
     }  
   }
   return result;
}


INT64 Cfile::read(const char* nameKey, const char* nameFile)
{
   bool nTrue = true;
   if(CCreateFile("AioSystem.ini") == nTrue){
   char v[50];
   FILE *Enter;
   errno_t err;
   strcpy_s(v,"../IniConfig/");
   strcat_s(v,nameFile);
   err = fopen_s (&Enter,v,"r");


   stringstream ss;
   size_t charT = strlen(nameKey)+1; //Incremeto para destruir o nulo
   char *c;
   c = (char*)malloc(sizeof(charT));
   char nArrys[tmChar];

   int contador = 0;//Contador de linhas
   char *filter;
   while(fgets(c,charT,Enter) != NULL){// Fixed loop infinity

   ++contador;
   if( strcmp(c,nameKey) == 0) // IF 02 Compara as string return 0 if true
   {
	   
    cout<<"E igual"<<endl;
    if(contador == contador){ //Se igual contador Entra nessa condicao

    fgets(nArrys,tmChar,Enter);// Ler a linha onde contador parou
	size_t tm = strlen(nArrys);
		  	            
    for(unsigned int i=0;i<tm;i++){
					   	  
	Sleep(1500);//Diminuindo o dalay
	if(isdigit(nArrys[i]) != EOF)
	{   
	if(nArrys[i] != '=' && nArrys[i] != 0 )
	{
							    
	filter = &nArrys[i]; //Filtrando array
	if(isdigit(*filter))
	{
	    ss<<filter;
		ss>>num;
		cout<<nameKey<<" Valor de num = "<<num<<endl;//Exibindo valor antes de retorna
		return num;
    }
	else
	{
		cout<<"Ainda nao e numero"<<endl;
	}

	}else
	{   
	    cout<<"Nao entra (=) "<<endl;	
	}
	
	}
	else
	{
	    cout<<"Nao e numero"<<endl;
	}					   	     				   	  

	}					   					          
			   
	}else return false;

    } // END  IF 02
    else
	{           
        cout<<"Diferente"<<endl;
        cout<<"Fila "<<contador<<" Name " <<c<<endl;					    
	}
			    
	Sleep(1000);
		
	}
    
	fclose (Enter);

  }//Fim condicao que virifica se existe o arquivo
   else 
   {
	 cout<<"Nao existe arquivo"<<endl;
	 return nTrue = false;
   }
   return false;
}