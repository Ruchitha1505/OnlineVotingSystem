#ifndef VOTER_H
#define VOTER_H

#define MAX_VOTERS 100

typedef struct
{
    int voterID;
    char name[50];
    char password[20];
    int hasVoted;

} Voter;

void registerVoter();
void displayVoters();
extern int voterCount;

#endif