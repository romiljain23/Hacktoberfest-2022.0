/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool perfect(int n){
    int temp,sum=0;
    temp=n;
    for(int i=1;i<temp;i++){
        if(n%i==0){
            sum=sum+i;
            cout<<sum<<" ";
        }
    }
    return sum==n;
}
int main()
{
    int n=28;
    if(perfect(n)){
        cout<<"Number is Perfect"<<endl;
    }
    else{
        cout<<"Not Perfect"<<endl;
    }
    
    return 0;
}
