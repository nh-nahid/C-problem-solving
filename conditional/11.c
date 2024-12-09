// write a C program to count the total number of notes in a
// given amount.

#include <stdio.h>

int main(){
	int given_amount;
    printf("Enter the amount: \n");
    scanf("%d", &given_amount);
	int note1000, note500, note100, note50, note20, note10, note5, note2, note1;
   note1000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0; 
   
       
    if( given_amount >= 1000) {
   	note1000 = given_amount / 1000;
       given_amount = given_amount % 1000;
       }
       
    if( given_amount >= 500) {
   	note500 = given_amount / 500;
       given_amount = given_amount % 500;
       }   
       
     if( given_amount >= 100) {
   	note100 = given_amount / 100;
       given_amount = given_amount % 100;
       }  
    
     if( given_amount >= 50) {
   	note50= given_amount / 50;
       given_amount = given_amount % 50;
       }
     if( given_amount >= 20) {
   	note20 = given_amount / 20;
       given_amount = given_amount % 20;
       }
     if( given_amount >= 10) {
   	note10 = given_amount / 10;
       given_amount = given_amount % 10;
       } 
     if( given_amount >= 5) {
   	note5 = given_amount / 5;
       given_amount = given_amount % 5;
       } 
     if( given_amount >= 2) {
   	note2= given_amount / 2;
       given_amount = given_amount % 2;
       }
     if( given_amount >= 1) {
   	note1 = given_amount;
       }
       
       int total_notes = note1000 + note500 + note100 + note50 + note20 + note10 + note5 + note2 + note1;
       
         printf("1000 = %d\n", note1000);
         printf("500 = %d\n", note500); 
         printf("100 = %d\n", note100);      
         printf("50 = %d\n", note50);
         printf("20 = %d\n", note20); 
         printf("10 = %d\n", note10); 
         printf("5 = %d\n", note5);
         printf("2 = %d\n", note2);  
         printf("1 = %d\n", note1);  
         printf("Total Notes = %d\n", total_notes);
         
         return 0;
         
         }