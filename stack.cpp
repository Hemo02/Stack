#include <iostream>
#include <stack>
using namespace std;

int main() {
	//empty , push , pop  ;
	stack<int>numbaresstack;
	numbaresstack.push(12);
	numbaresstack.push(45);
	numbaresstack.push(17);
	numbaresstack.push(44);
	numbaresstack.push(90);
	numbaresstack.pop();
	numbaresstack.pop();
	numbaresstack.pop();
	numbaresstack.pop();
	numbaresstack.pop();

	if (numbaresstack.empty()) {
		cout << "stack is empty " << endl;

	}
	else {
		cout << "stack is not empty " << endl;
		cout << "stack size is " << numbaresstack.size() << endl;
		
	}

	system("pause>0");

	return 0;
}