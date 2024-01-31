#include <iostream>
using namespace std;
int main(){
    int a = 5.0/2;
    float b = 9.0/2;
    double c = 11.0/2;
    float d = 11.0/3;
    double e = 11.0/3;
    float f = 11/3;
    double g = 11/3;
    // difference 
    // int/int  = int
    // float/int = float
    // double /int = double

    cout << a<< endl;
    cout << b<< endl;
    cout << c<< endl;
    cout << d<< endl;
    cout << e<< endl;
    cout << f<< endl;
    cout << g<< endl;
cout <<endl;

cout<< "boolean check" <<endl;



int x= 8;
int y = 10;
bool first = (x==y);
cout<< first <<endl;

bool second = (x>y);
cout<< second <<endl;

bool third = (x>=y);
cout<< third <<endl;

bool forth = (x<=y);
cout<< forth <<endl;

bool fifth = (x!=y);
cout<< fifth <<endl;

bool sixth = (x<y);
cout<< sixth <<endl;

    return 0;
}