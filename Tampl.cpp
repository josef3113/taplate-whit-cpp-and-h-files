#include "Tampl.h"

template<class T>
Tampl<T>::Tampl(const T first)
{
	this->x=first;
}


template<class T>
Tampl<T>::~Tampl(void)
{
	
}

template<class T>
T Tampl<T>::mymin(const T& other)
{
	return this->x;
}




