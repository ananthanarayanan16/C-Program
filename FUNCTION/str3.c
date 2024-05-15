 #include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string for strstr example";
    char substr[] = "sample";

    // Find the first occurrence of substr in str
    char *result = strstr(str, substr);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}