#include<iostream>
using namespace std;

int main()
{
	int a =10;
	char b = 'e';

	int *ptr1=&a;
	char *ptr2=&b;
	
	cout<<(sizeof(ptr1))<<endl;
	cout<<(sizeof(ptr2))<<endl;

	if((sizeof(ptr1))==(sizeof(ptr2))){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}

	int s1=sizeof(ptr1);
	int s2=sizeof(ptr2);


	if(s1==s2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}

 } 