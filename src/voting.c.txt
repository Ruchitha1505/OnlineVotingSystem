/*
==================================================
Voting Module
==================================================
*/

#include <stdio.h>
#include <string.h>

#include "voter.h"
#include "candidate.h"
#include "voting.h"

extern Voter voters[MAX_VOTERS];
extern int voterCount;

void castVote()
{
    int voterID;
    char password[20];
    int candidateID;
    int i;

    if(voterCount == 0)
    {
        printf("\nNo voters are registered.\n");
        return;
    }

    printf("\n=========== VOTER LOGIN ===========\n");

    printf("Enter Voter ID : ");
    scanf("%d",&voterID);

    printf("Enter Password : ");
    scanf("%s",password);

    for(i=0;i<voterCount;i++)
    {
        if(voters[i].voterID == voterID &&
           strcmp(voters[i].password,password)==0)
        {

            if(voters[i].hasVoted)
            {
                printf("\nYou have already voted.\n");
                return;
            }

            displayCandidates();

            printf("\nEnter Candidate ID : ");
            scanf("%d",&candidateID);

            if(candidateID>=1 && candidateID<=MAX_CANDIDATES)
            {
                candidates[candidateID-1].votes++;

                voters[i].hasVoted=1;

                printf("\nVote Cast Successfully!\n");
            }
            else
            {
                printf("\nInvalid Candidate ID.\n");
            }

            return;
        }
    }

    printf("\nInvalid Voter ID or Password.\n");
}