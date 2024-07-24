#include<iostream>

using namespace std;

int main(){
    int i , j , n , s , k , g;
    cout<<"Enter the Rows you need\n";
    cin>>n;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n-i+1 ; j++){
            if(j == n) break;
            cout<<"* ";
        }
       
      if(i > 2){
        for(s = 1 ; s <= i-2 ; s++){
            cout<<"  ";
        }
      }
       for(g = 1 ; g < i ; g++){
        cout<<"  ";
       }
        
         for(k = 1 ; k <= n-i+1 ; k++){
            cout<<"* ";
         }
         cout<<endl;
            }
    return 0;
}