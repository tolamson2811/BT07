#include <iostream>
using namespace std;
char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main() {
	cout << weird_string();
	return 0;
}

/* 
	4A.cpp:4:9: warning: address of local variable 'c' returned [-Wreturn-local-addr]
    char c[] = "123345";
*/