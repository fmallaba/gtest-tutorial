#ifndef SQUARE_HPP
# define SQUARE_HPP

# include <cstdint>

class Square {
public:
	Square(void);
	Square(int32_t n);
	Square(Square const &) = default;
	~Square();

	Square	&operator=(Square const &) = default;
	int32_t	getSquare();
private:
	int32_t	num_;
};

#endif
