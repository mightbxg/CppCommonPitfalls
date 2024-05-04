# CppCommonPitfalls
利用编译警告规避常见错误

C++ 中有许多一不小心就容易犯的小错误，比如将负整数赋值给无符号整数、函数忘记写 return 等，这些错误很多在出问题时很难排查。好在通过添加编译警告选项，能让编译器帮我们排查那些最常见的问题，这里给出比较实用的一些编译警告选项：
```
-Wconversion;-Wsign-conversion;-Wunused;-Wshadow;-Wreturn-type;-Wsign-compare;-Wimplicit-fallthrough;
```

`-Wconversion;-Wsign-conversion;` 检查类型隐式转换问题，比如 double 转 float 导致精度损失、负整数转无符号整数变成非常大的正整数、64位整数转32位整数被截断等问题。

`-Wunused;` 检查未使用的变量，因为定义了的变量正常情况都应该被使用，防止有的变量被忘记使用。

`-Wshadow;` 检查被遮蔽的变量

`-Wreturn-type;` 检查返回值不是 void 但缺少返回语句的函数 (这样的函数在被调用时可能导致程序崩溃)

`-Wsign-compare;` 检查无符号类型与有符号类型的比较，这类问题特别容易被想当然地忽略，导致计算结果与预期不符

`-Wimplicit-fallthrough;` 检查隐式 fallthrough，防止 switch 语句忘记写 break
