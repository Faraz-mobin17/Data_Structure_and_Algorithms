//Back-end complete function Template for C++
#include <bits/stdc++.h>
// function to check if n is prime
bool isPrime(int n)
{
    if(n<=1)
    return false;
    
    for(int i=2;i<=sqrt(n);i++)
         if(n%i==0)
            return false;
    
    return true ;
}

int exactly3Divisors(int N)
{
    int counter=0; //Initializing counter to zero
    N = sqrt(N);
        
    for(int i=1;i<=N;i++) //running a loop from 1 to N
    {
        // A number N only has 3 divisors if it is a perfect square and its square root is a prime number,
        //  and we know the number of perfect squares less than N which is sqrt(N),
        // so just checking if i is prime or not
        if(isPrime(i)) 
        counter++;
    }
    return counter;
}