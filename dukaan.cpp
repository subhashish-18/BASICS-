#include<iostream>
using namespace std;

class shop
{
	int itemId[100];
	string item_name;
	int itemprice[100];
//	int counter;
	
	public :
	//	void count(void) {counter = 1;}
	    int counter = 1;
		void setprice(void);
		void displayprice(void);
		void sumprice(void);
};

void shop :: setprice()
{
	cout<<"ENTER Id of item no "<<counter<<" : "<<endl;
	cin>>itemId[counter];
	cout<<"ENTER THE Item Name : " <<endl;
	cin>>item_name;
	cout<<"ENTER price of your item : "<<endl;
	cin>>itemprice[counter];
	counter++;	
	
}

void shop :: sumprice(void)
{
	int sum = 0;
	cout<<"\nTOTAL AMOUNT : " ;
	for(int i = 1;i<counter;i++)
	{
		sum = sum+itemprice[i];
	}
	cout<<sum;
}


void shop :: displayprice()
{
	for(int i = 1;i<counter;i++)
	{
		cout<<"PRICE OF "<<itemId[i]<<" : "<<itemprice[i]<<endl;
	}
}

int main()
{
	shop dukaan;
	//dukaan.count();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.setprice();
	dukaan.displayprice();
	dukaan.sumprice();
	
	return 0;
}
