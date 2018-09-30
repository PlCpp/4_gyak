#include <iostream>

int main() {
	int x = 2;
	int y = 5;
	int* p = &x;
	int& r = x;
	
	std::cout << *p << std::endl;
	std::cout << r << std::endl;
	
	r = 3;
	std::cout << *p << std::endl;
	std::cout << r << std::endl;
	
	r = y; //az az érték változik meg, aminek r az álneve, nem r lesz y álneve
	
	//int& z; //fordítási hiba
	std::cout << sizeof(r) << " - " << sizeof(int) << std::endl;
	
	return 0;
}
