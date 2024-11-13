//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    long long int balance;
    int total_note_count = 0;

    scanf("%lld",&balance);

    if(balance >= 100) 
    {
        total_note_count += balance / 100;
        balance = balance % 100;
    } 
    if(balance >= 20) 
    {
        total_note_count += balance / 20;
        balance = balance % 20;
    } 
    if(balance >= 10) 
    {
        total_note_count += balance / 10;
        balance = balance % 10;
    } 
    if(balance >= 5) 
    {
        total_note_count += balance / 5;
        balance = balance % 5;
    } 
    if(balance >= 1) 
    {
        total_note_count += balance;
    }

    printf("%d",total_note_count);

    return 0;
}