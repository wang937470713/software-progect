//��Ȩ��������
//��ɰ汾��������
//���ߣ������
//

#pragma once
#include<iostream>
using namespace std;

//�� FenShu��������
//���ܣ�ʵ�ַ�����Լ��
//ʵ�ַ�����
//�ҵ����ӷ�ĸ����С��Լ��������֮�����ʵ�ַ�����Լ�֡�
//���ܣ�ʵ�ַ����ļӼ���
//ʵ�ַ�����
//����ĸ��ͬ����ֱ����Ӽ�
//����ĸ��ͬ������������Ӽ�
//���ܣ�ʵ�ַ����ıȽϣ�
//ʵ�ַ�����
//ת��Ϊ���������бȽ�



class FenShu
{
public:
	FenShu(int i = 1, int j = 1);
	~FenShu(void);
	FenShu operator +(Fenshu &b);//������
	FenShu operator -(Fenshu &b);//������
	FenShu operator *(Fenshu &b);//������



	friend ostream & operator <<(ostream &, FenShu &);//>>����
	friend istream & operator >>(istream &, FenShu &);//<<���
	FenShu YueJian();//������Լ��
	//�����ıȽ�
	friend bool operator ==(FenShu &a, FenShu &b);
	friend bool operator !=(FenShu &a, FenShu &b);
	friend bool operator >=(FenShu &a, FenShu &b);
	friend bool operator <=(FenShu &a, FenShu &b);
private:
	int fenzi;//����
	int fenmu;//��ĸ
};
