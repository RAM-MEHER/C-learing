#include<iostream>

using namespace std;

int main(){
    int i , j  , n;
    cout<<"Enter the no. of Rows you want\n";
    cin>>n;
    for(i = 1 ; i < n ; i++){
        for(j = 1 ; j <= n-i+1 ; j++){
            if(i >= n) break;
            cout<<"* ";
        }
        cout<<endl;
    }
   
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}