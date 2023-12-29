#include <iostream>
#include <ranges>

int main() {
  const auto ints = {0, 1, 2, 3, 4, 5};
  const auto even = [](const int i) { return 0 == i % 2; };
  const auto square = [](const int i) { return i * i; };

  for (const int i : ints
       | std::views::filter(even)
       | std::views::transform(square)) {
    std::cout << i << ' ';
  }

  std::cout << std::endl;

  for (const int i : std::views::transform(std::views::filter(ints, even), square)) {
    std::cout << i << ' ';
  }
}
