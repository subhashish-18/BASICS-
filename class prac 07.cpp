#include<iostream>
using namespace std;

class area{
	int length;
	int breadth;
	public :
		area(int l,int b)
		{
			length = l;
			breadth = b;
		}
		int returnarea()
		{
			return length*breadth;
		}
};

int main()
{
	int x,y;
	cout<<"ENTER LENGTH AND BREADTH : " <<endl;
	cin>>x>>y;	
	
	area r1;
	r1 = area(x,y);
	cout<<"AREA : "<<r1.returnarea()<<endl;
	
	return 0;
}
