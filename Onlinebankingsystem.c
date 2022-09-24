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
    int opt,choice;
    FILE *fp;
    char filename[50],phone[50],pword[50];
    char cont = 'y';
    
    printf("\n\t\t\t=================== WELCOME TO X-Nova ONLINE BANKING =================== ");
    printf("\nWhat would you Like to do? ");
    printf("\n\n 1. Create an account");
    printf("\n2. Login ");
    printf("\n\nEnter your choice:  ");
    scanf("%d",&opt);

    if(opt == 1){
        system("cls");
      
        printf("\n\nEnter Your Full Name: \t");
        scanf("%s",usr.FullName);
        printf("\nEnter Your account Number: \t");
        scanf("%s",usr.accno);
        printf("\nEnter your phone number: \t");
        scanf("%s",usr.phone);
        printf("\nEnter your password: \t");
        scanf("%s",usr.password);
        usr.balance = 0;
        strcpy(filename,usr.phone);

        fp = fopen(strcat(filename,".dat"), "w");
        fwrite(&usr,sizeof(struct user),1,fp);
        if(fwrite != 0){
            printf("\n\nAccount Succesfully registered");
        }else {
            printf("\n\nSomething went wrong, Please try again");
        }
        fclose(fp);
    }

    if (opt == 2) {
        system("cls");
        printf("\n\t\tX-NOVA BANK");
        printf("\nPhone Number: ");
        scanf("%s", &phone);
        printf("\nPassword: ");
        scanf("%s", &pword);
        strcpy(filename,phone);
        fp = fopen(strcat(filename,".dat"), "r");
        if(fp == NULL){
            printf("\nAccount does not exist");
        }
        else {
            fread(&usr,sizeof(struct user),1,fp);
            fclose(fp);
            if(!strcmp(pword, usr.password)){
                while (cont == 'y')
                {
                    system("cls");
                    printf("\n\n1. Check balance");
                    printf("\n\n2. Deposit Funds");
                    printf("\n\n3. Withdraw Funds");
                    printf("\n\n4. Transfer Funds");
                    printf("\n\n5. Change Password");

                    printf("\n\n\t\tPlease enter your choice: ");
                    scanf("%d",&choice);

                    switch (choice)
                    {
                    case 1:
                        printf("\n Your current Balance is NGN%.2f", usr.balance);
                        break;
                    
                    default:
                        break;
                    }

                    printf("\n\n\t\tDo you want to perform another transaction?...[y/n]");
                    scanf("%s", &cont);
                }
            }
             else 
             {
                printf("Invalid Password");
                } 
        }
            
                

    }
    



    return 0;
}