#include<bits/stdc++.h>
using namespace std;

#define MAX  100009

vector <int> primes;

void sieveOfEratosthenes()
{
    int i,j;
    bool flag[MAX+1];

    for(i=0; i<=MAX; i++)
        flag[i] = true;

    primes.push_back(2);

    flag[0] = flag[1] = false;

    for(i=4; i<=MAX; i+=2)
        flag[i] = false;

    for(i=3; i<=MAX; i+=2)
    {
        if(flag[i] == true) // i is prime
        {
            primes.push_back(i);

            for(j=i+i; j<=MAX; j=j+i)
            {
                flag[j] = false; //j is not prime
            }
        }
    }
}


void segmentedSieve(long long L, long long R)
{
    bool isPrime[R-L+1];
    long long curPrime,base,i,j;

    for(i=0; i<=R-L+1; i++)
        isPrime[i] = true;


    if(L == 1)
        isPrime[0] = false;

    for(i=0; primes[i]*primes[i]<=R; i++)
    {
        curPrime = primes[i];
        base = curPrime*curPrime;

        if(base < L)
            base = ((L+curPrime-1)/curPrime) * curPrime;

        for(j=base; j<=R; j+=curPrime)
            isPrime[j-L] = false;
    }

    printf("\nAll prime numbers from %d to %d are: ", L, R);

    for(i=0; i<=R-L; i++)
    {
        if(isPrime[i] == true)
            cout << L+i << " ";
    }

    cout << endl;
}

int main()
{
    int L, R;

    printf("\nEnter the range [L - R] : ");
    scanf("%d %d", &L, &R);

    printf("\n");

    sieveOfEratosthenes();

    segmentedSieve(L,R);

    return 0;
}
