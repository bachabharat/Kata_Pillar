//
//  pre_dgt_evaluate.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "pre_dgt_evaluate.h"

void pre_dgt_evaluate(char* roman_numb,int* in,char c1,char c2)
{
    roman_numb[(*in)++] = c1;
    roman_numb[(*in)++] = c2;
}