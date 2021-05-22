﻿An array a is called beautiful if for every pair of numbers ai, aj, (i ≠ j), there exists an ak such that ak = ai * aj. Note that k can be equal to i or j too.

Find out whether the given array a is beautiful or not!

-----------------------------------------------------------------

Here was my observation -

0*0 = 0, 1*1 = 1, 0*1 = 1 ... For any other number x and y, x*y =/= x or y

So, my logic was that there can be at most 1 number that is not 0 and not 1 for the array to be beautiful.

My answer would have been correct but I had solved the problem only for positive numbers whereas this problem included negative numbers as well.

An array can have any number of -1s and be beautiful if it has atleast one 1, because -1*-1 = 1

So, here are the cases, 

1. At most one number that is not 0, 1, or -1

2. If there is more than one -1, then has to be atleast one 1

3. The first condition needs to be stronger actually. If the array has only positive numbers, then it can have at most one number other than 0, 1. If it contains -1, it 
 	can't have any other numbers, because if there was an x, then -1,x would force the array to have x, x(-x), would force the array to have -x^2 and so on. 

---------------------------------------------

for(i = 1; i <= number_of_elements; i++)
    {
        scanf("%d", &number_i);

        if(number_i == 1)
            ones++;
        else if(number_i == 0)
            zeroes++;
        else if(number_i == -1)
            minus_ones++;
        else
            others++;
    }

    if( (others > 1) || (minus_ones > 1 && ones == 0) || (minus_ones > 0 && others > 0))
        is_beautiful = false;

    printf(is_beautiful ? "yes\n" : "no\n")