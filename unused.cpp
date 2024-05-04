#include <iostream>

static double get_std() { return 1.0; }

void foo() {
    double std = get_std();
    double std_dev = 10;
    // ...
    double variance = std_dev * std_dev; // 这里本来想用 std, 但错误地使用了 std_dev, 编译器会报 std 未使用的警告
    std::cout << variance << "\n";
}

int main() {
    foo();
}