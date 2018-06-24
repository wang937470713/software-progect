//版权：？？？
//许可版本：？？？
//作者：王嘉璇
//

#include "fenshu.h"


FenShu::FenShu(int i, int j)//构造函数赋初值
{
	fenmu = i;
	fenzi = j;

}


FenShu::~FenShu(void)
{
}
FenShu FenShu::operator +(FenShu &b)//实现分数的相加
{
	FenShu c;
	if (this->fenmu == b.fenmu)
	{
		c.fenmu = this->fenmu;
		c.fenzi = this->fenzi + b.fenzi;
	}
	else
	{
		c.fenmu = this->fenmu*b.fenmu;
		c.fenzi = this->fenzi*b.fenmu + b.fenzi*this->fenmu;
	}
	return c;
}
FenShu::FenShu::operator -(FenShu &b)//实现分数的相减
{
	FenShu c;
	if (this->fenmu == b.fenmu)
	{
		c.fenmu = this->fenmu;
		c.fenzi = this->fenzi - b.fenzi;
	}
	else
	{
		c.fenmu = this->fenmu*b.fenmu;
		c.fenzi = this->fenzi*b.fenmu - b.fenzi*this->fenmu;
	}
	return c;


}
FenShu FenShu::operator *(FenShu &b)//实现分数的相乘
{
	FenShu c;
	c.fenmu = this->fenmu*b.fenmu;
	c.fenzi = this->fenzi*b.fenzi;
	return c;

}
istream & operator >>(istream &in, FenShu &b)//增加cin输入
{
	cout << "请输入分数的分母和分子：";
	in >> b.fenmu >> b.fenzi;
	return in;

}
ostream & operator <<(ostream &out, FenShu &b)//增加cout输出
{
	out << b.fenzi << "/" << b.fenmu << endl;
	return out;


}
bool::operator ==(FenShu &a, FenShu &b)//判断相等
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c == d)return true;
	else return false;

}





bool operator !=(FenShu &a, FenShu &b)//判断不等
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c != d)return true;
	else return false;

}
bool operator >=(FenShu &a, FenShu &b)//判断大于等于
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c >= d)return true;
	else return false;

}





bool operator <=(FenShu &a, FenShu &b)//判断小于等于
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c <= d)return true;
	else return false;

}

FenShu FenShu::YueJian()//分数的约分
{
	FenShu b;
	int i, j;
	int a;
	//找出分子分母中大的一项
	if (this->fenmu >= this->fenzi)j = this->fenmu;
	else j = this->fenzi;
	//找出最小公约数
	for (i = 2; i<j; i++)
	{
		if ((this->fenmu%i == 0) && (this->fenzi%i == 0))
			a = i;
	}
	b.fenmu = this->fenmu / a;
	b.fenzi = this->fenzi / a;
	return b;
}