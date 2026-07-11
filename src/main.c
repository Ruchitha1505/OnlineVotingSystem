/*
==========================================================
Online Voting System
Main Program
Author : Ruchitha M
==========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "voter.h"
#include "candidate.h"
#include "voting.h"
#include "result.h"

int main()
{
    int choice;
	
    initializeCandidates();

    while (1)
    {
        printf("\n=====================================\n");
        printf("      ONLINE VOTING SYSTEM\n");
        printf("=====================================\n");

        printf("1. Register Voter\n");
        printf("2. Display Candidates\n");
        printf("3. Cast Vote\n");
        printf("4. Display Vote Count\n");
        printf("5. Display Winner\n");
        printf("6. Display Registered Voters\n");
        printf("7. Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                registerVoter();
                break;

            case 2:
                displayCandidates();
                break;

            case 3:
                castVote();
                break;

            case 4:
                displayVoteCount();
                break;

            case 5:
                displayWinner();
                break;
           case 6:
                displayVoters();
                break;

            case 7:
                printf("\nThank you for using Online Voting System.\n");
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}