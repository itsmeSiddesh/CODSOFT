#include<iostream>
using namespace std;
int main()
{
	char operation;
	while(1)
	{
		float a,b;
		cout<<"Enter first number: "<<" ";
	    cin>>a;
	    cout<<"Enter second number: "<<" ";
	    cin>>b;
	    cout<<"Enter operation which you want to do "<<" ";
	    cin>>operation;
	    switch(operation)
	    {
	 	    case '*':cout<<"Product of "<<a<<" * "<<b<<" is "<<a*b<<endl;
		         break;
	        case '/':cout<<"Division of "<<a<<" / "<<b<<" is "<<a/b<<endl;
		         break;
		    case '+':cout<<"Addition of "<<a<<" + "<<b<<" is "<<a+b<<endl;
		         break; 
		    case '-':cout<<"Subtraction of "<<a<<" - "<<b<<" is "<<a-b<<endl;
		         break;	
		    default:cout<<"Entered choice is wrong"<<endl;
			     return 0;	         
  	    }
	}
	cout<<endl;
}
