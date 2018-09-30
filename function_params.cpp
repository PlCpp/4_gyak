#include <iostream>

void f(int i) {}
void g(int& r) {  }
void h(const int& i) { std::cout << "h: " << i << std::endl; }

int main() {
	
	int x = 4;
	g(x);
	//g(2); // fordítási hiba
	
	//g(x + 3); //fordítási hiba
	
	//g(x++); //fordítási hiba
	g(++x);
	
	int a = 3;
	
	h(a);
	h(a + 4);
	std::cout << a << std::endl;
	h(5);
	h(a++);
	h(++a);
	
	
	return 0;
}
