#include <iostream>
#include <vector>

void foo(const std::vector<int>& vec, int n) {
  for (int i = n; i > vec.size(); i -= 2) {  // i为负数将陷入死循环
    std::cout << i << "\n";
  }
}

int main() {
  int a = -4;
  unsigned b = 100;
  std::cout << std::boolalpha << (a > b)
            << "\n";  // 输出true，因为a会被看做成无符号整数与b进行比较

  std::vector<int> vec;
  // foo(vec, 9);
}