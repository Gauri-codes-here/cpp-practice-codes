#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin >> num;
    int ans=0,pow=1,quo,rem;

    while(num > 0){
        rem=num % 10;
        ans+=rem*pow;
        num=num / 10;
        
        pow=pow*2;


    }
    cout<<ans;
    return 0;


}