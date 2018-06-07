#include "array.hpp"

Array::Array() : arr_(new int32_t[0]), size_(0) {}

Array::Array(int32_t len, int val) : arr_(new int32_t[len]), size_(len)
{
	for (int32_t i = 0; i < len; ++i) {
		arr_[i] = val;
	}
}

Array::Array(Array const &rhs) : arr_(new int32_t[rhs.size()]), size_(rhs.size())
{
	for (int32_t i = 0; i < size_; ++i) {
		arr_[i] = rhs[i];
	}
}

Array::~Array() { delete [] arr_; }

Array	&Array::operator=(Array const &rhs){
	if (this != &rhs) {
		delete [] arr_;
		size_ = rhs.size();
		arr_ = new int32_t[size_];
		for (int32_t i = 0; i < size_; ++i) {
			arr_[i] = rhs[i];
		}
	}
	return (*this);
}

int32_t	Array::size() const { return (size_); }

int32_t	Array::operator[](int32_t ind) const

{
	return (arr_[ind]);
} 
