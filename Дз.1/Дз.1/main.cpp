#include <iostream>

const double PI = 3.1416;

int main() {
	int n;
	double x;
	double sum = 0;
	double predsum = 0;
	bool error = false;

	std::cout << "Input x: ";
	std::cin >> x;
	while ((!std::cin) || (x == 0)) {
		std::cout << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Input x: ";
		std::cin >> x;
		std::cout << std::endl;
	}

	std::cout << "Input n: ";
	std::cin >> n;
	while ((!std::cin)) {
		std::cout << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Input n: ";
		std::cin >> n;
		std::cout << std::endl;
	}

	for (int i = 1; i <= n; i++) {
		predsum = x * x - i * i * PI * PI;
		if (predsum == 0) {
			std::cout << "You got 0 in denominator" << std::endl;
			error = true;
			break;
		}
		else
		sum = sum + ((2 * x) / predsum);
	}

	if (error == true)
		std::cout << "Calculation was canceled, because of 0 in denominator" << std::endl;
	else {
		sum = sum * x;
		sum = 1 / x + sum;
		std::cout << sum;
	}
	return 0;
}