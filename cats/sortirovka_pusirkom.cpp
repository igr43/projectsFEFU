#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> lst = { 5, 45, 10, 1, 5, 34, 3, 2 };
	for (int i = 0; i < lst.size() -1  ; i++) {
		for (int j = 0; j < lst.size() - 1 - i; j++) {
			if (lst[j] > lst[j + 1]) {  // если поменять на <, то будет по убыванию
				swap(lst[j], lst[j + 1]);
			}
		}
 	}
	for (int i = 0; i < lst.size(); i++) {
		cout << lst[i] << " ";
	}
	return 0;
}