from cs50 import get_string

def begin_digits(k, n, length):
    digit = 1 if n < 10 else 2

    while length > digit:
        k //= 10
        length -= 1
    return k == n

def luhn_check(card_number):
    sum = 0
    card_str = str(card_number)
    length = len(card_str)
    for i in range(length):
        digit = int(card_str[length - i - 1])
        if i % 2 == 0:
            sum += digit
        else:
            doubled = 2 * digit
            sum += doubled // 10 + doubled % 10
    return sum % 10 == 0

card_number = get_string("Number: ")

try:
    k = int(card_number)

    length = len(card_number)

    if luhn_check(k):
        if length == 15 and (begin_digits(k, 34, length) or begin_digits(k, 37, length)):
            print("AMEX")
        elif length == 16 and (begin_digits(k, 51, length) or begin_digits(k, 52, length) or begin_digits(k, 53, length) or begin_digits(k, 54, length) or begin_digits(k, 55, length)):
            print("MASTERCARD")
        elif begin_digits(k, 4, length) and (length == 13 or length == 16):
            print("VISA")
        else:
            print("INVALID")
    else:
        print("INVALID")

except ValueError:
    print("INVALID")
