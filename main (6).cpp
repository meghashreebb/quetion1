Alice and Bob are playing a game. Alice initially has the number A and Bob has the number B. There are a total of N turns in the game, 
and Alice and Bob alternatively take turns. In each turn the player whose turn it is, multiplies his or her number by 2. 
Alice has the first turn.
Suppose after all the N turns, Alice's number has become C and Bob's number has become D. You want to calculate the integer division of the maximum number among C and D
 by the minimum number among C and D.
------------------------------------------------------------------------

Notice that a/b = 2a/2b ... If N is even then both a and b have bee n multiplied by 2 the same number of times. ans = max(a, b)/min(a, b)

If N is odd then a has been multiplied one time more ... So, it's effectively 2a and b.  Ans = max(2a, b)/min(2a, b)

-------------------------------------------------

if(number_of_turns%2 == 1)
        alice *= 2;

    printf("%d\n", max(alice, bob)/min(alice, bob));