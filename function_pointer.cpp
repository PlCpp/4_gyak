#include <iostream>

double sum(double (*a) (int), int n) {
	double sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += a(i);
	} 
	
	return sum;
}

double sum_ref(double a(int), int n) {
	double sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += a(i);
	} 
	
	return sum;
}

double sqr(int x) {
	return x * x;
}

/*inline double srq_2(int x) {
	return x * x;
}*/

inline double sum_inline(double a(int), int n) {
	return 0;
}

int main() {
	std::cout << sum(sqr, 5) << std::endl;
	std::cout << sum_ref(sqr, 5) << std::endl;
	//std::cout << sum_ref(sqr_2, 5) << std::endl;
	sum_inline(sqr, 5);
	return 0;
}
