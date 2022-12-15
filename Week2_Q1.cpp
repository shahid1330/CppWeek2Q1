#include<iostream>
using namespace std;

struct student
{
	string name;
	long id;
	int cgpa;
};

class compute
{
	student s[2];
	public:
		void input()
		{
			for(int i=0;i<2;i++)
			{
				cout<<"STUDENT "<<i+1<<endl;
				cout<<"Enter Name, ID , CGPA : "<<endl;
				getline(cin,s[i].name);
				fflush(stdin);
				cin>>s[i].id>>s[i].cgpa;
				cout<<endl<<endl;
				fflush(stdin);
			}
		}
		void edit()
		{
			input();
			for(int i=0;i<2;i++)
		{
			student *ptr;
			ptr=&s[i];
			cout<<"Update the CGPA of Student "<<i+1<<endl;
			cin>>ptr->cgpa;
		}	
			
		}
		void show()
		{
			edit();
			cout<<endl;
			for(int i=0;i<2;i++)
			{
				cout<<"STUDENT "<<i+1<<endl;
				cout<<"Name :"<<s[i].name<<endl;
				cout<<"ID :"<<s[i].id<<endl;
				cout<<"CGPA :"<<s[i].cgpa<<endl;
				cout<<endl<<endl;
			}
		}
		
};
int main()
{
	compute ob;
	ob.show();
	return 0;
}
