#pragma once

#include <vector>

template<typename T>
class Array
{
public:
	Array<T>();

	bool isEmpty() { return _container.empty(); }
	size_t size() { return _container.size(); }

private:
	std::vector<T> _container;

};

template<typename T>
Array<T>::Array()
{

}