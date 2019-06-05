 #include<stdio.h>
 #include<string.h>
char reverse(char s[]);
 int main()
 {
  char l[10]={"rahulbeni"};
reverse(l);
 }
char  reverse(char s[])
 {
   int c,i,j;
   for(i=0,j=strlen(s)-1;i<j ||i>j ;i++,j--)
   {
     c=s[i];
     s[i]=s[j];
     s[j]=c;
   }//c=s[i],s[i]=s[j],s[j]=c;
   printf("%s",s);
 }
