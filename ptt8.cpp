#include<iostream>
using namespace std;
 int main(){
    int n;
    cout <<"Enter a number pleasee"<< endl;
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout <<j<<" ";
        }
        cout << endl;
    }
    return 0;
 }