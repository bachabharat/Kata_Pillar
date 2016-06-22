//
//  romanstring_to_int.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved
#include "romanstring_to_int.h"
#include "roman_to_int.h"

int romanstring_to_int(char* temp)
{
    int i = 0, num = 0;
    while(temp[i])
    {
        if(roman_to_int(temp[i]) >= roman_to_int(temp[i+1]))
            num = num + roman_to_int(temp[i]);
        else
        {
            num = num + (roman_to_int(temp[i+1]) - roman_to_int(temp[i]));
            i++;
        }
        i++;
    }
    return num;
}