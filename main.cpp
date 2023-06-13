#include <iostream>

#include "Triangle.h"

int main() 
{
	//you asked about it
	std::cout << "I love C++\n";

	constexpr int lowBoundary = 5;
	constexpr int highBoundary = 53;
	constexpr int maxWrongCount = 3;

	int wrongEnterCount = 0;

	while (true)
	{
		std::cout << "\nLength of triangle(5-53): ";

		int length = 5;
		std::cin >> length;
		if (lowBoundary <= length && length <= highBoundary)
		{
			Triangle tr(length);
			tr.drawTriangle();

			wrongEnterCount = 0;
		}
		else
		{
			++wrongEnterCount;
			if (wrongEnterCount == maxWrongCount)
			{
				std::cout << "Not today!";
				return -1;
			}
			
			if (!std::cin.good())
			{
				std::cout << "NUMBERS PLEASE!";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
				std::cout << "I know.... It is ver hard - but try again";
			
			continue;
		}
		
		std::cout << "\nDraw again?(y,n)";
		std::string answer = "";
		std::cin >> answer;

		switch (answer[0])
		{
		case 'y':
			break;
		case 'n':
			std::cout << "Bye!";
			return 0;
		default:
			std::cout << "I will take it for NO";
			return 0;
			break;
		}

	}
	return 0;
}
