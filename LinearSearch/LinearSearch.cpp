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

void LinearSearch() {
	char ch;
	int comparison;

	do {																// Langkah 3

		cout << "\nEnter The Element You Want To Search : ";			// Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++) {										// Langkah 2 & 4

			comparison++;
			if (arr[i] == item) {										// Langkah 5 Found

				cout << "\n" << item << "Found at Position" << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << "Not Found In The Array\n";
		cout << "\nNumber Of Comparison : " << comparison << endl;

		cout << "\nContinue Search (y/n) : ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}