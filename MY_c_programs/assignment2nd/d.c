//(d) Write a program to receive value of an angle in degrees and
 //check whether sum of squares of sine and cosine of this angle is equal to 1.
 #include<stdio.h>
 #include<math.h>
main()
{
    float sum=0,angle,temp;
    printf("enter angle :\n");
    scanf("%f",&angle);
    temp=angle;
    angle=angle*(M_PI/180.0);
    sum=(pow(sin(angle),2)+pow(cos(angle),2));
    if(sum==1)
    {
        printf("sum of square of sin(%0.2f) and cos(%0.2f) is 1\n",temp,temp);
    }
    else
        {
            printf("sum of square of sin(%0.2f) and cos(%0.2f) is  not 1\n",temp,temp);
        }
}
