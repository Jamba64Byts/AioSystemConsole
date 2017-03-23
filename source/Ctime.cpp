#include "CHeader.h"
#include "Ctime.h"


int Ctime::nSum = 0;
int Ctime::nTime = 0;
using namespace std;
int Ctime::startTime()
{

   if(nTime == 0)
	   return false;
   else
   {
	   for(int i=0;i<nTime;){
		   i++;
		   Sleep(1000);
	       system("color 7");
	 	   cout<<"% \a"<<i<<endl;
		   nR = i;
		}
   }

   return nR;
}

void Ctime::sum()
{
  nSum = nSum + 86400;//Esta sem tempo para testes
  nTime = nSum;
}

INT64 extern NUM1;
void Ctime::getTime()
{   
	start:
//	int nVar;
//	cout<<"Digite numero de dias"<<endl;
//	cin>>nVar;

     if(NUM1 <=0 || NUM1> 60)
	 {
		 goto start;
	 }
	 else 
	 {   
		 cout<<"Numero de dias chegou aqui no getTime"<<NUM1<<endl;
		 nSum = (int) NUM1;
	 }

}


int Ctime::setTime()
{
	return nTime;

}