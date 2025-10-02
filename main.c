#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  char op;
  int result;
  
  printf("Enter the calculation :");
  scanf("%i %c %i", &a, &op, &b);

switch (op){
       case '+':
            result=a+b;
            printf("%i%c%i=%i\n", a, op, b, result);
            break;
            case'-':
                    result=a-b;
                    printf("%i%c%i=%i\n", a, op, b, result);
            break;
            case'*':
                    result=a*b;
                    printf("%i%c%i=%i\n", a, op, b, result);
            break;
            case'/':
                    if(b!=0){
                    result=a/b;
                    printf("%i%c%i=%i\n", a, op, b, result);
                    } else {
                           printf("Error: Division by zero!\n");
                           }
            break;
            default:
                    printf("Error: Invalid operator!\n");
                    }    
                    printf("= %i", result);
  
  system("PAUSE");	
  return 0;
}
