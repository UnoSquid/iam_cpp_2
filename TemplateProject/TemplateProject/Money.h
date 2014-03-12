#ifndef MONEY_H
#define MONEY_H

#include<iostream>

template<class T>
class Money {
public:
	T value;

	Money(T m_in){
		value = m_in;
	}

	//T function();
};

#endif