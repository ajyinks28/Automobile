#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "headers/carstructures.h"
#include "headers/features.h"


int main() {
    bool onState = true;
    short totalCarsSold = 0;
    float totalProfit = 0;
    char menu;
    int car_select;

    char car_list[][20] = {"Toyota", "BMW", "Nissan", "Peugeot", "Ferrari", "Lamborghini", "Bugatti"};

    struct Cars car_types[] = {toyota, bmw, nissan, peugot, ferrari, lamborghini, bugatti};



    int nameCounter = 0;


    while (onState) {
        system("cls");
        printf("Hello and welcome to Jed's car retailer.\n");
        printf("Menu\n"
               "a. Buy Cars\n"
               "b. View Sales Stats\n"
               "c. View Car Stock\n"
               "f. Customer Feedback\n"
               "g. add to stock\n"
               "x. Exit\n"
               "Please choose: ");
        scanf(" %c", &menu);
        while (getchar() != '\n');
//        getchar();

        switch (tolower(menu)) {

            case 'a':
                 Buycars();
            case 'b':
                system("cls");
                printf("Total Cars Sold: %hd\n", totalCarsSold);
                printf("Total Profit: %.2f (gbp)\n", totalProfit);
                printf("name | items bought | total price | discount | paid");

                printf("\nPress enter to continue...");
                while (getchar() != '\n');
                break;

            case 'c':
                system("cls");
                for(int i=0; i < sizeof(car_list)/sizeof(car_list[0]);i++){
                    printf("%d\t %s\n", i, car_list[i]);
                }
                printf("x\t to go back to menu\n");
                printf("enter a value: ");
                scanf("%d", &car_select);
                system("cls");
                printf("models available.\n");
                for(int i=0; i < sizeof(car_types[car_select].car_models)/sizeof(car_types[car_select].car_models[0]);i++){
                    printf("%s %s\t (gbp)%.2lf\n", car_list[car_select], car_types[car_select].car_models[i], car_types[car_select].car_prices[i]);
                }
                printf("\nPress enter to continue...");
                while (getchar() != '\n');
                getchar();
                break;


            case 'f':
                Feedback();
            case 'g':
                Addtostock();

            case 'x':
                //system("cls");
                printf("Are you sure you want to exit?(Y/N) : ");
                char exitState;
                exitState = getchar();
                getchar();
                if(exitState == 'Y' || exitState == 'y'){
                    onState = false;
                    break;
                }
                else if(exitState == 'N' || exitState == 'n'){
                    continue;
                }

            default:
                system("cls");
                printf("Invalid option selected.\n");
                printf("\nPress enter to continue...");
                while (getchar() != '\n');
                getchar();
        }
    }

    return 0;
}
