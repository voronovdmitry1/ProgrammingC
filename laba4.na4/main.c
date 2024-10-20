#include <stdio.h>
void bin(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}
unsigned int vpravo(unsigned int a, unsigned int k) {
    unsigned int bits = sizeof(a) * 8;
    k = k % bits;
    return (a >> k) | (a << (bits - k));
}

int main() {
    unsigned int a, k;
    printf("Введите число: ");
    scanf("%u", &a);
    printf("Введите количество сдвигов: ");
    scanf("%u", &k);
    unsigned int result = vpravo(a, k);
    printf("Сдвиг: ");
    bin(result);

    return 0;
}
