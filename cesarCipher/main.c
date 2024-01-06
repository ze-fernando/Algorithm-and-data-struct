#include <stdio.h>
#include <string.h>

char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char* encrypt(char* text, int key) {
    int len = strlen(text);
    char* result = malloc(len + 1);

    for (int i = 0; i < len; i++) {
        char letter = tolower(text[i]);
        if (isalpha(letter)) {
            int index = letter - 'a';
            int encryptedIndex = (index + key) % 26;
            result[i] = alphabet[encryptedIndex];
        } else {
            result[i] = letter;
        }
    }
    
    result[len] = '\0';
    return result;
}

char* decrypt(char* encryptedText, int key) {
    int len = strlen(encryptedText);
    char* result = malloc(len + 1);

    for (int i = 0; i < len; i++) {
        char letter = tolower(encryptedText[i]);
        if (isalpha(letter)) {
            int index = letter - 'a';
            int decryptedIndex = (index - key + 26) % 26;
            result[i] = alphabet[decryptedIndex];
        } else {
            result[i] = letter;
        }
    }

    result[len] = '\0';
    return result;
}

int main() {
    char text[] = "dudaElinda";
    int key = 10;

    char* encrypted = encrypt(text, key);
    char* decrypted = decrypt(encrypted, key);

    printf("\nOriginal: %s\n", text);
    printf("\nEncrypted: %s\n", encrypted);
    printf("\nDecrypted: %s\n", decrypted);

    free(encrypted);
    free(decrypted);

    return 0;
}