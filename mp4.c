#include <stdio.h>

float calculate(float a, float b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return b != 0 ? a / b : 0;
    return 0;
}

int main() {
    float x, y;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Result: %.2f\n", calculate(x, y, op));
    return 0;
}
