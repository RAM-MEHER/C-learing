#include <stdio.h>

int main()
{
    int  eng, phy, chem, math, comp , total; 
    float average;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%i %i %i %i %i", &eng, &phy, &chem, &math, &comp);

    /* Calculate total, average and percentage */
    total = eng + phy + chem + math + comp;
    average = (float)total / 5.0;
   

    /* Print all results */
    printf("Total marks = %i\n", total);
    printf("Average marks = %.2f\n", average);
   
    return 0;
}
