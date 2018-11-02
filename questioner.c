//Phuong Pham
//CS 591
//Homework 1

//Guessing Game - Questioner

#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
  FILE *fp;
  char name[MAX];
  int num;
  char list_name[MAX]; 
  int list_num;

  fp = fopen("answers.txt", "r");
  if(fp == NULL)
  {
    printf("\nError opening file.\n");
    return 0;
  }

  printf("\nWhat is your name?\n");
  scanf("%s", name);
  printf("What is the magic number, %s?\n", name);
  scanf("%d", &num);

  while (!feof(fp))
  {
    fscanf(fp, "%s %d", list_name, &list_num);
    
    if (strcmp(list_name, name) == 0)
    {
      if (num == list_num)
        printf("SUCCESS\n");
      else if(num > list_num)
        printf("TOO HIGH\n");
      else
        printf("TOO LOW\n");

      fclose(fp);
      return 0;
    } 
  }
  
  if (num == 12345)
    printf("SUCCESS\n");
  else if (num > 12345)
    printf("TOO HIGH\n");
  else
    printf("TOO LOW\n");

  fclose(fp);

  return 0;
}

