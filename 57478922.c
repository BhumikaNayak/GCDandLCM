//Codechef problem GCD and LCM 
#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    for( int i=0;i<Testcases;i++ ) //using for loop
    {
        long long int num1,num2,remainder,GCD,LCM,A,B;  //declaration of variables
        scanf("%ld %ld\n",&A,&B);
        num1=A;
        num2=B;
         
        while(num2!=0) //using while loop
        {
            remainder=num1%num2;
            num1=num2;
            num2=remainder;
        }
        GCD=num1;
        LCM=A*B/GCD;
        printf("%ld %ld\n",GCD,LCM);
    }
    return 0;
}
//Code By Bhumika Nayak