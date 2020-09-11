// Author: Woosung Lim wml5207@psu.edu
// Collaborator: Yuxin Kang yjk5152@psu.edu
// Collaborator: Luke Bowman lkb5453@psu.edu
// Collaborator: Kelly Wolfe knw5289@psu.edu
// Section: 2
// Breakout: 3
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC grade: ");
  double gradeInput = atof(grade);
  char *letter;

  if (gradeInput >= 93) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (gradeInput >= 90) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (gradeInput >= 87) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (gradeInput >= 83) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (gradeInput >= 80) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (gradeInput >= 77) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (gradeInput >= 70) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (gradeInput >= 60) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else   {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  

  return 0;
}