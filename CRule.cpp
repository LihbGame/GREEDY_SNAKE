#include "stdafx.h"
#include "CRule.h"


CRule::CRule()
{
}


CRule::~CRule()
{
}


BOOL CRule::IsOver(CPoint &pt, CArray<CPoint, CPoint> &body)
{
	if (pt.x > 660 || pt.x < 0)
	{
		return TRUE;
	}
	if (pt.y < 30 || pt.y>310)
	{
		return TRUE;
	}
	for (int i = 0; i <= body.GetUpperBound(); i++)
	{
		CPoint point = body.GetAt(i);
		if (point.x == pt.x&&point.y == pt.y)
		{
			return TRUE;
		}
	}
	return FALSE;
}