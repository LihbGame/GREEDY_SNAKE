#pragma once
class CRule
{
public:
	CRule();
	~CRule();
public:
	BOOL IsOver(CPoint &pt,CArray<CPoint,CPoint> &body);//判断当前点是否为游戏结束
};

