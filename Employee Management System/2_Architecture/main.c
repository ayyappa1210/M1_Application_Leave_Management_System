/**
 * @file main.c
 * @author GEA
 * @brief Main code to call all the other functions
 * @version 0.1
 * @date 2021-08-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * @note Do not upload this file to submitty as submitty already has this file
 *          and will create error if uploaded
 */
#include "complex.h"
#include "compute.h"
#include "stdio.h"

void my_print(complex_t val, const char* operation)
{
    if(val.img < 0)
        printf("%s = %.3f-i%.3f\n", operation, val.real, -val.img);
    else
        printf("%s = %.3f+i%.3f\n", operation, val.real, val.img);
}

int main()
{
    complex_t c1 = {0, 0};
    complex_t c2 = {0, 0};
    complex_t result = {0, 0};

    scanf("%f %f %f %f", &c1.real, &c1.img, &c2.real, &c2.img);

    result = complex_sum(c1, c2);
    my_print(result, "Sum");

    result = complex_difference(c1, c2);
    my_print(result, "Difference");

    result = complex_multiply(c1, c2);
    my_print(result, "Product");

    result = complex_divide(c1, c2);
    my_print(result, "Division");

    return 0;
}