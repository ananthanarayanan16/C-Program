//struct using array 

#include <stdio.h>

struct Car {
    char name[10]; 
    int year;
    char model[10];
};

int main() {
    int i;
     int numCars = 3; // Number of cars

    struct Car cars[numCars];

    printf("Enter  3 cars details :\n");
    for (i = 0; i < numCars; i++) {
        printf("Car %d : \n", i );
        printf("Car name : ");
        scanf("%s", &cars[i].name);
        printf("Car model : ");
        scanf("%s", &cars[i].model);
        printf("car year : ");
        scanf("%d", &cars[i].year);
        
    }

    printf("\nDetails of cars:\n");
    for (i = 0; i < numCars; i++) {
        printf("\nCar %d: \nName = %s, Model = %s , year = %d\n", i, cars[i].name,cars[i].model,cars[i].year);
    }

    return 0;
}


/*

output : 


Enter 3 cars details :
Car 0 :    
Car name : BMW
Car model : A
car year : 2003
Car 1 :    
Car name : AUDI
Car model : B
car year : 2004
Car 2 : 
Car name : HONDA  
Car model : C
car year : 2004

Details of cars:

Car 0:
 Name = BMW,Model = A , year = 2003

Car 1: 
Name = AUDI,Model = B , year = 2004

Car 2: 
Name = HONDA,Model = C , year = 2004

*/