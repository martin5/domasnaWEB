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
	 int br, a=2;	//sekoj broj ima najmalku 2 deliteli (1 i samiot broj)
	 cout<<"Vnesi eden broj: ";
	 cin>>br;
	 for(int i=2;i<br/2+1;i++){
		 if(br%i==0){	//ako modulot na br so i e 0 ==> i e delitel na br
			 a++;	//zgolemi go brojot na delitelite
		 }
	 }
	 cout<<"Brojot "<<br<<" ima "<<a<<" deliteli.\n";
}