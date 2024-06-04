


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

typedef struct Student {
    char name[50];
    int id;
    float marks;
    struct Student* next;
} Student;

typedef struct Transaction {
    char operation[10];
    char timestamp[50];
    struct Transaction* next;
} Transaction;

Student* student_head = NULL;
Transaction* trans_head = NULL;

int insert_count = 0;
int delete_count = 0;

void addTransaction(const char* operation) {
    Transaction* new_trans = malloc(sizeof(Transaction));
    assert(new_trans);

    time_t now = time(NULL);
    struct tm* t = localtime(&now);
    strftime(new_trans->timestamp, sizeof(new_trans->timestamp), "%Y-%m-%d %H:%M:%S", t);

    strcpy(new_trans->operation, operation);
    new_trans->next = trans_head;
    trans_head = new_trans;
}

void insertStudent(const char* name, int id, float marks) {
    Student* new_student = malloc(sizeof(Student));
    assert(new_student);

    strcpy(new_student->name, name);
    new_student->id = id;
    new_student->marks = marks;

    new_student->next = student_head;
    student_head = new_student;


    insert_count++;
    addTransaction("INSERT");
}

void deleteStudent(int id) {
    Student* current = student_head;
    Student* prev = NULL;

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    if (prev) {
        prev->next = current->next;
    } else {
        student_head = current->next;
    }

    free(current);
    delete_count++;
    addTransaction("DELETE");
}

Student* searchStudent(int id) {
    Student* current = student_head;
    while (current != NULL && current->id != id) {
        current = current->next;
    }
    return current;
}

void deallocate() {
    Student* stud_temp;
    while (student_head != NULL) {
        stud_temp = student_head;
        student_head = student_head->next;
        free(stud_temp);
    }

    Transaction* trans_temp;
    while (trans_head != NULL) {
        trans_temp = trans_head;
        trans_head = trans_head->next;
        free(trans_temp);
    }
}

int main() {
    insertStudent("Alice", 1, 85.5);
    insertStudent("Bob", 2, 90.2);

    Student* s = searchStudent(1);
    if (s) {
        printf("Found Student: %s with ID %d and marks %f\n", s->name, s->id, s->marks);
    }

    deleteStudent(1);

    s = searchStudent(1);
    if (!s) {
        printf("Student with ID 1 not found.\n");
    }

    printf("Insert count: %d\n", insert_count);
    printf("Delete count: %d\n", delete_count);

    deallocate();
    return 0;
}
