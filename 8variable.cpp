#include<iostream>

int main() {
	int variable = 8;
	unsigned int variable1 = 10;
	// char 1 ; short 2 ; int 4; long 4(depend on 编译器）; long long 8 (depend on 编译器）;
	char a = 50;
	char A = 'A';//65
	std::cout << a << std::endl;
	std::cout << A << std::endl;
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	//float 4;double 8;
	float var1 = 5.5f;
	double var2 = 5.2;
	std::cout << var1 << std::endl;
	std::cout << var2 << std::endl;
	//bool means boolean;
	// 0 意味着假，别的数全是真
	bool var3 = true;
	bool var4 = false;
	std::cout << var3 << std::endl;
	std::cout << var4 << std::endl;
	std::cin.get();
}
