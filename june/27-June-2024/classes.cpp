#include <cmath>
#include <cstdlib>
class square {
private:
  double side;

public:
  square(double s) {
    if (s > 0) {
      this->side = s;
    } else {
      this->side = std::abs(s);
    }
  }

  double area() { return this->side * this->side; }
  double perimeter() { return 4 * this->side; }
  double diagonal() { return std::sqrt(2) * this->side; }
  double side_length() { return this->side; }
};

// std::vector v{0, 1, 2};
// square s(10);
