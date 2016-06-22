//
//  roman_to_int.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "roman_to_int.h"

int roman_to_int(char ch)
{
    switch(ch)
    {
        case 'I' : return 1;break;
        case 'V' : return 5;break;
        case 'X' : return 10;break;
        case 'L' : return 50;break;
        case 'C' : return 100;break;
        case 'D' : return 500; break;
        case 'M' : return 1000;break;
        default  :  return 0; break;
    }
    return 0;
}