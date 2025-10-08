/***********************************************************************
  
 WAPC to input the age of a person. Check and display if the person is eligible to vote. 
 
 ***********************************************************************/


 #include<stdio.h>
 int main()
 {
    unsigned int age;
    printf("\nENTER THE AGE: ");
    scanf("%u",&age);

    if(age<18)
    {
        printf("\nNOT ELIGIBLE TO VOTE.");
    }
    else if(age>=18)
    {
        printf("\nELIGIBLE TO VOTE.");
    }
    return 0;
 }