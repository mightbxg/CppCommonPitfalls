#include <iostream>

int dummy(int v) {
  int ret = 0;
  switch (v) {
    case 1:
      ret += 1;
      // 忘写 break;
    case 2:
      ret += 2;
      // 忘写 break;
    default:
      ret += -1;
  }
  return ret;
}

int main() { std::cout << dummy(1); }