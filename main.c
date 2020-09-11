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
  double grade = atof(grade);
  char *letter;

  if (grade >= 93) {
    letter = "A";
    printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (grade >= 90) {
    letter = "A-";
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  else if (grade >= 87) {
    letter = "B+";
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  else if (grade >= 83) {
    letter = "B";
    printf("Your letter grade for CMPSC 131 is B.");
  }
  else if (grade >= 80) {
    letter = "B-";
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  else if (grade >= 77) {
    letter = "C+";
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  else if (grade >= 70) {
    letter = "C";
    printf("Your letter grade for CMPSC 131 is C.");
  }
  else if (grade >= 60) {
    letter = "D";
    printf("Your letter grade for CMPSC 131 is D.");
  }
  else if (grade <= 60) {
    letter = "F";
    printf("Your letter grade for CMPSC 131 is F.");
  }
  

  return 0;
}