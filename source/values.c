/*
 * =====================================================================================
 *
 *       Filename:  values.c
 *
 *    Description:  Testing use of printf and scanf
 *
 *        Version:  1.0
 *        Created:  08/22/2013 09:28:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Geir Anders Storsveen (gas), storsveen@gmail.com
 *        Company:  N/A
 *
 * =====================================================================================
 */

#include <stdio.h>

    void
sum_two_val (  )
{
    int a, b, c=0;
    b=5;
    c=10;
    a = b + c;

    printf("Sum : %d\n",a);

    return ;
}		/* -----  end of function sum_two_val  ----- */



    void
add_read (  )
{
    int a, b, c = 0;
    printf("Enter value 1: ");
    scanf("%d",&b);
    printf("Enter value 2: ");
    scanf("%d",&c);
    a = b + c;
    printf("Sum : %d\n",a);

    return ;
}		/* -----  end of function add_read  ----- */


    void
anual_sal (  )
{
    int eno, asal, sal=0;
    char name[10];

    printf("enter emplyee number: ");
    scanf("%d",&eno);
    printf("enter emplyee name: ");
    scanf("%s",&name);
    printf("enter montly salary: ");
    scanf("%d",&sal);

    asal=sal*12;
    printf("annual salary for %s (%d) is: %d\n",name, eno, asal);

    return ;
}		/* -----  end of function anual_sal  ----- */



    void
student_score (  )
{
    int sno, sub1, sub2, sub3,total = 0;
    char name[10];
    float average=0;

    printf("enter student name: ");
    scanf("%s",&name);
    printf("enter student number: ");
    scanf("%d",&sno);

    printf("enter student sub1: ");
    scanf("%d",&sub1);

    printf("enter student sub2: ");
    scanf("%d",&sub2);

    printf("enter student sub3: ");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;
    average = total/3;

    printf("%s - %d\n",name,sno);
    printf("total: %d\n",total);
    printf("average: %f\n",average);
    return ;
}		/* -----  end of function student_score  ----- */



    void
biggest (  )
{
    int a, b =0;


    printf("enter value a: ");
    scanf("%d",&a);
    printf("enter value b: ");
    scanf("%d",&b);

    if (a > b)
	printf("a is the biggest\n");
    else
	printf("b is the biggest\n");
    return ;
}		/* -----  end of function biggest  ----- */


    void
classify_age (  )
{

    int age = 0;
    printf("Enter your age: ");
    scanf("%d",&age);

    if (age <= 12)
	printf("child\n");
    if (age >= 13 && age <= 19)
	printf("teen\n");
    if (age >= 20 && age <= 35)
	printf("young\n");
    if (age >= 36 && age < 50)
	printf("middle\n");
    if (age >= 50)
	printf("old\n");

    return ;
}		/* -----  end of function classify_age  ----- */


    void
biggest_three (  )
{
    int val1, val2, val3 = 0;
    printf("enter first value: ");
    scanf("%d",&val1);
    printf("enter second value: ");
    scanf("%d",&val2);
    printf("enter third value: ");
    scanf("%d",&val3);

    if (val1 > val2 && val1 > val3)
	printf("val1 is biggest: %d\n",val1);
    if (val2 > val1 && val2 > val3)
	printf("val2 is biggest: %d\n",val2);
    if (val3 > val2 && val3 > val1)
	printf("val3 is biggest: %d\n",val3);

    return ;
}		/* -----  end of function biggest_three  ----- */



    void
biggest_three_else (  )
{
    int val1, val2, val3 = 0;
    printf("enter first value: ");
    scanf("%d",&val1);
    printf("enter second value: ");
    scanf("%d",&val2);
    printf("enter third value: ");
    scanf("%d",&val3);

    if (val1 > val2 && val1 > val3)
	printf("val 1 is biggest: %d\n",val1);
    else
	if (val2 > val3)
	    printf("val2 is biggest: %d\n",val2);
        else
    	    printf("val3 is biggest: %d\n",val3);
    return ;
}		/* -----  end of function biggest_three_else  ----- */



    void
weekday_switch (  )
{
    int dayno = 0;
    printf("Enter weekday number: ");
    scanf("%d",&dayno);

    switch(dayno)
    {
	case 1:
	    {
		    printf("Sunday\n");
		    break;
	    }
	case 2:
	    {
		    printf("Monday\n");
		    break;
	    }
	case 3:
	    {
		    printf("Tuesday\n");
		    break;
	    }
	case 4:
	    {
		    printf("Wednesday\n");
		    break;
	    }
	case 5:
	    {
		    printf("Thursday\n");
		    break;
	    }
	case 6:
	    {
		    printf("Friday\n");
		    break;
	    }
	case 7:
	    {
		    printf("Saturday\n");
		    break;
	    }
	default:
	    printf("bad input: %d\n",dayno);
    }
    return ;
}		/* -----  end of function weekday_switch  ----- */


    void
looping_for (  )
{
    int i;
    for(i=1; i<=5; i++)
	printf("looping: %d\n",i);
    return ;
}		/* -----  end of function looping_for  ----- */


    void
looping_mult2 (  )
{
    int i;
    for(i=1;i <=20; i++)
	printf("%d * 2 = %d\n", i, i*2);
    return ;
}		/* -----  end of function looping_mult2  ----- */

    void
looping_mult_any(  )
{
    int i,base=0;

    printf("enter base number: ");
    scanf("%d",&base);
    for(i=1;i <=20; i++)
	printf("%d * %d  = %d\n", i, base, i*base);
    return ;
}		/* -----  end of function looping_mult_any  ----- */

    int
main ( int argc, char *argv[] )
{
    looping_mult_any();
//    looping_mult2();
//    looping_for();
//    weekday_switch();
//    biggest_three_else();
//    biggest_three();
//    classify_age();
//    biggest();
//    student_score();
//    sum_two_val();
//    anual_sal();
//    add_read();
    return 1;
}				/* ----------  end of function main  ---------- */
