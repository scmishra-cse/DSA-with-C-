#include<iostream>
using namespace std;

	int maxof(int a,int b,int c){
	if(a>b)
	   { 
	   if(a>c)
	   cout<<a;
	   else 
	   cout<<c;
	   }
    else 
	   {
	   	if(b>c)
	   	 cout<<b;
	   	 else
	   	 cout<<c;
	   }
}

int main(){
	int a, b, c;
	cin>>a>>b>>c;
    maxof(a,b,c);
	return 0;
}
