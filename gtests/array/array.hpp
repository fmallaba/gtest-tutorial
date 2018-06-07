#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdint>

class Array {
public:
	Array();
	Array(int32_t len, int32_t val);
	Array(Array const &rhs);
	~Array();
	
	Array	&operator=(Array const &rhs);
	int32_t	operator[](int32_t ind) const;
	int32_t	size() const;

private:
	int32_t *arr_;
	int32_t size_;
};
#endif
