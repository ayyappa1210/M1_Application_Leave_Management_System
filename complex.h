/**
 * @file complex.h
 * @author GEA
 * @brief Complex structure definition
 * @version 0.1
 * @date 2021-08-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * @note Do not upload this file to submitty as submitty already has this file
 *          and will create error if uploaded
 * 
 */

#ifndef COMPLEX_H
#define COMPLEX_H

/* Included to allow users to call functions from math library if required */
#include "math.h"

/* strcture definition must be reused by the users in their code */
typedef struct complex
{
    float real;
    float img;
}complex_t;

#endif //#ifndef COMPLEX_H