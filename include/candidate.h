#ifndef CANDIDATE_H
#define CANDIDATE_H

#define MAX_CANDIDATES 5

typedef struct
{
    int candidateID;
    char name[50];
    int votes;

} Candidate;

void initializeCandidates();
void displayCandidates();

extern Candidate candidates[MAX_CANDIDATES];

#endif