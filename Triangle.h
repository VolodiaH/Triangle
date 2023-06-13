#pragma once
class Triangle 
{
public:
	Triangle(int length);

public:
	void drawTriangle();

private:
	void drawTop();
	void drawBody();
	void drawBottom();

	void drawRightTriangle();

private:
	int m_length;
};