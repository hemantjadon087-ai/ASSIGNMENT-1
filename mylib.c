#include "mylib.h"

// Reverse digits
int reverseDigits(int n) {
    int r = 0;
    while (n) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

// Armstrong number
int isArmstrong(int num) {
    int sum = 0, t = num;
    while (t) {
        int digit = t % 10;
        sum =sum+(digit * digit * digit);
        t = t/10;
    }
    return sum == num;
}

// Adams number
int isAdams(int num) {
    int rev = reverseDigits(num);
    return reverseDigits(rev * rev) == num * num;
}

// Prime check
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

// Prime Palindrome
int isPrimePalindrome(int num) {
    return isPrime(num) && reverseDigits(num) == num;
}
