/*
==================================================
Candidate Module
==================================================
*/

#include <stdio.h>
#include <string.h>
#include "candidate.h"

Candidate candidates[MAX_CANDIDATES];

void initializeCandidates()
{
    candidates[0].candidateID = 1;
    strcpy(candidates[0].name, "Alice");
    candidates[0].votes = 0;

    candidates[1].candidateID = 2;
    strcpy(candidates[1].name, "Bob");
    candidates[1].votes = 0;

    candidates[2].candidateID = 3;
    strcpy(candidates[2].name, "Charlie");
    candidates[2].votes = 0;

    candidates[3].candidateID = 4;
    strcpy(candidates[3].name, "David");
    candidates[3].votes = 0;

    candidates[4].candidateID = 5;
    strcpy(candidates[4].name, "Emma");
    candidates[4].votes = 0;
}

void displayCandidates()
{
    int i;

    printf("\n=================================\n");
    printf("      LIST OF CANDIDATES\n");
    printf("=================================\n");

    printf("%-10s %-20s\n","ID","Candidate");

    for(i=0;i<MAX_CANDIDATES;i++)
    {
        printf("%-10d %-20s\n",
               candidates[i].candidateID,
               candidates[i].name);
    }
}