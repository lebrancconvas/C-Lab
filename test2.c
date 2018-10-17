#include <stdio.h>

int main()
{
    //c = 299792458 m/s
    //1 mile = 1609.344 m
    //1 year = 365 days
    //result should be lightyear two point float in miles and integer years.
    int year;
    double lightyear;
    printf("Enter year\n");
    scanf("%d",&year);
    // 299792458/1609.344 miles
    // year*365*24*60*60 seconds
    lightyear = (299792458/1609.344)*60*60*24*365*year;
    printf("Light can travel %.2lf miles in %d years",lightyear,year);
    return 0;
}
