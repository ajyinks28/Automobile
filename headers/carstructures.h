//
// Created by adeyi on 10/11/2023.
//

#ifndef CARSALES_CARSTRUCTURES_H
#define CARSALES_CARSTRUCTURES_H


struct Cars{
    char car_models[5][20];
    double car_prices[5];
    int number_instock[5];
};

struct Cars toyota = {
        {
                {"C-HR (C)", "RAV4 (R)", "Corolla (O)", "Camry (M)", "Prius (P)"},
                {"3 Series (3)", "5 Series (5)", "7 Series (7)", "X3 (X)", "X5 (Z)"},
                {"Juke (J)", "Qashqai (Q)", "X-Trail (T)", "Leaf (L)", "GT-R (G)"},
                {"208 (2)", "308 (8)", "508 (5)", "2008 (0)", "3008 (3)"},
                {"488 (8)", "F8 (F)", "Portofino (P)", "Roma (R)", "SF90 (S)"},
                {"Aventador (A)", "Huracán (H)", "Urus (U)", "Sian (I)", "Countach (C)"},
                },

        {{35000.00, 45000.00, 46000.00, 48000.00, 43000.00},{}},

        {2, 3, 2, 4, 1}
};
struct Cars bmw = {
        {"3 Series (3)", "5 Series (5)", "7 Series (7)", "X3 (X)", "X5 (Z)"},
        {40000.00, 50000.00, 60000.00, 70000.00, 80000.00},
        {2, 3, 2, 4, 1}
};
struct Cars nissan = {
        {"Juke (J)", "Qashqai (Q)", "X-Trail (T)", "Leaf (L)", "GT-R (G)"},
        {30000.00, 40000.00, 50000.00, 60000.00, 70000.00},
        {2, 3, 2, 4, 1}
};
struct Cars peugot={
        {"208 (2)", "308 (8)", "508 (5)", "2008 (0)", "3008 (3)"},
        {20000.00, 30000.00, 40000.00, 50000.00, 60000.00},
        {2, 3, 2, 4, 1}
};
struct Cars ferrari = {
        {"488 (8)", "F8 (F)", "Portofino (P)", "Roma (R)", "SF90 (S)"},
        {200000.00, 300000.00, 400000.00, 500000.00, 600000.00},
        {2, 3, 2, 4, 1}
};
struct Cars lamborghini = {
        {"Aventador (A)", "Huracán (H)", "Urus (U)", "Sian (I)", "Countach (C)"},
        {250000.00, 350000.00, 450000.00, 550000.00, 650000.00},
        {2, 3, 2, 4, 1}
};
struct Cars bugatti = {
        {"Chiron (C)", "Divo (D)", "Centodieci (E)", "Veyron (V)", "La Voiture Noire (N)"},
        {1000000.00, 2000000.00, 3000000.00, 4000000.00, 5000000.00},
        {2, 3, 2, 4, 1}
};




#endif //CARSALES_CARSTRUCTURES_H
