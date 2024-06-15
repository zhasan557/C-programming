#include<stdio.h>

void sum();
void subs();
void mult();
void div();
int a;
int b;

int main(){

    printf("Enter frst number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);

    char ch;

    printf("Enter s for Sum\nEnter b for Difference\nEnter m for Multiply\nEnter d for Divide:");
    scanf(" %c", &ch);

    
    if(ch == 's'){
        sum();
    } else if(ch == 'b'){
        subs();
    } else if(ch == 'm'){
        mult();
    } else if(ch == 'd'){
        div();
    } else{
        printf("Invalid Input!\n");
    }
    
    return 0;
}

void sum(){
    printf("Sum: %d\n", a + b);
}
void subs(){
    printf("Difference: %d\n", a - b);
}
void mult(){
    printf("Multiple: %d\n", a * b);
}
void div(){
    if ( b!= 0){
        printf("Division:%d\n", a / b);
    } else{
        printf("Error: Division by zero not applicable\n");
    }

}