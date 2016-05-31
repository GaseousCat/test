#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand (time(0));
	int i, a, b, diff, N;
	float avg; 
	vector<int> arr;
	cout << "Enter the size range: ";
	cin >> N;
	for (i = 0; i < N; i++)
		arr.insert(arr.end(), rand());
	for (i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (i = N - 1; i >= 0; i--) 
		for (int j = 0; j < i; j++) {
			a=arr[j];
			b = arr[j+1];
			avg = (a+b)/2.0;
			diff = abs(a-b);
			arr[j] = avg - diff / 2.0; 
			arr[j+1] = avg + diff / 2.0; 
		}
	for (i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
