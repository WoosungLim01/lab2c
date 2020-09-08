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
  char *gradeInput = readline("Enter your CMPSC grade: \n");
  double grade = atof(gradeInput);
  char *letter;

  if (grade >= 93) {
    letter = "A";
  }
  else if (grade >= 90) {
    letter = "A-";
  }
  else if (grade >= 87) {
    letter = "B+";
  }
  else if (grade >= 83) {
    letter = "B";
  }
  else if (grade >= 80) {
    letter = "B-";
  }
  else if (grade >= 77) {
    letter = "C+";
  }
  else if (grade >= 70) {
    letter = "C";
  }
  else if (grade >= 60) {
    letter = "D";
  }
  else if (grade <= 60) {
    letter = "F";
  }
  
  printf("Your letter grade for CMPSC 131 is %s. \n", letter);

  return 0;
}