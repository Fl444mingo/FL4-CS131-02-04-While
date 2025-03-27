#include <iostream>
#include <string>
using namespace std;
int main() {
	int counter, temp;
	string wordToSay;
	cout << "Enter the word you would like to say: ";
	cin >> wordToSay;
	cout << "Enter how many times you would like to say " << wordToSay << ": ";
	cin >> counter;
	// While the condition is true, do everything in the code block.
	// Test at the top.
	temp = counter;
	while (counter > 0) {
		cout << wordToSay << " ";
		// cout << "counter = " << counter << " ";
		counter -= 1;
	}
	cout << "\n";
	// "do-while" loop. do everything in the block, while the condition is true.
	// Test at the bottom.
	// First, reset the counter using temp/savestate variable
	counter = temp;
	do {
		cout << wordToSay << " ";
		// cout << "counter = " << counter << " ";
		counter -= 1;
	} while (counter > 0);
	cout << "\n";
	system("pause");
	return 0;
}