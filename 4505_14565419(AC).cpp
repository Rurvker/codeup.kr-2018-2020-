#include <bits/stdc++.h>
int main()
{
    char a[99],b[99];
    int i;
    scanf("%s\n%s",a,b);
    int thisisa=strlen(a),thisisb=strlen(b);
    int tempa=0,tempb=0;
    for(int j=0; j<thisisa; j++) // this is a
    {
        if(a[j]=='M')
        {
            if(a[j+1]=='M')
            {
                tempa+=2000;
                j=1;
            }
            else
                tempa+=1000;
        }
        else if(a[j]=='D')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(a[i]!='C')
                {
                    break;
                }
            }
            tempa+=500+((i-j-1)*100);
            j+=i-j-1;
        }
        else if(a[j]=='C')
        {
            if(a[j+1]=='D')
            {
                tempa+=400;
                j+=1;
            }
            else if(a[j+1]=='M')
            {
                tempa+=900;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(a[i]!='C')
                    {
                        break;
                    }
                }
                tempa+=100*(i-j);
                j+=i-j-1;
            }
        }
        else if(a[j]=='L')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(a[i]!='X')
                    break;
            }
            tempa+=50+((i-j-1)*10);
            j+=i-j-1;
        }
        else if(a[j]=='X')
        {
            if(a[j+1]=='L')
            {
                tempa+=40;
                j+=1;
            }
            else if(a[j+1]=='C')
            {
                tempa+=90;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(a[i]!='X')
                        break;
                }
                tempa+=10*(i-j);
                j+=i-j-1;
            }
        }
        else if(a[j]=='V')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(a[i]!='I')
                    break;
            }
            tempa+=5+i-j-1;
            j+=i-j-1;
        }
        else if(a[j]=='I')
        {
            if(a[j+1]=='V')
            {
                tempa+=4;
                j+=1;
            }
            else if(a[j+1]=='X')
            {
                tempa+=9;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(a[i]!='I')
                        break;
                }
                tempa+=i-j;
                j+=i-j-1;
            }
        }
    }

    for(int j=0; j<thisisb; j++) // this is b
    {
        if(b[j]=='M')
        {
            if(b[j+1]=='M')
            {
                tempb+=2000;
                j=1;
            }
            else
                tempb+=1000;
        }
        else if(b[j]=='D')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(b[i]!='C')
                {
                    break;
                }
            }
            tempb+=500+((i-j-1)*100);
            j+=i-j-1;
        }
        else if(b[j]=='C')
        {
            if(b[j+1]=='D')
            {
                tempb+=400;
                j+=1;
            }
            else if(b[j+1]=='M')
            {
                tempb+=900;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(b[i]!='C')
                    {
                        break;
                    }
                }
                tempb+=100*(i-j);
                j+=i-j-1;
            }
        }
        else if(b[j]=='L')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(b[i]!='X')
                    break;
            }
            tempb+=50+((i-j-1)*10);
            j+=i-j-1;
        }
        else if(b[j]=='X')
        {
            if(b[j+1]=='L')
            {
                tempb+=40;
                j+=1;
            }
            else if(b[j+1]=='C')
            {
                tempb+=90;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(b[i]!='X')
                        break;
                }
                tempb+=10*(i-j);
                j+=i-j-1;
            }
        }
        else if(b[j]=='V')
        {
            for(i=j+1; i<j+5; i++)
            {
                if(b[i]!='I')
                    break;
            }
            tempb+=5+i-j-1;
            j+=i-j-1;
        }
        else if(b[j]=='I')
        {
            if(b[j+1]=='V')
            {
                tempb+=4;
                j+=1;
            }
            else if(b[j+1]=='X')
            {
                tempb+=9;
                j+=1;
            }
            else
            {
                for(i=j; i<j+4; i++)
                {
                    if(b[i]!='I')
                        break;
                }
                tempb+=i-j;
                j+=i-j-1;
            }
        }
    }
    int ans=tempa+tempb;
    printf("%d\n",ans);
    int a1=floor(ans/1000),a2=floor(ans/100)-(a1*10),a3=floor(ans/10)-(a1*100)-(a2*10),a4=ans%10;
    for(int i=0;i<a1;i++)
        printf("M");
    if(a2==9)
        printf("CM");
    else if(a2==4)
        printf("CD");
    else
    {
        if(a2>=5&&a2<9)
        {
            printf("D");
            a2-=5;
        }
        for(int i=0;i<a2;i++)
        {
            printf("C");
        }
    }
    if(a3==9)
        printf("XC");
    else if(a3==4)
        printf("XL");
    else
    {
        if(a3>=5&&a3<9)
        {
            printf("L");
            a3-=5;
        }
        for(int i=0;i<a3;i++)
        {
            printf("X");
        }
    }
    if(a4==9)
        printf("IX");
    else if(a4==4)
        printf("IV");
    else
    {
        if(a4>=5&&a4<9)
        {
            printf("V");
            a4-=5;
        }
        for(int i=0;i<a4;i++)
        {
            printf("I");
        }
    }
}

