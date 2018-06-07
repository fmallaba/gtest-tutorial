#include "square.hpp"

Square::Square(void) : num_(0) {}

Square::Square(int32_t n) : num_(n) {}

Square::~Square() {}

int32_t	Square::getSquare() { return (num_ * num_); }
