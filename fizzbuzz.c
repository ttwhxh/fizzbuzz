#include <stdio.h>

int main()
{
        int num = 0;

        do{

        if(num < 100)
        {

                num++;

                if(num % 3 == 0 && num % 5 != 0)
                {
                        printf("Fizz\n");

                }

                else if(num % 5 == 0 && num % 3 != 0)
                {
                        printf("Buzz\n");
                }

                else if(num % 3 == 0 && num % 5 == 0)
                {
                        printf("FizzBuzz\n");
                }

                else
                {
                        printf("%d\n", num);
                }
        }

        }while(num < 100);

        return 0;
}

