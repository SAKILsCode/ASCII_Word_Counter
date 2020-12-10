
#include <stdio.h>

int main()
{
    int totalWords = 1, c = 0, spaces = 0, breakFirst = 0;
    char str[100] = {0};

    while (1)
    {
        char a;
        
        if(1)
        {
            scanf("%c", &a);
            str[c] = a;
            c++;
        }

        int first = str[0];
        int prev = str[c-2];
        int curr = str[c-1];
        // printf("\n%d First\n", first);
        // printf("\n%d Prev\n", prev);
        // printf("\n%d curr\n", curr);


        if ((int)a == 10)
        {
            if(
                !(
                    (
                        first >= 48 && first <= 57
                    ) || (
                        first >= 65 && first <= 90
                    ) || (
                        first >= 97 && first <= 122
                    )
                )
                 && 
                !(
                    (
                        prev >= 48 && prev <= 57
                    ) || (
                        prev >= 65 && prev <= 90
                    ) || (
                        prev >= 97 && prev <= 122
                    )
                )
                 && curr == 10
            )
            {
                breakFirst--;
            }else{
                breakFirst++;
            }
            break;
        }


        
        if(
            (
                (
                    (
                        prev >= 48 && prev <= 57
                    ) || (
                        prev >= 65 && prev <= 90
                    ) || (
                        prev >= 97 && prev <= 122
                    )
                ) && !(
                    (
                        curr >= 48 && curr <= 57
                    ) || (
                        curr >= 65 && curr <= 90
                    ) || (
                        curr >= 97 && curr <= 122
                    )
                )

            )||(

                (
                    (
                        prev >= 48 && prev <= 57
                    ) || (
                        prev >= 65 && prev <= 90
                    ) || (
                        prev >= 97 && prev <= 122
                    )
                )
                
                && curr == 10
            
            )
        )
        {
            totalWords++;
        }

        if ((int)a == 32)
        {
            spaces++;
        }
        
    }

    if (breakFirst < 0)
    {
        totalWords = 0;
    }
    
    puts(str);
    printf("\n%d Total Word/s\n", totalWords);
    printf("%d Total Characters\n", c - spaces -1);

    return 0;
}