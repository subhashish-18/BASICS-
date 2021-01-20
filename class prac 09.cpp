#include<iostream>
using namespace std;

class complex{
	int a,b;
	public : 
	void setno(int x,int y)
	{
		a = x;
		b = y;
	}
	void getno()
	{
		cout<<a<<" + "<<b<<" i";
	}
	
	friend complex sumcomplex(complex o1,complex o2);
	friend complex difcomplex(complex o1,complex o2);
};

complex sumcomplex(complex o1,complex o2)
{
	complex o3;
	o3.setno((o1.a + o2.a),(o1.b + o2.b));
	return o3;
}

complex difcomplex(complex o1,complex o2)
{
	complex o3;
	o3.setno((o2.a - o1.a),(o2.b - o1.b));
	return o3;
}


int main()
{
	complex c1,c2,sum,dif;
	c1.setno(2,5);
	c2.setno(4,6);
	c1.getno();
	cout<<endl;
	c2.getno();
	sum = sumcomplex(c1,c2);
	dif = difcomplex(c1,c2);
	cout<<endl<<"\nSUM : "<<endl;
	sum.getno();
	cout<<endl<<"\nDIFFERENCE : "<<endl;
	dif.getno();
	
	return 0; 
}
	
