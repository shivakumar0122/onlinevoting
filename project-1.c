#include <stdio.h>
    #include<stdlib.h>
    #include<string.h>
#define max 100

typedef struct {
    int num;
    char name[max];
    char sym;
    int novote;
}candi;
typedef struct {
    int votid;
    char votname[max];
    char chosym;
    
}votmem;

candi s[10];

votmem vid[100];

void display(int k,char s[])
{ 
    printf("\t\t\tName : %s  %d symbol %c\n",s,k,'!'+k-1);
    //
}
void fillcandi(int n){
 printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("*");
}
printf("\n");
 
int ch[n],k;
char shiva[max];
for(int j=0;j<n;j++)
{ 
     printf("\t\t\tEnter name of the %d Candidate  :",j+1);
     s[j].num=j+1;
     scanf("%s",shiva);
     strcpy(s[j].name,shiva);
     printf("\t\t\tSymbols:\n");
    
    for(int i=1;i<=10;i++)
   { 
       printf("\t\t\t%d.symbol %c\n",i,'!'+i-1);
   }
   
    printf("\t\t\tChoose the symbol:");
  
    int flag=0;
    reenter:
    scanf("%d",&k);
    ch[j]=k;
    s[j].sym='!'+k-1;
    int t=ch[j];

     for(int i=0;i<=n;i++)
   {  if(t==ch[i])
     flag++;
    }
    if(flag>=2)
    {printf("\t\t\tAlready enter chioce...Please Enter Another Chioce..");
    flag=0;
 goto reenter;
    }
    else flag=0;
 
 
   display(k,s[j].name);   
}
}
    
void list(int n)
{
    printf("\t\t\tsl.no\tName\tSymbol:\n");
    for(int i=0;i<n;i++)
    printf("\t\t\t%d\t%s\t%c\n",s[i].num,s[i].name,s[i].sym);
}
void cast(int n)
{
    int num=0,k;
    printf("\t\t\tEnter Your last Three Digits Of Your Rollnumber:");
    scanf("%d",&num);

    if(num>=700&&num<=800)
    {
        num=num-700;
     if(vid[num].votid==0){      
        printf("\t\t\tYour are Elegible to Vote\n");
        printf("\t\t\tPlease Enter Your Name:");
        vid[num].votid=num;
        scanf("%s",vid[num].votname);
        list(n);
        printf("\t\t\tEnter the number of the person You want vote:");
        scanf("%d",&k);
        s[k-1].novote++;
        printf("\n\t\t\tThank you for Voting\n.");
        printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("*");
}
printf("\n");
    }
    else 
    {
    printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("=");
}
printf("\n");    
    
    printf("\t\t\tYou already Your Casted Your Vote\n");
    printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("=");
}
printf("\n");
}
}
else
{printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("=");
}
printf("\n");
    printf("\n\t\t\tYou are Not Eligible to Vote\n");
    printf("\t\t\t");
    for(int i=0;i<80;i++)
{printf("=");
}
printf("\n");
}
}
void result(int n)
{
    int ma=0,t;
    printf("\t\t\tName\tSymbol\tNoofVotes\n");
    for(int i=0;i<10;i++){
    if(s[i].num!=0)
        
    {
        printf("\t\t\t%d\t%s\t%c\t%d\n",s[i].num,s[i].name,s[i].sym,s[i].novote);
        
    }
        
        
    }

    // for(int i=0;i<10;i++)
    // {
    //     if(s[i].num!=0)
    //     {
    //         printf("\t\t\t%d\t%s\t%c\t%d\n",s[i].num,s[i].name,s[i].sym,s[i].novote);
    //         if(s[i].novote>ma)
    //         {
    //             ma=s[i].novote;
    //             i=t;
    //         }
    //     }
    // }
    // printf("\t\t%d\t%s with Symbol %c WON the POLL with %d votes",s[t].num,s[t].name,s[t].sym,ma);
}

int main()
{
      printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("=");
}
printf("\n");
    int n;
    printf("\t\t\tEnter number of Candidates are Participating(Below 10):");
    scanf("%d",&n);
 //   for(int i=1;i<=n;i++)
    fillcandi(n);

int s;
while(s!=4)
{   
    printf("\t\t\t");
    for(int i=0;i<50;i++)
{printf("=");

}
 printf("\n\t\t\tPlease Select any One of the Option\n");
 printf("\t\t\t1.List of the Candidates\n\t\t\t2.To cast Vote\n\t\t\t3.Result\n\t\t\t4.Exit\n");
 printf("\t\t\t");
 for(int i=0;i<50;i++)
{printf("=");
//printf("-");
}
printf("\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:list(n);break;
        case 2:cast(n);break;
        case 3:result(n);break;
    }
    
}
    return 0;
}