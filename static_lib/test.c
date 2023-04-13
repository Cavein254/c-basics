#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("in reverse wtf %s \n", str);
}

void add(char *num1, char *num2, char *result) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int carry = 0, sum = 0;
    int i, j;

    // Reverse both strings to start from the rightmost digit
    reverse(num1);
    reverse(num2);

    // Add each digit and carry
    for (i = 0, j = 0; i < len1 || j < len2 || carry; i++, j++) {
        int digit1 = (i < len1) ? num1[i] - '0' : 0;
        int digit2 = (j < len2) ? num2[j] - '0' : 0;
        sum = digit1 + digit2 + carry;
        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    // Reverse the result string to get the final answer
    reverse(result);
}

int main() {
    char num1[MAX_LENGTH], num2[MAX_LENGTH], result[MAX_LENGTH];
    printf("Enter the first number: ");
    scanf("%s", num1);
    printf("Enter the second number: ");
    scanf("%s", num2);
    add(num1, num2, result);
    printf("Sum: %s\n", result);
    return 0;
}
