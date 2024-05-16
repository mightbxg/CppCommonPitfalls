#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  std::cout << std::fixed << std::setprecision(15);

  double a1 = 3.141592653589793;
  float a2 = a1;  // double转float导致精度损失
  std::cout << "double->float: " << a1 << " vs " << a2 << "\n";

  int b1 = -4;
  unsigned long b2 = b1;  // 负整数转无符号整数变成非常大的正整数
  std::cout << "signed->unsigned: " << b1 << " vs " << b2 << "\n";

  std::vector<bool> vec((1ll << 33) + 1);
  for (int i = vec.size(); i > 0; --i) {  // 64位整数转32位整数被截断
    std::cout << "uint64->int32: " << vec.size() << " vs " << i << "\n";
  }
}
