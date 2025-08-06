#include<iostream>
 
int Multiply(int a, int b) {
	return a * b;
}

int main() {
	int result1 = Multiply(3, 2);
	std::cout << result1 << std::endl;

	int result2 = Multiply(8, 5);
	std::cout << result2 << std::endl;

	int result3 = Multiply(90, 20);
	std::cout << result3 << std::endl;
	std::cin.get();
}
