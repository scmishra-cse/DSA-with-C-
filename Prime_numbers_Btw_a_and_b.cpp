//print all prime numbers between a to b;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,j;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
         for( j=2;j<i;j++){
             if(i%j==0)
              break;
         }
         if(j==i)
         {
             cout<<i<<"is a prime Number"<<endl;
         }
    }
    return 0;
}
