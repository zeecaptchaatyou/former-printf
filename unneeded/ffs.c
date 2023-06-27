#include "main.h"

int convertBase(const char *num, int toBase) {
    int fromBase;

    if (strncmp(num, "0x", 2) == 0) {
        fromBase = 16;  // Hexadecimal
        num += 2;  // Skip "0x" prefix
    } else if (strncmp(num, "0", 1) == 0) {
        fromBase = 8;  // Octal
        num++;  // Skip leading '0'
    } else if (strncmp(num, "0b", 2) == 0) {
        fromBase = 2;  // Binary
        num += 2;  // Skip "0b" prefix
    } else {
        fromBase = 10;  // Decimal (default)
    }

    if (fromBase < 2 || fromBase > 16 || toBase < 2 || toBase > 16) {
        return -1;  // Unsupported base
    }

    // Convert the number from the original base to decimal
    int decimal = strtol(num, NULL, fromBase);

    // Convert the decimal number to the desired base
    char *result = itoa(decimal, toBase);

    printf("Number in base %d: %s\n", toBase, result);

    int length = strlen(result);
    free(result);

    return length;
}

int main() {
    const char *num = "0x23";  // Hexadecimal number
    int toBase = 10;           // Desired base

    int length = convertBase(num, toBase);
    printf("Length: %d\n", length);

    return 0;
}
