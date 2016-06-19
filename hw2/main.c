// problem 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main(int argc, char *argv[]){
  char s1[100];
  char s2[100];
  size_t len;
  if (argc != 3){
    printf("This is the palindrome program \n");
    printf("Usage: ./palindrome string1 string2 \n");
    exit(0);
  }
  strncpy(s1, argv[1], sizeof(s1)); // Changed (Jan 22 @4:39PM)
  len = strlen(s1); // since they should be the same size
  strncpy(s2, argv[2], len);
  
  // do palindrome check
  if (strcmp (s1,s2) == 0) // they should be the same right?
  {
  strrev(s2);
  if (strcmp (s1,s2) == 0)  // make sure same when reversed
    printf("This is a palindrome.\n");
  else 
    printf("Not a palindrome.\n");
  }
}

// Problem 2:
//#include <stdio.h>
//
//#if defined ( HAVE_SYSLOG_H ) && defined ( USE_SYSLOG )
//	extern Display *dsp;
//	
//	syslog(SYSLOG_WARNING, buf);
//	if (!nolock) {
//		if (strstr(buf, "unable to open display") == NULL )
//			syslogStop(XDisplayString(dsp));
//		closelog();
//	}
//#else
//	(void) fprintf(stderr,buf);
//#endif
//	exit(1);
//}
