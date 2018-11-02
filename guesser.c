//Phuong Pham
//CS 591
//Homework 1

//Guessing Game - Guesser

#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
  char name_ques[MAX];
  char num_ques[MAX];

  printf("\nEnter question:\n");
  scanf("%[^\n]s", name_ques);

  if (strcmp(name_ques, "What is your name?") == 0)
    printf("Bob\n");
  else
  {
    printf("???\n");
    return 0;
  }

  scanf(" %[^\n]s", num_ques);
  
  if (strcmp(num_ques, "What is the magic number, Bob?") == 0)
    printf("12345\n");
  else
    printf("???\n");

  scanf(" %[^\n]s", name_ques);

  return 0;
}
