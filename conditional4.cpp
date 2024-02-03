#include<iostream>
using namespace std;

int main(){
    int a=2;
    int b = a+1;
    if((a=3)==b){
        cout<< "ist if condition " <<a;
    }
    else{
        cout<<a+1;
    }
}