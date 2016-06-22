//
//  Is_Valid_Roman.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//
#include <stdbool.h>
#include "Is_Valid_Roman.h"

int Is_Valid_Roman(char* temp)
{
    int a = 0; bool ok = true;
    while(temp[a]!='\0' && (ok))
    {
    if(temp[a]!='I'&&temp[a]!='V'&&temp[a]!='X'&&temp[a]!='L'&&temp[a]!='C'&&temp[a]!='D'&&temp[a]!='M')
        {
            ok = false;
            return 0;
        }
        a++;
    }
    return 1;
}
