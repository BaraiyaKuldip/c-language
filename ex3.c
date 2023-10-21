#include <stdio.h>
int main()  
{  
    char sing_ch;  

    printf("Input a character: ");  
    scanf("%c", &sing_ch);  
  
    /* Checks whether it is an alphabet */  
    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))  
    {  
        printf("This is an alphabet.\n");  
    }  
    else if(sing_ch>='0' && sing_ch<='9') /* whether it is digit */  
    {  
        printf("This is a digit.\n");  
    }  
    else /* Else special character */  
    {  
        printf("This is a special character.\n");  
    }  
}