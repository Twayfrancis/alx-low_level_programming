0x10. C - Variadic functions

1. #**0-sum_them_all.c**

The function takes an unsigned integer n as the number of parameters, followed by a variable number of parameters represented by the ellipsis .... The function uses the va_list type to traverse the variable arguments list, and va_start, va_arg, and va_end macros to access each argument and compute their sum. If n is 0, the function returns 0 as requested.
