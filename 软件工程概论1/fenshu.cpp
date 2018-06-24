//��Ȩ��������
//��ɰ汾��������
//���ߣ������
//

#include "fenshu.h"


FenShu::FenShu(int i, int j)//���캯������ֵ
{
	fenmu = i;
	fenzi = j;

}


FenShu::~FenShu(void)
{
}
FenShu FenShu::operator +(FenShu &b)//ʵ�ַ��������
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
FenShu::FenShu::operator -(FenShu &b)//ʵ�ַ��������
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
FenShu FenShu::operator *(FenShu &b)//ʵ�ַ��������
{
	FenShu c;
	c.fenmu = this->fenmu*b.fenmu;
	c.fenzi = this->fenzi*b.fenzi;
	return c;

}
istream & operator >>(istream &in, FenShu &b)//����cin����
{
	cout << "����������ķ�ĸ�ͷ��ӣ�";
	in >> b.fenmu >> b.fenzi;
	return in;

}
ostream & operator <<(ostream &out, FenShu &b)//����cout���
{
	out << b.fenzi << "/" << b.fenmu << endl;
	return out;


}
bool::operator ==(FenShu &a, FenShu &b)//�ж����
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c == d)return true;
	else return false;

}





bool operator !=(FenShu &a, FenShu &b)//�жϲ���
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c != d)return true;
	else return false;

}
bool operator >=(FenShu &a, FenShu &b)//�жϴ��ڵ���
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c >= d)return true;
	else return false;

}





bool operator <=(FenShu &a, FenShu &b)//�ж�С�ڵ���
{
	double c, d;
	c = a.fenzi / a.fenmu;
	d = b.fenzi / b.fenmu;
	if (c <= d)return true;
	else return false;

}

FenShu FenShu::YueJian()//������Լ��
{
	FenShu b;
	int i, j;
	int a;
	//�ҳ����ӷ�ĸ�д��һ��
	if (this->fenmu >= this->fenzi)j = this->fenmu;
	else j = this->fenzi;
	//�ҳ���С��Լ��
	for (i = 2; i<j; i++)
	{
		if ((this->fenmu%i == 0) && (this->fenzi%i == 0))
			a = i;
	}
	b.fenmu = this->fenmu / a;
	b.fenzi = this->fenzi / a;
	return b;
}