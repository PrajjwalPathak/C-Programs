//Program to check if a character is a Vowel or a Consonant

#include<stdio.h>
int main() {
    char a;
    printf("Enter the character to check if Vowel or Consonant: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
   

    return 0;
}