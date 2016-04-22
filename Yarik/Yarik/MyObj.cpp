#include "stdafx.h"
#include "MyObj.h"

MyObj::MyObj(double A, double A1, double A2, double A3, double x, double y){
	 m_dA = A;
     m_dA1 = A1;
	 m_dA2 = A2;
     m_dA3 = A3;
     m_dCenterX = x;
     m_dCenterY = y;
}
MyObj::~MyObj(void){
}

void MyObj::Draw(CDC &dc){
dc.MoveTo(m_dCenterX,m_dCenterY); 
dc.LineTo(m_dCenterX,m_dCenterY-m_dA/2+m_dA1); 
dc.MoveTo(m_dCenterX,m_dCenterY-m_dA+m_dA1/2); 
dc.AngleArc(m_dCenterX,m_dCenterY-m_dA/2,m_dA1,90,180); 
dc.MoveTo(m_dCenterX,m_dCenterY-m_dA+m_dA1/2); 
dc.LineTo(m_dCenterX,m_dCenterY-m_dA); 
dc.LineTo(m_dCenterX-m_dA+m_dA2,m_dCenterY-m_dA); 
dc.AngleArc(m_dCenterX-m_dA+m_dA2,m_dCenterY-m_dA+m_dA2,m_dA2,90,90); 
dc.LineTo(m_dCenterX-m_dA,m_dCenterY-m_dA3); 
dc.MoveTo(m_dCenterX-m_dA+m_dA3,m_dCenterY); 
dc.AngleArc(m_dCenterX-m_dA,m_dCenterY,m_dA3,0,90); 
dc.MoveTo(m_dCenterX-m_dA+m_dA3,m_dCenterY); 
dc.LineTo(m_dCenterX,m_dCenterY);
}
