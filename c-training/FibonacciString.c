
#include <stdio.h>

int main()
{
    int a;
    int i,j,k;
    char str[100001];
    scanf("%d",&a);

    while(a--)
    {
        int alph[26]={0},sort[27]={0};
        scanf("%s",str);
        k=0;
        int tmp=0;

        for(i=0;str[i]!='\0';i++)
        {
            alph[str[i]-'a']++;
            tmp++;
        }
        if(tmp<3)
        {
            printf("Dynamic\n");
            continue;
        }
        for(j=0;j<26;j++)
        {
            if(alph[j]==0)
                continue;
            int min=j;

            for(i=0;i<26;i++)
            {
                if(alph[i]==0)
                    continue;
                if(alph[i]<alph[min])
                {
                    min=i;
                }

            }
            sort[k++]=alph[min];
            alph[min]=0;
        }
        int flag=1;

        for(i=2;sort[i]!=0;i++)
        {
            if(sort[i]!=sort[i-1]+sort[i-2])
            {
                flag=0;
                break;
            }
        }

        if(flag==0)
        {
            tmp=sort[1];
            sort[1]=sort[0];
            sort[0]=tmp;
            flag=1;
        }

        if(flag==1)
        for(i=2;sort[i]!=0;i++)
        {
            if(sort[i]!=sort[i-1]+sort[i-2])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("Dynamic\n");
        else
            printf("Not\n");
    }

    return 0;
    }
