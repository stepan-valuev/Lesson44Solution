#include "util.h"
#include "logic.h"

int main() {
	int* vector;
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	vector = new int[size];

	init(vector, size, -20, 50);
	cout << "Vector: " << convert(vector, size) << endl;
		 
	cout << "Sum of even elements in odd position is: "
		<< sum_event_elements(vector, size) << endl;

	delete[] vector;
	return 0;
}