#include <iostream>
using namespace std;
int n, x;
int main() {
	int* a = new int[n];
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int lt = 0, rg = n - 1, mid;
	while (rg - lt > 1) {
		mid = (rg + lt) / 2;
		if (a[mid] > x) {		
			rg = mid;
		}
		else if (a[mid] < x) {
			lt = mid;
		}
		else
			break;
	}
	if (a[mid] == x)
		cout << mid + 1 << endl;
	else
		cout << "-1" << endl;
	return 0;
}