#include <iostream>
using namespace std;
void f1(int a[10]) {
	cout << sizeof(a) / sizeof(int) << endl;
}
void f2(int a[]) {
	cout << sizeof(a) / sizeof(int) << endl;
}
int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << sizeof(a) / sizeof(int) << endl;
	f1(a);
	f2(a);
	return 0;
}	

/* 
In ra:
A.cpp: In function 'void f1(int*)':
A.cpp:4:18: warning: 'sizeof' on array function parameter 'a' will return size of 'int*' [-Wsizeof-array-argument]
  cout << sizeof(a) / sizeof(int) << endl;
                  ^
A.cpp:3:13: note: declared here
 void f1(int a[10]) {
        
A.cpp: In function 'void f2(int*)':
A.cpp:7:18: warning: 'sizeof' on array function parameter 'a' will return size of 'int*' [-Wsizeof-array-argument]
  cout << sizeof(a) / sizeof(int) << endl;
                  ^
A.cpp:6:13: note: declared here
 void f2(int a[]) {
        
10
1
1
*/