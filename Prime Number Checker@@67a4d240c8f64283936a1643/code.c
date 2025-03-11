#include <stdio.h>

/**
 * Checks if a number is prime.
 *
 * @param num The number to check.
 * @return 1 if prime, 0 otherwise.
 */
int isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) 
        return 0;
    
    // 2 is the only even prime number
    if (num == 2) 
        return 1;
    
    // Even numbers greater than 2 are not prime
    if (num % 2 == 0) 
        return 0;
    
    // Check divisibility only by odd numbers up to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) 
            return 0;  // Found a divisor, not prime
    }

    return 1;  // Prime if no divisors found
}

int main(){
    int t;
    printf("Enter the number of test cases: ");
    if (scanf("%d", &t) != 1) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    while(t--){
        int num;
       
        if (scanf("%d", &num) != 1) {
            fprintf(stderr, "Error reading input.\n");
            return 1;
        }
        
        printf("%d is %sprime.\n", num, isPrime(num) ? "" : "not ");
    }
    
    return 0;
}
