//
//  pst_dgt_evaluate.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "pst_dgt_evaluate.h"

void pst_dgt_evaluate(char* roman_numb,int* in, char c,int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        roman_numb[(*in)++] = c;
    }
}