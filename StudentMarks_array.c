#include <stdio.h>
int main(){
	int n, i, choice, above=0;
	int marks[50], sum=0, max, min;
	float avg;
	printf("Enter number of students: ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Enter the marks of student %d:", i+1);
		scanf("%d", &marks[i]);
		sum+=marks[i];
	}
	avg=(float)sum/n;
	max=min=marks[0];
	for (i=0; i<n; i++){
		if (marks[i]>max) max=marks[i];
		if (marks[i]<min) min=marks[i];
		if (marks[i]>avg) above++;
	}
	do {
		printf("\n---MENU---\n");
		printf("1. Class Average\n");
		printf("2. Highest Marks\n");
		printf("3. Lowest Marks\n");
		printf("4. Students Above Average\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice){
			case 1: printf("Class Average: %.2f\n", avg); break;
			case 2: printf("Highest Marks: %d\n", max); break;
			case 3: printf("Lowest Marks: %d\n", min); break;
			case 4: printf("Students Above Average: %d\n", above); break;
			case 5: printf("Exiting...\n"); break;
			default: printf("Invalid Choice\n");
		}
	}while (choice !=5);
	return 0;
}
