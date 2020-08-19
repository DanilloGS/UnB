#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXARRAY 100
#define true 1
#define false 0
char *dataBaseName = "./drivers.csv";

typedef struct Driver {
    char name[MAXARRAY];
    char cpf[MAXARRAY];
    char renavam[MAXARRAY];
    struct car {
        char code[MAXARRAY];
        char model[MAXARRAY];
    } car;
} Driver;

int createNewDriver(FILE *dataBase) {
    Driver *newDriver = calloc(1, sizeof(Driver));
    dataBase = fopen(dataBaseName, "a");

    printf("Nome: ");
    scanf(" %[^\n]", newDriver->name);

    printf("CPF: ");
    scanf(" %[^\n]", newDriver->cpf);

    printf("RENAVAM: ");
    scanf(" %[^\n]", newDriver->renavam);

    printf("Placa: ");
    scanf(" %[^\n]", newDriver->car.code);

    printf("Modelo do carro: ");
    scanf(" %[^\n]", newDriver->car.model);

    dataBase = fopen(dataBaseName, "a");
    fprintf(dataBase, "%s,%s,%s,%s,%s\n", newDriver->cpf, newDriver->name, newDriver->renavam, newDriver->car.code, newDriver->car.model);

    free(newDriver);
    return true;
};

char *getDriverById(FILE *dataBase, char *cpf) {
    dataBase = fopen(dataBaseName, "r");
    Driver *driverFromDataBase = calloc(1, sizeof(Driver));
    int index = 0;
    int gotCpf = false;
    char *entireLine = calloc((MAXARRAY + 1) * 5, sizeof(char));
    for (char data = getc(dataBase); data != EOF; data = getc(dataBase)) {
        if (data == cpf[index]) {
            index++;
            if (index == 11) {
                strcat(entireLine, cpf);
                gotCpf = true;
            }
        } else {
            index = 0;
            if (gotCpf == true) {
                strncat(entireLine, &data, 1);
            }
        }
    }
    if (strlen(entireLine) == 0)
        return "";
    return entireLine;
};

int deleteDriverById(FILE *dataBase, char *cpf) {
    dataBase = fopen(dataBaseName, "r");
    char *entireLine = calloc((MAXARRAY + 1) * 5, sizeof(char));
    char *isCPFEquals = calloc(MAXARRAY + 1, sizeof(char));
    int lineToDelete = false;
    for (char data = getc(dataBase); data != EOF; data = getc(dataBase)) {
        if (strcmp(isCPFEquals, cpf) == 0) {
            strcpy(isCPFEquals, "");
            lineToDelete = true;
        } else if (lineToDelete == false) {
            strncat(isCPFEquals, &data, 1);
        }
        if (data == '\n') {
            strcat(entireLine, isCPFEquals);
            strcpy(isCPFEquals, "");
            lineToDelete = false;
        }
    }
    dataBase = fopen(dataBaseName, "w");
    fprintf(dataBase, "%s", entireLine);
};

int main(int argc, char const *argv[]) {
    FILE *dataBase;
    Driver *newDriver;
    // int quantityOfNewDrivers;
    // scanf("%d", &quantityOfNewDrivers);
    // while (quantityOfNewDrivers > 0) {
    //     createNewDriver(dataBase);
    //     quantityOfNewDrivers--;
    // }
    // int fclose(FILE * dataBase);
    // getDriverById(dataBase, "05338733129");
    deleteDriverById(dataBase, "05338733129");
    int fclose(FILE * dataBase);
    return 0;
}
