//
//  int_to_romanstring.c
//  PILLAR
//
//  Created by Bharat Kumar Bacha on 6/21/16.
//  Copyright © 2016 Bharat Kumar Bacha. All rights reserved.
//

#include "int_to_romanstring.h"
#include "pre_dgt_evaluate.h"
#include "pst_dgt_evaluate.h"

char* int_to_romanstring(int numb, char* roman_numb) //
{
    int in = 0;
    while(numb != 0)
    {
        
        if(numb >= 1000)
        {
            pst_dgt_evaluate(roman_numb,&in,'M',numb/1000);
            numb = numb - (numb/1000) * 1000;
        }
        else if(numb >=500)
        {
            if(numb < (500 + 4 * 100))
            {
                pst_dgt_evaluate(roman_numb,&in,'D',numb/500);
                numb = numb - (numb/500) * 500;
            }
            else
            {
                pre_dgt_evaluate(roman_numb,&in,'C','M');
                numb = numb - (1000-100);
            }
        }
        else if(numb >=100)
        {
            if(numb < (100 + 3 * 100))
            {
                pst_dgt_evaluate(roman_numb,&in,'L',numb/100);
                numb = numb - (numb/100) * 100;
            }
            else
            {
                pre_dgt_evaluate(roman_numb,&in,'C','D');
                numb = numb - (500-100);
            }
        }
        else if(numb >=50)
        {
            if(numb < (50 + 4 * 10))
            {
                pst_dgt_evaluate(roman_numb,&in,'L',numb/50);
                numb = numb - (numb/50) * 50;
            }
            else
            {
                pre_dgt_evaluate(roman_numb,&in,'X','C');
                numb = numb - (100-10);
            }
        }
        else if(numb >=10)
        {
            if(numb < (10 + 3 * 10))
            {
                pst_dgt_evaluate(roman_numb,&in,'X',numb/10);
                numb = numb - (numb/10) * 10;
            }
            else
            {
                pre_dgt_evaluate(roman_numb,&in,'X','L');
                numb = numb - (50-10);
            }
        }
        else if(numb >=5)
        {
            if(numb < (5 + 4 * 1))
            {
                pst_dgt_evaluate(roman_numb,&in,'V',numb/5);
                numb = numb - (numb/5) * 5;
            }
            else
            {
                pre_dgt_evaluate(roman_numb,&in,'I','X');
                numb = numb - (10-1);
            }
        }
        else if(numb >=1)
        {
            if(numb < 4)
            {
                pst_dgt_evaluate(roman_numb, &in,'I',numb/1);
                numb = numb - (numb/1) * 1;
            }
            else
            {
                pre_dgt_evaluate(roman_numb, &in, 'I','V');
                numb = numb - (5-1);
            }
        }
    }
    roman_numb[in] = '\0';
    return roman_numb;
}