#include<stdio.h>
#include<stdlib.h>
int main()
{
      int n=0;
      char fname[30],ch;
      FILE *fp;
      printf("\n Enter file name : ");
      gets(fname);
      fp=fopen(fname,"r");
      if(fp==NULL)
      {
            printf("\n ");
            exit(0);
      }
      ch=fgetc(fp);
      while(ch!=EOF)
      {
            if(ch=='$')
{
n++;
} 
}
      fclose(fp);
printf("%d" ,n);
      return 0;

}

