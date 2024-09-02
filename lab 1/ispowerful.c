#include <stdio.h>

int main() {
    int number;
    int remainder;
    int power;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    for (int i=0; i<8; i++) {
        if ((number % primes[i]) == 0) {
            number = number / primes[i];
            remainder = 0;
            power = 0;
            /*remainder = 0;*/
            power++;
            while (remainder == 0) {
                remainder = number % primes[i];
                if (remainder == 0) {
                    number = number / primes[i];
                    power++;
                }
            }
            if (power < 2) {
                printf("Not powerful.");
                return 0;
            }
            if (remainder == 1) {
                printf("Powerful.");
                return 0;
            }
        }
    }

    return 0;
}