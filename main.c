#include <stdio.h>
#include <stdlib.h>

/*
@name           Victoria
@description    Challenge 0
*
*
*
*/

int main()
{

int i;
int c = 0; //counter

    for(i = 2; i< 223; ++i)
    {

        if((i % 3 == 0 && i % 4 != 0) || ( i % 3 != 0 && i % 4 == 0))
        {//logical xor
            continue;
        }
        else if(i % 3 == 0 && i % 4 == 0)
                {
                    printf("A100 Rocks!!\n");
                    c++;

                }
            else if (i % 4 == 0)
                {
                    printf("A100\n");
                }
                  else
                {
                    printf("%d\n",i);
                }
    }
                    printf("A100 Rocks %d Times \n", c);
return 0;
}
