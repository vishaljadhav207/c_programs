//If ages of Ram, Shyam and Ajay are input through the keyboard,
 //write a program to determine the youngest of the three.
 #include<stdio.h>
 main()
 {
     int ram,shyam,ajay;
     printf("enter age of 3 boys:\n");
     scanf("%d%d%d",&ram,&shyam,&ajay);
     if(ram<shyam&&ram<ajay)
     {
         printf("ram is youngest");
     }
     if(shyam<ram&&shyam<ajay)
     {
         printf("shyam is youngest");
     }
     if(ajay<ram&&ajay<shyam)
     {
         printf("ajay is youngest");
     }

 }
