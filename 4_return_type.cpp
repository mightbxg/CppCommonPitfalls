#include <iostream>

struct MyStruct {
  int val{0};
};

std::ostream &operator<<(std::ostream &os, const MyStruct &s) {
  os << s.val;
  // 这里忘记写 return os;
}

int main() {
  MyStruct s;
  std::cout << s << "\n";
}
