/* 
    Add required header files and function defintiions here
    upload this file to submitty
*/
#include "compute.h"

complex_t complex_sum(complex_t c1,complex_t c2)
{
    complex_t temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return (temp);
}
complex_t complex_difference(complex_t c1,complex_t c2)
{
    complex_t temp;
    temp.real=c1.real-c2.real;
    temp.img=c1.img-c2.img;
    return (temp);
}
complex_t complex_multiply(complex_t c1,complex_t c2)
{
    complex_t temp;
    temp.real=c1.real*c2.real;
    temp.img=c1.img*c2.img;
}
complex_t complex_devide(complex_t c1,complex_t c2)
{
    complex_t temp;
    temp.real=c1.real/c2.real;
    temp.img=c1.img/c2.img;
    return (temp);
}