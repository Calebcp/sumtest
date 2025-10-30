#include <stdio.h>
#include<time.h>
#include<unistd.h>
#include <stdlib.h>
int main ()
{
    int hour, minute, second;
    hour=minute=second=0;
    while(1)
    {
        system("clear");
        printf("%02d : %02d : %02d\n", hour, minute, second);

        fflush(stdout);
        second ++;
        if (second == 60)
        {
            minute+=1;
            second=0;

        }
        if(minute == 60)
        {
            hour += 1;
            minute=0;
        }
        if(hour == 24);
        {
            hour =0;
            minute=0;
            second=0;

        }
        sleep(1);
    }
}

/*i really have no time right now to fix up top code, but i willl
learn it*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
/*char *months[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};*/
char *months[]=
{
    "",
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOctober",
    "\n\n\nNovember",
    "\n\n\nDecember"
};
int inputyear(void);
{
    int year;
    printf("Please enter year (e.g., 2002):");
    scanf("%d",&year);
    return year;
}

int determine_leap_year(int year)
{
    if (year% 4 == FALSE && year %100 != FALSE || year %400 == FALSE)
    {
        days_in_month[2]=29;
        return TRUE;

    } 
    else
    {
        days_in_month[2]=28;
        return FALSE;
    }
}

void determineddaycode(int year)
{
    int daycode; 
    int d1, d2, d3;

    d1=(year -1)/4.0;
    d2=(year -1)/100.0;
    d3=(year -1)/400.0;
    daycode=(year + d1 - d2 + d3) %7;
    return daycode;
}
void calender (int year,, int daycode)
{
    printf("%s, months[month], year);");
    printf("\n\nSun Mon Tue Wed Thu Fri Sat\n");
    
    for (day=1 ; day <= 1 + daycode * 5; day ++)
    printf("")''
}
/*I am so tired just made sure to do my 100 line code before i
go to sleep */