#include <iostream>
using namespace std;
int binarySearch(int* arr, int key, int low, int high) {
	
	while(low <= high) {
		int mid = (low + high) / 2;
		if(arr[mid] == key) return mid;
		if(arr[mid] > key) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
int main() {
	int arr[] = {1, 3, 4, 12, 32, 42, 43, 44, 45, 67};
	int low = 0;
	int high = 9;
	int key;
	cin >> key;
	cout << binarySearch(&arr[0], key, low, high);
	return 0;
}