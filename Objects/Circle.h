//***********************************************
// Copyright 2019-2029
// All rights reserved
// 
// �ļ�����  Circle
// ���ߣ�    YiJia
// ʱ�䣺    2020/11/16
// ������    
// �޸ļ�¼��
// �޸�ʱ�䣺
//***********************************************
#pragma once
#include "CadObj.h"

namespace SOUI
{

	class CCircle : public CCadObj
	{
	public:
		CCircle(void);
		CCircle(SPoint pt1,double radious);
		~CCircle(void);
		static LPCWSTR GetClassName() {return L"circle";}
	public:
		virtual bool SetAttribute(SStringW strName,SStringW strValue);

	protected:
		virtual void OnDraw(IRenderTarget *pRT);

		virtual bool HitTest(CPoint pt) const;

		virtual void OnContentChanged();
		virtual bool IsRectangle() const {return true;}
	private:
		SPoint m_ptCenter;
		double m_radious;
	};

}