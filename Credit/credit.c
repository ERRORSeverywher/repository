#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <cs50.h>
bool beginDigits(long k, int n, int length) {
    int digit = (n < 10) ? 1 : 2;

    while (length > digit) {
        k /= 10;
        length--;
    }
    return k == n;
}

bool luhnCheck(long long card_number) {
    int sum = 0;
    char card_str[20];
    sprintf(card_str, "%lld", card_number);
    int length = strlen(card_str);
    for (int i = 0; i < length; i++) {
        int digit = card_str[length - i - 1] - '0';
        if (i % 2 == 0) {
            sum += digit;
        } else {
            int doubled = 2 * digit;
            sum += doubled / 10 + doubled % 10;
        }
    }
    return sum % 10 == 0;
}

int main()
{
    long long k=get_long("Number: ");
    int length = 0;
    for (long long temp = k; temp != 0; temp /= 10, length++);

    if (luhnCheck(k)) {
        if (length == 15 && (beginDigits(k, 34, length) || beginDigits(k, 37, length))) {
            printf("AMEX\n");
        } else if (length == 16 && (beginDigits(k, 51, length) || beginDigits(k, 52, length) || beginDigits(k, 53, length) || beginDigits(k, 54, length) || beginDigits(k, 55, length))) {
            printf("MASTERCARD\n");
        } else if ((beginDigits(k, 4, length)) && (length == 13 || length == 16)) {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        }
    } else {
        printf("INVALID\n");
    }
    return 0;
}
