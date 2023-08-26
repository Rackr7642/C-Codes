
#include<stdio.h>
#include<math.h>
 
//to find gcd
int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}
 
int main()
{
    // must be  random prime numbers
    double p = 3;
    double q = 11	;
    double n=p*q;
    double count;
    double totient = (p-1)*(q-1);
 
    //public key
    //e stands for encrypt such that gcd(e,totient) = 1
    double e=5;
 
    //for checking co-prime which satisfies e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }
 
    //private key
    //d stands for decrypt
    double d;
 
    //k can be any arbitrary value

 
    //choosing d such that it satisfies d*e = 1 + k * totient
    d = (1 + totient)/e;
    double msg = 5;
    double c = pow(msg,e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
 
    printf("Message data = %lf",msg);
    printf("\np = %lf",p);
    printf("\nq = %lf",q);
    printf("\nn = pq = %lf",n);
    printf("\ntotient = %lf",totient);
    printf("\ne = %lf",e);
    printf("\nd = %lf",d);
    printf("\n The Encrypted data is = %lf",c);
    printf("\nThe Decrypted Message that is Sent = %lf",m);
 
    return 0;
}

