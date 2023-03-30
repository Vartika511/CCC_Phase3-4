#include <iostream>
#include <cstring>

using namespace std;

struct Employee {
char name[55];
int salary;
};

void sortEmployees(Employee* employees, int n) {
for (int i = 1; i < n; i++) {
Employee key = employees[i];
int j = i - 1;
while (j >= 0 && (employees[j].salary > key.salary || (employees[j].salary == key.salary && strcmp(employees[j].name, key.name) > 0))) {
employees[j + 1] = employees[j];
j--;
}
employees[j + 1] = key;
}
}

int main() {
int n;
cin >> n;
Employee employees[n];
for (int i = 0; i < n; i++) {
cin >> employees[i].name >> employees[i].salary;
}
sortEmployees(employees, n);
for (int i = 0; i < n; i++) {
cout << employees[i].name << " " << employees[i].salary << endl;
}
return 0;
}
