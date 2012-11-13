#include <iostream>

using namespace std;

int izbor();
void povikaj(int);
void br_deliteli();
//void zbir_recip_vr();


//	--Glavniot vlez vo programata--
int main()
{
	povikaj(izbor()); //sto izbral korisnikot od ponudenite opcii
	return 0;
}

//	--Lista od ponudeni opcii za izbor--
int izbor()
{
	int izbr = 0;
	cout<<"Izbor:\n"<<
	"1.Broj na deliteli\n"<<
	"2.Zbir na reciprocni vrednosti"<<endl;
	
	cin>>izbr;

	while(izbr<1 || izbr>2)//dokolku e izbrana nepostoecka opcija..
	{
		cout<<"Izborot treba da bide pomejdzu 1 i 2"<<endl;
		cin>>izbr;	//..izbiraj povtorno
	}
	return izbr;
}

//	--Povikaj ja funkcijata sto ja izbral korisnikot--
void povikaj(int izbr)
{
	switch(izbr)
	{
		case 1:
			br_deliteli();
			break;
		case 2:
			//povikaj ja zbir_recip_vr()
			break;
		default:
			break;
	}
}


//Funkcija za presmetka na brojot na delitelite na daden broj
void br_deliteli()
{
	 int br, a=0, tmp=1;
	 cout<<"Vnesi eden broj: ";
	 cin>>br;

	 if(br<0)
	 {
		 tmp=br;
		 br*=-1;
	 }

	 cout<<"!!!Kako deliteli se brojat SAMO pozitivnite broevi!!!\n";

	 if(br==0)	//ako korisnikot vnesi 0
		 cout<<"Brojot ima 0 deliteli."<<endl;
	 else if(br==1)	//ako korisnikot vnesi 1
		 cout<<"Brojot ima 1 delitel."<<endl;
	 else{	//za site drugi broevi
		 for(int i=2;i<br/2+1;i++){
			 if(br%i==0){	//ako modulot na br so i e 0 ==> i e delitel na br
				 a++;	//zgolemi go brojot na delitelite
			 }
		 }
		 if(tmp<0)
			 br=tmp;
		 cout<<"Brojot "<<br<<" ima "<<a+2<<" deliteli.\n";
	 }
}