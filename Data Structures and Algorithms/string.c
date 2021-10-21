
#include<stdio.h>
#include<string.h>

int GTBIT_Strlen(char * );
void GTBIT_Strcpy(char *, const char * );
char* GTBIT_Strcat(char * , const char * );


int main(){
    char arr[] = "Kashish Koul", b[20], c[] = "Hello ";
    
    int len1 ;
    len1 = GTBIT_Strlen(arr);
    printf("String = %s and Length = %d\n", arr , len1);
    printf("\nUsing strcpy func :");
    GTBIT_Strcpy(b , arr);
    printf("%s\n",b);
    printf("\nUsing strcat func :");
    GTBIT_Strcat(c , arr);
    printf("%s\n", c);
    return 0;
}

int GTBIT_Strlen(char *s){
    int length = 0;
    while(*s != '\0'){
        length++;
        s++;
    }
    return length;
}

void GTBIT_Strcpy(char *t , const char *s ){
    while (*s !='\0'){
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}

char* GTBIT_Strcat(char *x,const char *xx){
    strcat(x,xx);
    return x;
}
