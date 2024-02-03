#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter First Number ";
    cin>>a;
    cout << "Enter Second Number ";
    cin>>b;
    // Checking weather fist number is greater than second
    if(a>b){
        cout<<"First number " <<a <<" is greater" <<endl;
    }
    if(a<b){
        cout<<"Second number " <<b <<" is greater" <<endl;
    }
    else{
        cout<<"Both First number " <<a <<" and Second number " <<b <<" are equal." <<endl;
    }
}