#pragma once

template<typename T>
class Tampl
{
private:
	T x;
public:
	Tampl(const T);
	~Tampl(void);

	//template <typename T>
	T mymin(const T& other);
};





