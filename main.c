#include <stdio.h>
#include <string.h>

/* ================= QUESTION 1 ================= */

// 1.1 Function calculate velocity
float calculateVelocity(float v0, float a, float t) {
    return v0 + a * t;
}

/* ================= QUESTION 3 ================= */

// 3.1 Struct Car
struct Car {
    int ModelId;
    char CarName[50];
    int ProductionYear;
};

// 3.2 Insert car information
void insertCars(struct Car cars[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter information for Car %d\n", i+1);

        printf("Model ID: ");
        scanf("%d", &cars[i].ModelId);

        printf("Car Name: ");
        scanf("%s", cars[i].CarName);

        printf("Production Year: ");
        scanf("%d", &cars[i].ProductionYear);
    }
}

// 3.3 Display cars
void displayCars(struct Car cars[], int n) {
    printf("\nCar List:\n");

    for(int i = 0; i < n; i++) {
        printf("ModelId: %d\n", cars[i].ModelId);
        printf("Car Name: %s\n", cars[i].CarName);
        printf("Production Year: %d\n", cars[i].ProductionYear);
        printf("-------------------\n");
    }
}

/* ================= MAIN PROGRAM ================= */

int main() {

    /* -------- Question 1 -------- */

    float v0 = 3;
    float a = 2;
    float t = 10;

    float v = calculateVelocity(v0, a, t);

    printf("The car moving with velocity : %.2f\n", v);

    float input_t;
    printf("\nEnter value of t: ");
    scanf("%f", &input_t);

    v = calculateVelocity(v0, a, input_t);

    if(v < 100)
        printf("Safe, the car is moving normally\n");
    else
        printf("Dangeruos, the car is exceeding the speed limit\n");


    /* -------- Question 2 -------- */

    int Array[7] = {3,5,8,13,21,34,55};

    for(int i = 0; i < 7; i++) {
        printf("The element %d of the array is %d\n", i+1, Array[i]);
    }

    // 2.2 Insert elements
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Elements you entered:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    /* -------- Question 3 -------- */

    struct Car cars[5];

    insertCars(cars,5);
    displayCars(cars,5);

    return 0;
}