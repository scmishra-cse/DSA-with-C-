#include<iostream>
using namespace std;
 int main(){
 	int num;
 	cout<<"Enter the number(Enter 0 to quit) :";
 	cin>>num;
 	if(num==0)
 	 cout<<"Quit...";
 	else if(num%2==0){
 	cout<<"Even\n";
 	main();
    }
 	else{
 	cout<<"Odd\n";
 	main();
    }
	return 0;
 }
