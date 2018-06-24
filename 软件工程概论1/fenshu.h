//版权：？？？
//许可版本：？？？
//作者：王嘉璇
//

#pragma once
#include<iostream>
using namespace std;

//类 FenShu（分数）
//功能：实现分数的约分
//实现方法：
//找到分子分母的最小公约数，在与之相除，实现分数的约分。
//功能：实现分数的加减乘
//实现方法：
//若分母相同，则直接相加减
//若分母不同，则进行运算后加减
//功能：实现分数的比较：
//实现方法：
//转化为浮点数进行比较



class FenShu
{
public:
	FenShu(int i = 1, int j = 1);
	~FenShu(void);
	FenShu operator +(Fenshu &b);//分数加
	FenShu operator -(Fenshu &b);//分数减
	FenShu operator *(Fenshu &b);//分数乘



	friend ostream & operator <<(ostream &, FenShu &);//>>输入
	friend istream & operator >>(istream &, FenShu &);//<<输出
	FenShu YueJian();//分数的约分
	//分数的比较
	friend bool operator ==(FenShu &a, FenShu &b);
	friend bool operator !=(FenShu &a, FenShu &b);
	friend bool operator >=(FenShu &a, FenShu &b);
	friend bool operator <=(FenShu &a, FenShu &b);
private:
	int fenzi;//分子
	int fenmu;//分母
};
