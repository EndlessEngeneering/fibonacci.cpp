#pragma once

int fibonacci(int fib_num) {
    if (fib_num <= 0) return 0;

    int a = 0;
    int b = 1;

    for (int i = 0; i < fib_num; i++) {
        int next = a + b;
        a = b;
        b = next;
    }

    return a;
}

