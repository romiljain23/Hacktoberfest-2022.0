#include<iostream>
using namespace std;
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //first start printing first space triangle
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        // print second triangle
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        //print third triangle
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
}
