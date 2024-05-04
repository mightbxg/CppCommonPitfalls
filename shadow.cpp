double get_optimal_y() { return 1.0; }

void set_position(double, double) {}

void set_params(double x, double y) {
    // ...
    if (x < 0.0) {
        double y = get_optimal_y(); // 这里局部变量 y 遮蔽了函数实参 y，导致函数参数 y 失效
        set_position(x, y);
    }
    // ...
}

int main() {
    set_params(1.0, 2.0);
}
