#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/********************************************
 * Online banking system with these features
 * Registeration
 * Login
 * Fund Deposit
 * Fund withdrawal
 * Fund Transfer
 * Chane Password
********************************************/

struct user{
    /* data */
    char FullName[50];
    char phone[50];
    char accno[50];
    char password[50];
    float balance;
};

int main(){
    struct user usr;
    int opt;
    
    printf("\n\t\t\t=================== WELCOME TO X-Nova ONLINE BANKING =================== ");
    printf("\nWhat would you Like to do? ");
    printf("\n\n 1. Create an account");
    printf("\n2. Login ");
    printf("\n\nEnter your choice:  ");
    scanf("%d",&opt);

    if(opt == 1){
        system("cls");
        printf("\nX-NOVA BANK");
        printf("\n\nEnter Your Full Name: ");
        scanf("%s",usr.FullName);
        printf("\nEnter Your account Number: ");
        scanf("%s",usr.accno);
        printf("\nEnter your phone no: ");
        scanf("%s",usr.phone);
        printf("\nEnter your password");
        scanf("%s",usr.password);
        usr.balance = 0;
    }



    return 0;
}