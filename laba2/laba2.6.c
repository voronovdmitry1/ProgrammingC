#include <stdio.h>
int main() {
int a, s = 0;
scanf("%d", &a);
for (int n = 2; n < a; n++) {
if (a % n == 0) {
s = 1;
break;
}
}
if (s == 0 && a > 1) {
puts("2");
} else {
puts("0");
}
return 0;
}

