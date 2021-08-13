//Let's say Neha is a girl, who can only go out in Odd days and if she has some pocketmoney amount.... So, WAP that when she can go out in a moneth of 30 days if at day one she gets 3000 pocketmoney and spands 300 at each time she goes outside...;
#include<bits/stdc++.h>
using namespace std;
int main(){
  int pocketmoney=3000;
for(int day=1;day<=30;day++){
    if(day%2==0){
        continue;
    }
    if(pocketmoney==0){
        break;
    }
        cout<<"Neha can go Out..."<<endl;
        pocketmoney=pocketmoney-300;
}
}