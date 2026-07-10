/*
==================================================
Voter Module
==================================================
*/

#include <stdio.h>
#include <string.h>
#include "voter.h"

Voter voters[MAX_VOTERS];

int voterCount = 0;

void registerVoter()
{
    if(voterCount >= MAX_VOTERS)
    {
        printf("\nMaximum voter limit reached.\n");
        return;
    }

    printf("\n========== Voter Registration ==========\n");

    voters[voterCount].voterID = voterCount + 1;

    printf("Enter Name : ");
    scanf(" %[^\n]", voters[voterCount].name);

    printf("Create Password : ");
    scanf("%s", voters[voterCount].password);

    voters[voterCount].hasVoted = 0;

    printf("\nRegistration Successful!\n");
    printf("Your Voter ID : %d\n", voters[voterCount].voterID);

    voterCount++;
}

void displayVoters()
{
    int i;

    if(voterCount == 0)
    {
        printf("\nNo voters registered.\n");
        return;
    }

    printf("\n=========== Registered Voters ===========\n");

    for(i=0;i<voterCount;i++)
    {
        printf("\nVoter ID : %d\n", voters[i].voterID);
        printf("Name     : %s\n", voters[i].name);

        if(voters[i].hasVoted)
            printf("Status   : Voted\n");
        else
            printf("Status   : Not Voted\n");
    }
}