#include <iostream>
using namespace std;

int main() {
  int a = 389;
  cout << "Hello World! ";
  cout<< a <<endl;
  int size = sizeof(a);
  cout<< "Size of a; " << size <<endl;
  int b = 909;
  cout<< b <<endl;
  int sizeofb = sizeof(bad_array_new_length);
  cout<< "Size of  b:" << sizeofb <<endl;

  char c = 'a';
  // we can store only single characters in char like a b c d e f not like ab cd akdi so on.
  cout << c <<endl;
  int sizeofc = sizeof(c);
  cout<< "Size of  c:" << sizeofc <<endl;

  double d = 2.12;
  cout << d <<endl;
  int sizeofd = sizeof(d);
  cout<< "Size of  d:" << sizeofd <<endl;

  float f = 11.9;
  cout << f <<endl;
  
  int sizeoff = sizeof(f);
  cout<< "Size of  f:" << sizeoff <<endl;

  return 0;
}