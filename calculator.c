#include <stdio.h>

int main() {
    int a, b;
    char op;

    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        return 1;
    }

    if (op == '+') {
        printf("%d\n", a + b);
    }
    else if (op == '-') {
        printf("%d\n", a - b);
    }
    else if (op == '*') {
        printf("%d\n", a * b);
    }
    else if (op == '/') {
        printf("%d\n", a / b);
    }

    return 0;
}
