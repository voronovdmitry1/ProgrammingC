#include <stdio.h>
int main() {
int a, n = 2, flag = 0;
scanf("%d", &a);
while (n < a) {
if (a % n == 0) {
flag = 1;
break;
}
n++;
}
if (flag == 0 && a > 1) {
puts("2");
} else {
puts("0");
}
return 0;
}

