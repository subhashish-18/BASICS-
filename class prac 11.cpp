#include<iostream>
using namespace std;

class employee{
	int salary,hours;
	public :
		void getinfo()
		{
			cout<<"ENTER YOUR SALARY : " <<endl;
			cin>>salary;
			cout<<"ENTER YOUR HOURS OF WORK PER DAY : " <<endl;
			cin>>hours;
		}
		
		void addsal()
		{
			if(salary<500)
			{
				int new_salary = salary + 10;
				cout<<"NEW SALARY : " <<new_salary;
			}
		}
		
		void addwork()
		{
			if(hours>6)
			{
				int new_salary = salary + 5;
				cout<<"NEW SALARY : " <<new_salary;
			}
		}
		
};


int main()
{
	employee e1,e2,e3;
	e1.getinfo();
	e1.addsal();
	e1.addwork();
	cout<<endl;
	e2.getinfo();
	e2.addsal();
	e2.addwork();
	cout<<endl;
	e3.getinfo();
	e3.addsal();
	e3.addwork();

	
	return 0;
}
