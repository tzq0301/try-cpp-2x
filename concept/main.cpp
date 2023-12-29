#include <cassert>
#include <concepts>

template<typename>
concept Predicator = std::is_invocable_v<bool()>;

constexpr bool test(Predicator auto&&p) {
  return p();
}

int main() {
  assert(test([] { return true; }));
  assert(test([] { return 1 == 1; }));
  assert(!test([] { return 2 == 1; }));
}
