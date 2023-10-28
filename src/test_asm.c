#include <stdio.h>

int main(void) {
    int x;
    asm("mov eax, ebx \t\n add eax, 3\t\n"
        "int 0x80": "=r" (x));
    return 0;
}
