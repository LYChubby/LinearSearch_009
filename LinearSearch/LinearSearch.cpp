#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {

	while (true) {

		cout << "Enter The Number of Element In The Array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nEelement Array Should Have Minimum 1 and Maximum 20 Elements.\n\n";
	}
	
	cout << "\n--------------------\n";
	cout << "Enter Array Elements \n";
	cout << "-------------------- \n";

	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}