#include <iostream>

using namespace std;

int binsearch(int n, int v[], int x) {
	int low, high, mid;
	
	low = 0;
	high = n - 1;
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else  //找到匹配的值
			return mid;
	}
	
	return -1;  //未找到匹配的值
}

int main() {
	int n, x;
	cin >> n;
	int v[n];
	
	binsearch(n, v, x);
	return 0;
}