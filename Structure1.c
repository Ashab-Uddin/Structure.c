#include <stdio.h>

struct student {
    int id;
    char name[30];
    char dept[30];
    float cgpa;
};

struct student ob[100];

int main() {
    int i, n;
    //freopen("C:/programming/cpp/a.txt","r",stdin);

    // Ask how many students
    printf("How many students: ");
    scanf("%d", &n);

    // Enter the student details
    printf("Enter the student details\n");
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &ob[i].id);
        printf("Name: ");
        scanf(" %[^\n]", ob[i].name);  // Space before % allows to skip any leftover newline character
        printf("Dept: ");
        scanf(" %[^\n]", ob[i].dept);
        printf("CGPA: ");
        scanf("%f", &ob[i].cgpa);
    }

    // Print the student details
    //printf("\n%-10s %-20s %-20s %-5s\n", "ID", "Name", "Dept", "CGPA");
    printf("'\n%s \t%-20s \t%s \t%s\n","ID", "Name", "Dept", "CGPA");
    printf("--------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d \t%-20s \t%s \t%.2f\n",ob[i].id, ob[i].name, ob[i].dept, ob[i].cgpa);
        //printf("%-10d %-20s %-20s %-5.2f\n", ob[i].id, ob[i].name, ob[i].dept, ob[i].cgpa);
        printf("----------------------------------------------\n");
    }

    return 0;
}









