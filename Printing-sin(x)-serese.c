//Printing sin(x) serese:-
//x-(x^3/3!)+(x^5/5!)-(x^7/7!)+(x^9/9!)+(x^11/11!)...

    #include<stdio.h>
    int main()
    {  
        int n,x;
        double result;

        double serese ( int ,int );

        printf("Enter value of x : ");
        scanf("%d",&x);

        printf("Enter value of n : ");
        scanf("%d",&n);

        result = serese(x,n);
        printf("Resilt is  : %.3lf",result);
        return 0;
    }
    double serese ( int x, int n )
    {
        int i,pow,fact,number;

        int factorial( int );
        int power( int , int );
        double res = 0.0;
        for ( i = 1 ; i <= n ; i++ )
        {
            number = 2*i - 1 ; // To bring even number every time

            pow = power(x,number);

            fact = factorial(number);

            if ( i%2 != 0 )
                res = res + pow/(double)fact;
            else
                res = res - pow/(double)fact;
        }
        return res;
    }

    int power ( int x , int n)
    {
        int i,pow = 1;

        for ( i = 1 ; i <= n ; i++ )
            pow = pow*x;

        return pow;
    }

    int factorial( int x)
    {
        int i,fact = 1;

        for  ( i = 1 ; i <= x ; i++ )
            fact = fact*i;

        return fact;
    }
