#include<iostream>
using namespace std;
int main(){
    int num;//9
    cout<<"Enter a number";
    cin >> num;
    int ans=0,pow=1,quo,rem;

    while(num > 0){
        rem=num % 2;
        num=num / 2;
        ans+=(rem*pow);
        pow=pow*10;


    }
    cout<<ans;
    return 0;


}