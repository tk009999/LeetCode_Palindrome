// LeetCode_Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cmath> 
using namespace std;

bool myFunction(std::string s, int length) {
	// code to be executed		

	bool status = length >= 0;

	if (length % 2 == 0) {
		for (size_t i = 0; i < length; i++) {

			std::cout << "i: " << i << "\n";

			int x = length - (i + 1);
			std::cout << "x: " << x << "\n";

			status = s[i] == s[x];

			if (!status) {
				break;
			}
		}
	}

	if (length % 2 == 1) {

		int mid = round(length / 2.0) - 1;
		std::cout << "mid: " << mid << "\n";

		for (size_t i = 0; i < length; i++) {

			std::cout << "i: " << i << "\n";

			if (i == mid) {
				continue;
			}

			int x = length - (i + 1);
			std::cout << "x: " << x << "\n";

			status = s[i] == s[x];

			if (!status) {
				break;
			}
		}
	}

	return status;
}

bool isPalindrome(int integer) {
	std::string ss = to_string(integer);
	int length = ss.length();
	bool status = myFunction(ss, length);
	return status;
}

int main()
{
	std::cout << isPalindrome(1221);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
