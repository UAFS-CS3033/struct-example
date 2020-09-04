#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct{
   char firstName[SIZE];
   char lastName[SIZE];
   char password[SIZE];
   int noLogins;
}Record;

void printRecord(Record rec);
void printRecord2(Record *rec);

int main(){
   Record rec1;

   printf("Size: %ld\n",sizeof(Record));

   ///* Load Struct *****
   strcpy(rec1.firstName,"Joe");
   strcpy(rec1.lastName,"Smith");
   strcpy(rec1.password,"pass1");
   rec1.noLogins=1;

   printRecord(rec1);

   printf("\n-------print--------\n");
   printf("First Name:  %s\n",rec1.firstName);
   printf("Last Name:   %s\n",rec1.lastName);
   printf("Password:    %s\n",rec1.password);
   printf("Logins:      %d\n",rec1.noLogins);

   printRecord2(&rec1);

   printf("\n-------print--------\n");
   printf("First Name:  %s\n",rec1.firstName);
   printf("Last Name:   %s\n",rec1.lastName);
   printf("Password:    %s\n",rec1.password);
   printf("Logins:      %d\n",rec1.noLogins);


   return 0;
}

void printRecord(Record rec){
   strcpy(rec.firstName,"Bill");
   printf("\n-------printRecord--------\n");
   printf("First Name:  %s\n",rec.firstName);
   printf("Last Name:   %s\n",rec.lastName);
   printf("Password:    %s\n",rec.password);
   printf("Logins:      %d\n",rec.noLogins);
}

void printRecord2(Record *rec){
   strcpy(rec->firstName,"Jim");
   printf("\n-------printRecord2--------\n");
   printf("First Name:  %s\n",rec->firstName);
   printf("Last Name:   %s\n",rec->lastName);
   printf("Password:    %s\n",rec->password);
   printf("Logins:      %d\n",rec->noLogins);
}
