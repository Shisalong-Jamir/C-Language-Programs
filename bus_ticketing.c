#include <stdio.h>
int main(){
    int n, age, i;
    char gender;
    float baseFare, fare, subtotal=0, gst, total;
    printf("Enter the number of passengers: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        printf("\nPassenger %d\n", i);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Enter gender (M/F): ");
        scanf(" %c", &gender);
        printf("Enter the BaseFare: ");
        scanf("%f", &baseFare);
        if (age<5){
            fare=0;
        }
        else if(gender=='F' || gender=='f'){
            fare=0;
        }
        else if(age>60){
            fare=baseFare*0.7;
        }
        else{
            fare=baseFare;
        }
        printf("Payable fare: %.2f\n", fare);
        subtotal+=fare;
    }
    gst=subtotal*0.05;
    total=subtotal+gst;
    printf("\nSubtotal: %.2f\n", subtotal);
    printf("\nGst (5%%): %.2f\n", gst);
    printf("\nTotal Fare: %.2f\n", total);
    return 0;
}
    
