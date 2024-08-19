#include <stdio.h>
#include <string.h>

#define NAME 20
#define PHONE 15
#define MAIL 25
#define LEN 3

typedef struct
{
    char names[NAME];
    char p_num[PHONE];
    char e_mail[MAIL];
}
people;

/**
 * main - This program search and prints the contact on phonebook
 * 
 * Return: Always 0.
 */
int main(void)
{
    people person[LEN];
    
    /*person 1*/
    strcpy(person[0].names, "olamide");
    strcpy(person[0].p_num, "09070914249");
    strcpy(person[0].e_mail, "olamide@gmail.com");

    /*person 2*/
    strcpy(person[1].names, "zainab");
    strcpy(person[1].p_num, "097086453322");
    strcpy(person[1].e_mail, "zainab@gmail.com"); 

    /*person 3*/
    strcpy(person[2].names, "wunmi");
    strcpy(person[2].p_num, "08096623874");
    strcpy(person[2].e_mail, "wunmi@gmail.com");

    /*prompt users for input*/
    char name[NAME];
    printf("search name: ");
    scanf("%s", name);

    for (int i = 0; i < LEN; i++)
    {
        if(strcmp(person[i].names, name) == 0)
        {
            printf("Found: %s\t  %s\n",person[i].p_num, person[i].e_mail);
            return (0);
        }
    }
    printf("Not found!\n");
    return (1);
}
