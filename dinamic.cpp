#include <iostream>

int main() {
	int* p = new int(5);
	std::cout << p << " : " << *p << std::endl;
	*p = 3;
	std::cout << p << " : " << *p << std::endl;
	
	delete p;	
}
