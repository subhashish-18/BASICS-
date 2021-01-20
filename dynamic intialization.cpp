#include<iostream>
using namespace std;

class bank{
	int principal;
	int years;
	float interest_rate;
	int returnvalue;
	public:
		bank(){	}
		bank(int p,int y,float r) ;
		bank(int p,int y,int r);
		void show();
};

bank :: bank(int p,int y,float r)
{
	principal = p;
	years = y;
	interest_rate = r;
	returnvalue = principal;
	for(int i=0;i<y;i++)
	{
		returnvalue = returnvalue * (1+interest_rate); 
	}
}

bank :: bank(int p,int y,int r)
{
	principal = p;
	years = y;
	interest_rate = float(r)/100;
	returnvalue = principal;
	for(int i=0;i<y;i++)
	{
		returnvalue = returnvalue * (1+interest_rate); 
	}
}

void bank :: show()
{
	cout<<endl<<"principal amount was : "<<principal<<endl
	          << " return value after " << years <<" years "
	          << " is " << returnvalue;
}
int main()
{
    bank b1,b2,b3;
	int p,y,R;
	float r;	
	
	cout<<"enter the value of p,y,r : "<<endl;
	cin>>p>>y>>r;
	b1 = bank(p,y,r);
	b1.show();
		
/*	cout<<endl<<"enter the value of p,y,R : "<<endl;
	cin>>p>>y>>R;
	b2 = bank(p,y,R);
	b2.show();   */
	
	return 0;
}
