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

    int
main ( int argc, char *argv[] )
{
    student_score();
//    sum_two_val();
//    anual_sal();
//    add_read();
    return 1;;
}				/* ----------  end of function main  ---------- */
