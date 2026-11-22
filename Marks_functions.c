#include <stdio.h>
float average(int marks[], int n){
	int sum=0;
	for (int i=0; i<n; i++){
		sum+=marks[i];
	}
	return (float)sum/n;
}
int highest(int marks[], int n){
	int max=marks[0];
	for (int i=0; i<n; i++){
		if (marks[i]>max) max=marks[i];
	}
	return max;
}
int lowest(int marks[], int n){
	int min=marks[0];
	for (int i=0; i<n; i++){
		if (marks[i]<min) min=marks[i];
	}
	return min;
}
int aboveavg(int marks[], int n, float avg){
	int above=0;
	for (int i=0; i<n; i++){
		if (marks[i]>avg) above++;
	}
	return above;
}

int main(){
	int marks[100];
	int n, i, choice;
	int max, min, above;
	float avg;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Enter the marks of student %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	avg=average(marks, n);
	max=highest(marks, n);
	min=lowest(marks, n);
	above=aboveavg(marks, n, avg);
	do{
		printf("\n---MENU---\n");
		printf("1. Class Average\n");
		printf("2. Highest Mark\n");
		printf("3. Lowest Mark\n");
		printf("4. Students above average\n");
		printf("5. Exit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1: printf("Class Average: %.2f\n", avg); break;
			case 2: printf("Highest Mark: %d\n", max); break;
			case 3: printf("Lowest Mark: %d\n", min); break;
			case 4: printf("Students above average: %d\n", above); break;
			case 5: printf("Exiting\n"); break;
			default: printf("Invalid Choice\n");
		}
	}while (choice !=5);
	return 0;
}
	
