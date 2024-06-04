#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a macro for the number of seats in each quota
#define MERIT_SEATS 10
#define MANAGEMENT_SEATS 3
#define NRI_SEATS 2

// Define an enum to represent the quota
typedef enum {
  MERIT,
  MANAGEMENT,
  NRI
} Quota;

// Define a structure to store the student information
typedef struct {
  char name[100];
  Quota quota;
  int merit_rank;
} Student;

// Define a function to compare two students based on their merit rank
int compare_students(const void *a, const void *b) {
  Student *student_a = (Student *)a;
  Student *student_b = (Student *)b;

  return student_a->merit_rank - student_b->merit_rank;
}

// Define a function to generate the list of admitted students
void generate_admitted_student_list(Student *students, int total_students) {
  // Sort the students based on their merit rank
  qsort(students, total_students, sizeof(Student), compare_students);

  // Create an array to store the admitted students
  Student *admitted_students = malloc(sizeof(Student) * (MERIT_SEATS + MANAGEMENT_SEATS + NRI_SEATS));

  // Admit the students from the merit list
  for (int i = 0; i < MERIT_SEATS; i++) {
    admitted_students[i] = students[i];
  }

  // Admit the students from the management quota
  int management_quota_index = 0;
  for (int i = MERIT_SEATS; i < total_students; i++) {
    if (students[i].quota == MANAGEMENT) {
      admitted_students[MERIT_SEATS + management_quota_index] = students[i];
      management_quota_index++;
    }

    if (management_quota_index == MANAGEMENT_SEATS) {
      break;
    }
  }

  // Admit the students from the NRI quota
  int nri_quota_index = 0;
  for (int i = MERIT_SEATS + MANAGEMENT_SEATS; i < total_students; i++) {
    if (students[i].quota == NRI) {
      admitted_students[MERIT_SEATS + MANAGEMENT_SEATS + nri_quota_index] = students[i];
      nri_quota_index++;
    }

    if (nri_quota_index == NRI_SEATS) {
      break;
    }
  }

  // Print the list of admitted students
  printf("List of admitted students:\n");
  for (int i = 0; i < (MERIT_SEATS + MANAGEMENT_SEATS + NRI_SEATS); i++) {
    printf("%s\n", admitted_students[i].name);
  }

  // Free the allocated memory
  free(admitted_students);
}

int main() {
  // Get the total number of students
  int total_students;
  printf("Enter the total number of students: ");
  scanf("%d", &total_students);

  // Create an array of students
  Student *students = malloc(sizeof(Student) * total_students);

  // Get the student information
  for (int i = 0; i < total_students; i++) {
    printf("Enter the student name: ");
    scanf("%s", students[i].name);

    // Get the student quota
    int quota;
    printf("Enter the student quota (0 for merit, 1 for management, 2 for NRI): ");
    scanf("%d", &quota);
    students[i].quota = (Quota)quota;

    if(students[i].quota==0){
    printf("Enter the student merit rank: ");
    scanf("%d", &students[i].merit_rank);}
  }

  // Generate the list of admitted students
  generate_admitted_student_list(students, total_students);

  // Free the allocated memory
  free(students);

  return 0;
}
