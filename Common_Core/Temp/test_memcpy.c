#include <stdio.h>
#include <string.h>

void *my_memcpy(void *dest, const void *src, size_t n) {
    char *dst_ptr = dest;
    const char *src_ptr = src;

    while (n-- > 0) {
        *dst_ptr++ = *src_ptr++;
    }

    return dest;
}

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    // Using my_memcpy
    my_memcpy(dest, src, strlen(src) + 1);
    printf("my_memcpy: %s\n", dest);

    // Using memcpy for comparison
    memcpy(dest, src, strlen(src) + 1);
    printf("memcpy: %s\n", dest);

    return 0;
}