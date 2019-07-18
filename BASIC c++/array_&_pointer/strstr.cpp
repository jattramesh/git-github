#include <string.h>
namespace Myscope
{
    char *strstr(const char *s,const char *s2)
    {
        int len=strlen(s2);
        for(;*s!='\0';++s)
            if(strncmp(s,s2,len)==0)
                return (char *)s1;\

                return NULL;
    }
}