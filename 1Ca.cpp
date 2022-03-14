#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void start(int& res1, int& res2, int& count1, int& count2) {
    res1 = 1 + rand() % 6;
    res2 = 1 + rand() % 6;
    count1 += res1;
    count2 += res2;
}

void display(int res1, int res2, int count1, int count2) {
    cout << "xuc xac nguoi choi 1: " << res1 << "     " << "Tong nguoi 1: " << count1 << endl;
    cout << "xuc xac nguoi choi 2: " << res2 << "     " << "Tong nguoi 2: " << count2 << endl;
}

int main() {
    srand(time(0));
    int res1 = 0;
    int res2 = 0;
    int count1 = 0;
    int count2 = 0;
    while(count1 < 100 || count2 < 100) {
        start(res1, res2, count1, count2);
        display(res1, res2, count1, count2);
    }
    if(count1 == 100) {
        cout << "Nguoi 1 chien thang" << endl;
    }else if(count2 == 100) {
        cout << "Nguoi 2 chien thang" << endl;
    }else {
        cout << "Khong ai gianh chien thang" << endl;
    }
    return 0;
}