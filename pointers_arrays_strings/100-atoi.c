#include "main.h"
int _atoi(char *s){int i=0,sign=1,res=0,started=0;while(s[i]){if(s[i]=='-'&&!started)sign=-sign;else if(s[i]=='+'&&!started){}else if(s[i]>='0'&&s[i]<='9'){started=1;break;}i++;}while(s[i]>='0'&&s[i]<='9'){res=res*10-(s[i]-'0');i++;}if(!started)return 0;return sign==1?-res:res;}
