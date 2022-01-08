#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void prince(void);
void print(void);
void nam(char a[100]);
void name(char h[100]);
void match(int mul,int rp);
void con(int lum,int pr);
void printline(char ch);
int main()
{

    char ch[100],str[100],op[100],p[100],oq[100],hc[100],c1[100],h1[100];
    int i,j,temp=0,temp1=0,sum=0,sum1=0,r,r1,add=0,add1=0;
    long int n,m;
    printline('*');
    printf("\t\t\t\tWELCOME\n\t\t\t\t    TO\n\t\t\t\t\tKONNECKTION \n\t\t\t\t\t\tKRISS-KROSS\n\n");
    printline('|');
    printf("THERE TWO MODES \n\t\t1.NUMBER CONNECTION \n\t\t2.NAME CONNECTION\n\n");
    printf("ENTER THE MODE : ");
    gets(str);
    if(strcmp(str,"NUMBER CONNECTION")==0||strcmp(str,"number connection")==0)
    {
    printline('-');
    printf("\t\t\t\t\t\t\tNUMBEROLOGY \n\n");
    printline('|');
    printf("\n(1.) ENTER YOUR BIRTH DATE(dd/mm/yy) :  ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        c1[i] = ch[i];
    }
    c1[i]='\0';
    for(i=0;ch[i]!='\0';i++)
    {
       while(!((ch[i]>='1'&& ch[i]<='12')||ch[i]=='\0'))
       {
           for(j=i;ch[j]!='\0';j++)
           {
               ch[j] = ch[j+1];
           }
           ch[j]='\0';
       }


    }
    //ch[i]='\0';
    printline('*');
    printf(" YOUR CODE : ");
    puts(ch);
    //c1[i] = ch[i];
    printf("\n\t\t\t*CAUTION* \nCAREFULLY PUT YOUR CODE OTHERWISE IT WILL GIVE A BUG \nENTER THE ABOVE CODE HERE : ");
    scanf("%ld",&n);
    printline('*');



    while(n>0)
    {
        r = n%10;
        sum = sum+r;
        n = n/10;
    }
    //printf("%ld",sum);
    if(sum>=10)
    {
        while(sum>0)

        {
        r = sum%10;
        temp = temp+r;
        sum = sum/10;
        }

          if(temp>=10)
        {
            while(temp>0)

               {
                r = temp%10;
                add = add+r;
                temp = temp/10;
               }
        printf("LUCKY NUMBER : %d\n",add);
         switch(add)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
        else
        {
            printf("LUCKY NUMBER : %d\n",temp);

         switch(temp)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
    }
    else
    {

    printf("LUCKY NUMBER : %d\n",sum);
     switch(sum)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }

    }


    //else

        //printf("*ERROR*");


    printf("\n");
    printline('|');
    printf("\n(2.) ENTER YOUR BIRTH DATE(dd/mm/yy) :  ");
    fflush(stdin);
    gets(hc);
    for(i=0;hc[i]!='\0';i++)
    {
        h1[i] = hc[i];
    }
    h1[i] = '\0';
    for(i=0;hc[i]!='\0';i++)
    {
       while(!((hc[i]>='1'&& hc[i]<='12')||hc[i]=='\0'))
       {
           for(j=i;hc[j]!='\0';j++)
           {
               hc[j] = hc[j+1];
           }
           hc[j]='\0';
       }


    }
    //ch[i]='\0';
    printline('*');
    printf(" YOUR CODE : ");
    puts(hc);
    printf("\n\t\t\t*CAUTION* \nCAREFULLY PUT YOUR CODE OTHERWISE IT WILL GIVE A BUG \nENTER THE ABOVE CODE HERE : ");
    scanf("%ld",&m);
    printline('*');
    //if(m==hc[i])


    while(m>0)
    {
        r1 = m%10;
        sum1 = sum1+r1;
        m = m/10;
    }
    //printf("%ld",sum);
    if(sum1>=10)
    {
        while(sum1>0)

        {
        r1 = sum1%10;
        temp1 = temp1+r1;
        sum1 = sum1/10;
        }
         if(temp1>=10)
        {
            while(temp1>0)

               {
                r1 = temp1%10;
                add1 = add1+r1;
                temp1 = temp1/10;
               }
        printf("LUCKY NUMBER : %d\n",add1);
         switch(add1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
        else
        {
            printf("LUCKY NUMBER : %d\n",temp1);

         switch(temp1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
    }
    else
    {

    printf("LUCKY NUMBER : %d\n",sum1);
     switch(sum1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }

    }

    printf("\n");
    print();
    name(c1);
    match(temp,temp1);
    match(temp,sum1);
    match(temp,add1);
    match(sum,temp1);
    match(sum,add1);
    match(sum,sum1);
    match(add,temp1);
    match(add,sum1);
    match(add,add1);
    printf("\n");
    printline('+');
    name(h1);
    con(temp1,temp);
    con(temp1,sum);
    con(temp1,add);
    con(sum1,temp);
    con(sum1,add);
    con(sum1,sum);
    con(add1,temp);
    con(add1,sum);
    con(add1,add);

    prince();
    }
    else if(strcmp(str,"NAME CONNECTION")==0||strcmp(str,"name connection")==0)
    {
        printline('-');
        printf("\t\t\t\t\t\t\tNAMEOLOGY \n\n");
        printline('|');
         printf("\n(1.)ENTER YOUR NAME :  ");
        gets(ch);
        for(i=0;ch[i]!='\0';i++)
        {
            c1[i] = ch[i];
        }
        c1[i]='\0';
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='A'||ch[i]=='a'||ch[i]=='I'||ch[i]=='i'||ch[i]=='j'||ch[i]=='J'||ch[i]=='Q'||ch[i]=='q'||ch[i]=='Y'||ch[i]=='y')
            {
                op[i] = '1';
            }
            else if(ch[i]=='B'||ch[i]=='b'||ch[i]=='K'||ch[i]=='k'||ch[i]=='R'||ch[i]=='r')
            {
               op[i]  = '2';
            }
            else if(ch[i]=='C'||ch[i]=='c'||ch[i]=='G'||ch[i]=='g'||ch[i]=='L'||ch[i]=='l'||ch[i]=='s'||ch[i]=='S')
            {
                op[i] = '3';
            }
            else if(ch[i]=='D'||ch[i]=='d'||ch[i]=='M'||ch[i]=='m'||ch[i]=='T'||ch[i]=='t')
            {
                op[i] = '4';
            }
            else if(ch[i]=='E'||ch[i]=='e'||ch[i]=='H'||ch[i]=='h'||ch[i]=='N'||ch[i]=='n'||ch[i]=='X'||ch[i]=='x')
            {
                op[i] = '5';
            }
            else if(ch[i]=='U'||ch[i]=='u'||ch[i]=='V'||ch[i]=='v'||ch[i]=='W'||ch[i]=='w')
            {
                op[i] = '6';
            }
            else if(ch[i]=='O'||ch[i]=='o'||ch[i]=='Z'||ch[i]=='z')
            {
                op[i] = '7';
            }
            else if(ch[i]=='F'||ch[i]=='f'||ch[i]=='P'||ch[i]=='p')
            {
                op[i] = '8';
            }
            else
            {
              ch[i] = ch[i];
            }
        }
        op[i] = '\0';


    printf("YOUR CODE: ");
    puts(op);
    printf("\n\t\t\t*CAUTION* \nCAREFULLY PUT YOUR CODE OTHERWISE IT WILL GIVE A BUG \nENTER THE ABOVE CODE HERE : ");
    scanf("%ld",&n);
    printline('*');
    //if(n==op[i])


    while(n>0)
    {
        r = n%10;
        sum = sum+r;
        n = n/10;
    }
    //printf("%ld",sum);
    if(sum>=10)
    {
        while(sum>0)

        {
        r = sum%10;
        temp = temp+r;
        sum = sum/10;
        }
        if(temp>=10)
        {
            while(temp>0)

               {
                r = temp%10;
                add = add+r;
                temp = temp/10;
               }
        printf("LUCKY NUMBER : %d\n",add);
         switch(add)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
        else
        {
            printf("LUCKY NUMBER : %d\n",temp);

         switch(temp)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
    }
    else
    {

    printf("LUCKY NUMBER : %d\n",sum);
     switch(sum)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }

    }

            printf("\n");
        printline('|');
         printf("\n(2.) ENTER YOUR NAME :  ");
         fflush(stdin);
        gets(p);
        for(i=0;p[i]!='\0';i++)
        {
            h1[i]=p[i];
        }
        h1[i]='\0';
        for(i=0;p[i]!='\0';i++)
        {
            if(p[i]=='A'||p[i]=='a'||p[i]=='I'||p[i]=='i'||p[i]=='j'||p[i]=='J'||p[i]=='Q'||p[i]=='q'||p[i]=='Y'||p[i]=='y')
            {
                oq[i] = '1';
            }
            else if(p[i]=='B'||p[i]=='b'||p[i]=='K'||p[i]=='k'||p[i]=='R'||p[i]=='r')
            {
               oq[i]  = '2';
            }
            else if(p[i]=='C'||p[i]=='c'||p[i]=='G'||p[i]=='g'||p[i]=='L'||p[i]=='l'||p[i]=='s'||p[i]=='S')
            {
                oq[i] = '3';
            }
            else if(p[i]=='D'||p[i]=='d'||p[i]=='M'||p[i]=='m'||p[i]=='T'||p[i]=='t')
            {
                oq[i] = '4';
            }
            else if(p[i]=='E'||p[i]=='e'||p[i]=='H'||p[i]=='h'||p[i]=='N'||p[i]=='n'||p[i]=='X'||p[i]=='x')
            {
                oq[i] = '5';
            }
            else if(p[i]=='U'||p[i]=='u'||p[i]=='V'||p[i]=='v'||p[i]=='W'||p[i]=='w')
            {
                oq[i] = '6';
            }
            else if(p[i]=='O'||p[i]=='o'||p[i]=='Z'||p[i]=='z')
            {
                oq[i] = '7';
            }
            else if(p[i]=='F'||p[i]=='f'||p[i]=='P'||p[i]=='p')
            {
                oq[i] = '8';
            }
            else
            {
              p[i] = p[i];
            }
        }
        oq[i] = '\0';


    printf("YOUR CODE: ");
    //fflush(stdin);
    puts(oq);
    printf("\n\t\t\t*CAUTION* \nCAREFULLY PUT YOUR CODE OTHERWISE IT WILL GIVE A BUG \nENTER THE ABOVE CODE HERE : ");
    //fflush(stdin);
    scanf("%ld",&m);
    printline('*');
    //if(m==oq[i])


    while(m>0)
    {
        r1 = m%10;
        //fflush(stdin);
        sum1 = sum1+r1;
        m = m/10;
    }
    //printf("%ld",sum);
    if(sum1>=10)
    {
        while(sum1>0)

        {
        r1 = sum1%10;
        temp1 = temp1+r1;
        sum1 = sum1/10;
        }
        if(temp1>=10)
        {
            while(temp1>0)

               {
                r = temp1%10;
                add1 = add1+r;
                temp1 = temp1/10;
               }
        printf("LUCKY NUMBER : %d\n",add1);
         switch(add1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }
        else
        {
            printf("LUCKY NUMBER : %d\n",temp1);

         switch(temp1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }
        }


    }
    else
    {

    printf("LUCKY NUMBER : %d\n",sum1);
     switch(sum1)
        {
            case 1: printf("\nRULING PLANET : SUN");break;
            case 2: printf("\nRULING PLANET : MOON");break;
            case 3: printf("\nRULING PLANET : JUPITER");break;
            case 4: printf("\nRULING PLANET : RAHU ");break;
            case 5: printf("\nRULING PLANET : MERCURY");break;
            case 6: printf("\nRULING PLANET : VENUS");break;
            case 7: printf("\nRULING PLANET : KETU");break;
            case 8: printf("\nRULING PLANET : SATURN");break;
            case 9: printf("\nRULING PLANET : MARS");break;
            default:printf("Invalid");break;
        }

    }

     printf("\n");
    print();
    nam(c1);
    match(temp,temp1);
    match(temp,sum1);
    match(temp,add1);
    match(sum,temp1);
    match(sum,add1);
    match(sum,sum1);
    match(add,temp1);
    match(add,sum1);
    match(add,add1);
    printf("\n");
    printline('+');
    nam(h1);
    con(temp1,temp);
    con(temp1,sum);
    con(temp1,add);
    con(sum1,temp);
    con(sum1,add);
    con(sum1,sum);
    con(add1,temp);
    con(add1,sum);
    con(add1,add);




    prince();
    }
    else if(strcmp(str,"prince")==0||strcmp(str,"PRINCE")==0)
    {
        printf("\t\t\t\t*PROGRAMMER MODE IS ON*");
        prince();
    }

else{

    printf("\nPLEASE CHECK SPELLING \n");
    prince();

    }
    return 0;


}
void printline(char ch)
{
    int k;
    for(k=0;k<120;k++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
void prince(void)
{
    printf("\n\n\n\t\t\t\t\tPROGRAMMED AND DEVELOP BY\n\t\t\t\t\tMR.PRUTHVI TIRMAL \n\t\t\t\t\tVERSION 1.1");
}

void print(void)
{
    printf("\n");
    printline('|');
    printf("*WHAT IS YOUR COMPATBILITY/UNDERSTANDING TOWARDS THAT PERSON*\n");
    printf("HOW WELL YOU UNDERSTAND THAT PERSON\n\n");
    printline('*');
}
void match(int mul,int rp)
{
    printf("\n");
    if(mul==1)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(mul==2)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(mul==3)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(mul==4)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(mul==5)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(mul==6)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(mul==7)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(mul==8)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(mul==9)
    {
        switch(rp)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else
    {
       printf("\t\t\t\t\t*");
    }





}

void con(int lum,int pr)
{
    printf("\n");
    if(lum==1)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(lum==2)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(lum==3)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(lum==4)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(lum==5)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(lum==6)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(lum==7)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
        }

    }
    else if(lum==8)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else if(lum==9)
    {
        switch(pr)
        {
            case 1: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 2: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 3: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 9: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS NORMAL..");break;
            case 5: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 7: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS BEST..");break;
            case 4: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 6: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
            case 8: printf("YOUR COMPATBILITY/UNDERSTANDING WITH THAT PERSON IS WORST..");break;
        }

    }
    else
    {
        printf("\t\t\t\t\t*");
    }



}

void name(char h[100])
{
    printf("\nFOR BIRTH DATE  : %s\n\n",h);
    //printf("\n");
    printline('+');
    printf("( COMPATIBILITY/UNDERSTANDING CHECKED TOWARD THAT PERSON ).\n\n");
    printline('|');
}

void nam(char a[100])
{
    printf("\nFOR NAME : %s\n\n",a);
    //printf("\n");
    printline('+');
    printf("( COMPATIBILITY/UNDERSTANDING CHECKED TOWARD THAT PERSON ).\n\n");
    printline('|');
}



