/*
==================================================
Result Module
==================================================
*/

#include <stdio.h>
#include "candidate.h"
#include "result.h"

void displayVoteCount()
{
    int i;

    printf("\n=====================================\n");
    printf("          VOTE COUNT\n");
    printf("=====================================\n");

    printf("%-10s %-20s %-10s\n","ID","Candidate","Votes");

    for(i=0;i<MAX_CANDIDATES;i++)
    {
        printf("%-10d %-20s %-10d\n",
               candidates[i].candidateID,
               candidates[i].name,
               candidates[i].votes);
    }
}

void displayWinner()
{
    int i;
    int winner = 0;

    for(i=1;i<MAX_CANDIDATES;i++)
    {
        if(candidates[i].votes > candidates[winner].votes)
        {
            winner = i;
        }
    }

    printf("\n=====================================\n");
    printf("         ELECTION RESULT\n");
    printf("=====================================\n");

    printf("Winner : %s\n", candidates[winner].name);
    printf("Votes  : %d\n", candidates[winner].votes);
}