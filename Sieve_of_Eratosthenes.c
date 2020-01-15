#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void SieveOfEratosthenes(int n)
{
    bool bIsprime[n+1];
    memset(bIsprime, true, sizeof(bIsprime));

    //Main Sieve's algorithm
    for (int i = 2; i*i <= n; i++)
    {
        if ( bIsprime[i] == true)
        {
            for (int j = i*i; j<=n ; j+=i)
            {
                bIsprime[j] = false;
            }
        }
    }

    //Print all prime number
    for (int l = 2; l <= n ; l++)
    {
        if( bIsprime[l] == true)
        {
            printf("%d ", l);
        }
    }

}


int main() {
    int n;
    printf("Your n : ");
    scanf("%d",&n);
    printf("Prime : ");
    SieveOfEratosthenes(n);
    return 0;
}