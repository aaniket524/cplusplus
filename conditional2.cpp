#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter Number ";
    cin>>a;
    // Checking weather number is +ve
    if(a>0){
        cout<<"Number " <<a <<" is +ve" <<endl;
    }
    if(a==0){
        cout<<"Number " <<" is zero" <<endl;
    }
    else{
        cout<<"Number " <<a <<" is -ve" <<endl;
    }
}