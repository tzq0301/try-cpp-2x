#include <iostream>
#include <type_traits>

void foo(char *);
void foo(int);

int main() {
  if (std::is_same_v<decltype(NULL), decltype(0)>) {
    std::cout << "NULL == 0" << std::endl;
  }


}

void foo(char *) {
  std::cout << "foo(char*) is called" << std::endl;
}

void foo(int) {
  std::cout << "foo(int) is called" << std::endl;
}