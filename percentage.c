#include<stdio.h>
/*Q2. Accept the marks from the user and print the grade
a. Marks>=75 grade A
b. Marks >=55 grade B
c. Marks >=35 grade C
d. Else fail*/
int main(){
    

    int marks;
printf("Enter Students Marks: \n");
scanf("%d",marks);

if(marks>=75&&marks<=75) //56<=75
{
     printf("Grade A");
}
else if(marks>=55&&marks<=55)
{
    printf("Grade B");
}
else if (marks>=35)
{
    printf("Grade C");
    /* code */
}
else{
    printf("You are fail");
}



}