#include<iostream>
using namespace std;
int main(){

//code for this kind of pattern--->
    /*1111
      222
      333*/
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}