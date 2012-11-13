#include <iostream>

using namespace std;

int izbor();
void povikaj(int);
//void br_deliteli();
void zbir_recip_vr();


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
			//povikaj ja br_deliteli();
			break;
		case 2:
			zbir_recip_vr();
			break;
		default:
			break;
	}
}

//	--Funkcija za presmetka na zbirot na reciprocnite vrednosti na prvite n-broevi
void zbir_recip_vr()
{
	float sum=0, n;
	cout<<"Do koj br da presmetam? ";
	cin>>n;

	if(n<1)	//ako NE E vnesen PRIRODEN broj ; za broevi pomali od 1
	{
		cout<<"*****Brojot treba da bidi pogolem od 0."<<endl;
		cin>>n;
	}
	for(float i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	cout<<"Zbirot na reciprocnite vrednosti na prvite "<<(int)n<<" prirodni broevi e "<<sum<<endl;
}