#include<iostream>
using namespace std;
class youtube{
	
	private:
	  string name;
	  int subscribers;
	public:
		youtube()
		{
		   name="xyz ";
		   subscribers=7896	;
		}
		void getinfo()
		{
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter number of subscribers: "<<endl;
			cin>>subscribers;
			
		}
	friend void operator << (ostream& COUT,youtube &obj) ;
};
void operator << (ostream& COUT,youtube &obj) 
{
	cout<<obj.name;
	cout<<obj.subscribers;
	
}
int main()

{
	youtube yt1;
	cout<<yt1;
//	youtube
}
