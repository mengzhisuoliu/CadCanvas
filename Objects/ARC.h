//***********************************************
// Copyright 2019-2029
// All rights reserved
// 
// �ļ�����  ARC
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

	class CArc : public CCadObj
	{
	public:
		CArc(void);

		/**
		* ����      Բ����ע�⹹�캯���ж��ڵ㼰�Ƕȵ�ת��
		* 
		* ����      YJPoint pt1
		* ����      double radious
		* ����      float startAngle		//��ʼ�Ƕ�
		* ����      float sweepAngle		//��ֹ�Ƕ�
		* ����      bool useCenter
		* ����ֵ    
		*/
		CArc(SPoint pt1,double radious,float startAngle,float sweepAngle,bool useCenter);
		~CArc(void);
		static LPCWSTR GetClassName() {return L"arc";}
	public:
		virtual bool SetAttribute(SStringW strName,SStringW strValue);

	protected:
		virtual void OnDraw(IRenderTarget *pRT);

		virtual bool HitTest(CPoint pt) const;

		virtual void OnContentChanged();

		//todo:hjx
		virtual bool IsRectangle() const {return true;}
	private:
		CPoint m_pt1;
	private:
		SPoint m_ptCenter;
		double m_radious;
		double m_startAng;
		double m_endAng;
		bool m_useCenter;
	};

}