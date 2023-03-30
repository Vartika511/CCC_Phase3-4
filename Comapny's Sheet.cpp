#include <stdio.h>
#include <string.h>

struct Employee{
    char name[55];
    int salary;
};

void sortEmployees(Employee *employees, int n) {
    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (employees[j].salary > employees[j+1].salary) {
                // Swap salaries
                int tempSalary = employees[j].salary;
                employees[j].salary = employees[j+1].salary;
                employees[j+1].salary = tempSalary;
                // Swap names
                char tempName[55];
                strcpy(tempName, employees[j].name);
                strcpy(employees[j].name, employees[j+1].name);
                strcpy(employees[j+1].name, tempName);
            } else if (employees[j].salary == employees[j+1].salary) {
                // If salaries are equal, compare names lexicographically
                if (strcmp(employees[j].name, employees[j+1].name) > 0) {
                    char tempName[55];
                    strcpy(tempName, employees[j].name);
                    strcpy(employees[j].name, employees[j+1].name);
                    strcpy(employees[j+1].name, tempName);
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", employees[i].name, &employees[i].salary);
    }

    sortEmployees(employees, n);

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
