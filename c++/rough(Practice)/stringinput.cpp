#include<bits/stdc++.h>
using namespace std;
int main(){
	string choice;
	double PI = 3.14;

	while (true) {

	std::cout << "Please enter an integer or 'q' to quit" << std::endl;
	cin >> choice;

	if (choice == "q") {
		break;
	}
	else {
		int input = atoi(choice.c_str());     // Converting string to integer

		std::cout << "You have asked to compute the square root of PI " << input << " times:" << std::endl;

		for (int i = 0; i < input; i++) {
			std::cout << (i + 1) << std::endl;
		}

		double calculatePi;
		calculatePi = sqrt(PI);

		std::cout << "The square root of PI is " << setprecision(3) << calculatePi << "." << std::endl;
		}

	}
}
