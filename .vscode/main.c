/*
Elijah Kabwe
SWE-350
11/7/26
Milestone 2
*/

#include <stdio.h>

// Decimal to Binary Conversion (For Part 2)
void decimal_to_binary(int num) {
    printf("Binary of %d: ", num);
    int started = 0;
    if (num == 0) {
        printf("0\n");
        return;
    }
    for (int i = 31; i >= 0; i--) {
        int k = (num >> i) & 1;
        if (k == 1) { started = 1; }
        if (started) { printf("%d", k); }
    }
    printf("\n");
}

// Logic Gate Functions (For Part 4)
int and_gate(int a, int b) { return a & b; }
int or_gate(int a, int b) { return a | b; }

int main() {
    printf("=========================================\n");
    printf("  Student: Elijah Kabwe\n");
    printf("  SWE-350 Embedded Realease \n");
    printf("=========================================\n\n");

    // Part 2 Test: Number Conversion
    printf("--- Part 2: Number Conversion ---\n");
    decimal_to_binary(45);

    // Part 4 Test: Logic Gates
    printf("\n--- Part 4: Logic Gates ---\n");
    printf("AND Result (1 & 0): %d vs. Expected: 0\n", and_gate(1, 0));
    printf("OR Result (1 | 0):  %d vs. Expected: 1\n", or_gate(1, 0));

    return 0;
}