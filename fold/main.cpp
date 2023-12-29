#include <iostream>

template<typename ...T>
auto average(T ...t) {
  return (t + ...) / sizeof...(t);
}

int main() {
  std::cout << average(1, 2, 3) << std::endl;
  std::cout << average(1, 2, 4.0) << std::endl;
}