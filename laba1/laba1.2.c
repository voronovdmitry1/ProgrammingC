#include <stdio.h>
int main() {
float t;
char z;
scanf("%f %c", &t, &z);
if (z == 'c' || z == 'C') {
printf("%.1f F\n", t * 9 / 5 + 32);
} else if (u == 'f' || u == 'F') {
printf("%.1f C\n", (t - 32) * 5 / 9);
} else {
printf("Ошибка\n");
}
return 0;
}
