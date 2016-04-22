#pragma once
class MyObj
{
public:
	MyObj(double A, double A1, double A2, double A3, double x, double y);
	~MyObj(void);public:	void Draw(CDC &dc);protected:
	double m_dA;
    double m_dA1;
	double m_dA2;
    double m_dA3;
    double m_dCenterX;
    double m_dCenterY;
};

