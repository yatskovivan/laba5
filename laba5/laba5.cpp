//Решить задачу, использую функцию. Дан массив натуральных чисел размерности n. Определить число чисел палиндромов в нем.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
bool prowerka(int a) {
	string num1;
	string num_a;
	num_a = to_string(a);
	num1 = num_a;
	reverse(num_a.begin(), num_a.end());
	if (num_a == num1) {
		return true;
	}
	else {
		return false;
	}
}
int count(const vector<int>& vec) {
	int n = vec.size();
	int counter = 0;
	int a;
	for (int i = 0; i < n; i++) {
		a = vec[i];
		if (prowerka(a)) {
			counter++;
		}
	}
	return counter;
}
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	const int n = atoi(argv[1]);
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		vec.push_back(rand() % (1000000 - 10000 + 1) + 10000);
		int b = vec[i];
		cout << b << " ";
	}
	cout << count(vec);
	return 0;
}