#include <stdio.h>
int main()
{
    double height=5, width=20,a,p, area, perimeter;
    p = (width + height);
    perimeter = p / 2;
    a = (width*height);
    area = a/2;
    
    printf("The area of the Triangle is = %f \n", area);
    printf("The perimeter of the Triangle is = %f", perimeter);


    return 0;

}