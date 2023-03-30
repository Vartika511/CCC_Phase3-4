#include<bits/stdc++.h>
using namespace std;

struct Employee{
    char name[55];
    int salary;
};

bool compare(Employee a, Employee b){
    if(a.salary == b.salary){
        return strcmp(a.name, b.name) < 0;
    }
    return a.salary < b.salary;
}

void sortEmployees(Employee arr[], int n){
    sort(arr, arr+n, compare);
}

int main(){
    int n;
    cin>>n;
    Employee arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].salary;
    }
    sortEmployees(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].salary<<"\n";
    }
    return 0;
}
