//Wap to search Debasmita is present in class or not
#include <stdio.h>
#include <string.h>

int main() {
    int n, found = 0;
    char name[50];

    
    printf("Enter the number of students in the class: ");
    scanf("%d", &n);

   
    char students[n][50];

    
    printf("Enter the names of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", students[i]);  

   
    char target[] = "Debasmita";

    
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i], target) == 0) {
            found = 1;
            break;
        }
    }

   
    if (found) {
        printf("Debasmita is present in the class.\n");
    } else {
        printf("Debasmita is absent in the class.\n");
    }

    return 0;
}

