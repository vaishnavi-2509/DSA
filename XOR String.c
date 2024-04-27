#include <stdio.h>
#include <string.h>

char* strings_xor(const char* s, const char* t) {
    int len = strlen(s);
    char* res = malloc(len + 1); // +1 for null terminator
    if (res == NULL) {
        // Memory allocation failed
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) {
            res[i] = '0';
        } else {
            res[i] = '1';
        }
    }
    res[len] = '\0'; // Null-terminate the string
    return res;
}

int main() {
    char s[100], t[100];
    scanf("%s %s", s, t);
    char* result = strings_xor(s, t);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed\n");
    }
    return 0;
}
