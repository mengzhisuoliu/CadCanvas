//***********************************************
// Copyright 2019-2029
// All rights reserved
// 
// �ļ�����  YJPoint
// ���ߣ�    YiJia
// ʱ�䣺    2020/11/06
// ������    ��
// �޸ļ�¼��
// �޸�ʱ�䣺
//***********************************************
#pragma once

namespace SOUI
{
	class YJPoint
	{
	public:
		YJPoint(){}
		~YJPoint(){}
		YJPoint(double a,double b,double c)
			:x(a),y(-b),z(c)
		{
		}

		YJPoint AddXYZ(double _x,double _y,double _z=0)
		{
			return YJPoint(x+_x,y+_y,z+_z);
		}

		SPoint toSPoint() const
		{
			return SPoint::Make(x,y);
		}
		
		CPoint toPoint() const
		{
			return CPoint(int(x+0.5f),int(y+0.5));
		}
		double x;
		double y;
		double z;
	};

}