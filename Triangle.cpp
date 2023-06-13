#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int length):
	m_length(length) {}

void Triangle::drawTriangle()
{
	std::cout << "A right triangle? (y,n)";
	std::string answer = "";
	std::cin >> answer;
	if (answer[0] == 'n')
	{
		drawBottom();
		drawBody();
		drawTop();
	}
	else
		drawRightTriangle();

}

void Triangle::drawTop()
{
	int top = m_length / 2 - 1;
	if (m_length & 1)
		++top;

	for (int i = 0; i < m_length; ++i)
		if (i == top)
			if (m_length & 1)
				std::cout << "**";
			else
				std::cout << "***";
		else
			std::cout << " ";
}

void Triangle::drawBody()
{
	int height = m_length / 2 - 2;

	if (m_length & 1)
		++height;
	for (int j = 0; j < height; ++j)
	{
		for (int i = 0; i < m_length; ++i)
			if (i == j + 1 || i == m_length - (j + 1))
				std::cout << "*";
			else
				std::cout << " ";
		std::cout << "\n";
	}
}

void Triangle::drawBottom()
{
	for (int i = 0; i < m_length + 1; ++i)
		std::cout << "*";

	std::cout << "\n";
}

void Triangle::drawRightTriangle() 
{
	for (int i = 0; i < m_length; ++i)
	{
		for (int j = 0; j < m_length; ++j)
		{
			if (j == 0 || j == i)
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}

	for(int i = 0; i < m_length + 1; ++i)
		std::cout << '*';
}