#include "myint.hpp"

bool MyInt::isOdd() {
    return (num_ % 2) != 0;
}

bool MyInt::isEven() {
    return (num_ % 2) == 0;
}
