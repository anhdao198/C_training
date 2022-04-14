#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char inputcommand[100];
static char outputcommand[100];

struct commandstruct {
    char *name; //ten ham
    int argc; // tro den so luong tham so
    char *argv[80]; //dung de tro den tham so trong mang
};

struct commandstruct command;

void sum(int a, int b){
    int result;
    result = a + b;
    printf("SUM: %d\n", result);
}

void printtinyport(){
    printf("tiny_prompt $ ");
}

void parseCmd(char *inputcmd, char *ouputcmd, struct commandstruct * command){
    //tach 2 chuoi = " "
    char *temp = strtok(inputcmd, " ");
    
    while (temp != NULL){
        printf("Parse: %s\n", temp);
        if(command->name == '\0'){
            command->name = temp;
        } else{
            command->argv[command->argc] = temp;
            command->argc++;
        }
        temp = strtok(NULL, " ");
    }
}

// check command name va tham so 
int checkcommand() {
    
    if (!(strcmp(command.name, "sum"))){
        if (command.argc == 2 && atoi(command.argv[0]) && atoi(command.argv[1])){ //atoi chuyen gia tri trong mang thanh so kieu int
            sum(atoi(command.argv[0]), atoi(command.argv[1]));
        } 
    else {
        printf("Command %s not found\n", inputcommand);
    }
    }
    return 0;
}

int main(){
    printtinyport();
    char* inp = inputcommand;

    *inp = getchar();
    while(*inp != '\n'){
        inp++;
        *inp = getchar();
    }

    printf("inputCommand: %s", inputcommand);
    parseCmd(inputcommand, outputcommand, &command);
    checkcommand();
    return 0;
}