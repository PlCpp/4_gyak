#include <iostream>

int main() {
	int n;
	std::cout << "Tomb merete: ";
	std::cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; ++i) {
		array[i] = i * 2;
	}
	
	for (int i = 0; i < n; ++i) {
		std::cout << array[i] << std::endl;
	}
	
	delete[] array;
}
