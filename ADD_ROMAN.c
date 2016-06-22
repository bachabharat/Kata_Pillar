//
//  ADD_ROMAN.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "ADD_ROMAN.h"
#include "Is_Valid_Roman.h"
#include "int_to_romanstring.h"
#include "romanstring_to_int.h"


char* ADD_ROMAN(char* A, char* B, char* result)
{
    if(!(Is_Valid_Roman(A)) || (!(Is_Valid_Roman(B))))
        return "Specified Romans are Invalid : Select from{(I,V,X,L,C,D,M}";
    int t1 =romanstring_to_int(A);
    int t2 =romanstring_to_int(B);
    return int_to_romanstring((t1+t2),result);
}
