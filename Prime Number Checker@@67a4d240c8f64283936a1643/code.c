#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) 
        return 0;  // Numbers less than or equal to 1 are not prime
    if (num == 2) 
        return 1;  // 2 is prime
    if (num % 2 == 0) 
        return 0;  // Even numbers greater than 2 are not prime
    
    // Check divisibility only by odd numbers up to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) 
            return 0;  // Found a divisor, not prime
    }

    return 1;  // Prime if no divisors found
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}