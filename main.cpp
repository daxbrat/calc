#include <iostream>

double get_val()
{
	std::cout << "Enter a double value: ";
	double num{};
	std::cin >> num;
	return num;
}

char get_sign()
{
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char sign{};
	std::cin >> sign;
	return sign;
}

void calc(double val1, double val2, char sign)
{
	switch (sign)
	{
	case '+':
		std::cout << val1 << " " << sign << " " << val2 << " is " << val1 + val2;
		break;
	case '-':
		std::cout << val1 << " " << sign << " " << val2 << " is " << val1 - val2;
		break;
	case '*':
		std::cout << val1 << " " << sign << " " << val2 << " is " << val1 * val2;
		break;
	case '/':
		std::cout << val1 << " " << sign << " " << val2 << " is " << val1 / val2;
		break;
	default:
		std::cout << "";
	}
}

int main()
{
	
	double val1{ get_val() };
	double val2{ get_val() };

	char sign{ get_sign()};

	calc(val1, val2, sign);

	return 0;
}
