// Created by Adeyinka Jedidiah Adegalu on 13/11/2023.
// All the features (in form of functions) of the car sales projects will be stored in this file.


#ifndef CARSALES_FEATURES_H
#define CARSALES_FEATURES_H


void Buycars(){
    system("cls");
    char customerNames[50][50];
    printf("what is your full name: ");
    scanf("%s",customerNames);
    bool BuyLoop = true;
    char carchoice;
    while(BuyLoop){
        printf("what would you like to purchase: ");
        scanf("%c");
        //what model
        // how many
        // what color(optional)
        // calculate the sales logic
        // apply a discount if user is in record
    }
}


void Feedback(){
    system("cls");
    printf("We respect customer feedback.\nPlease leave a feedback...\n");
    char feedback[150];
    FILE *fptr;
    printf("feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    fptr = fopen("appFiles/customerFeedback.txt", "a");
    if(fptr == NULL){
        printf("Error Accessing Feedbacks...");
    }
    else{
        fprintf(fptr, "%s\n", feedback);
        fclose(fptr);// good practice to always close the file once done working with it.
        printf("feedback sent successfully!\n");
    }
}


void Addtostock(){

}
// multi dimensional arrays
//int board[ROWS][COLUMNS] = {
//        {1,2,3},
//        {4,5,6},
//        {7,8,9}
//};

#endif //CARSALES_FEATURES_H
