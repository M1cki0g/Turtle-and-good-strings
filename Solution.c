#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{ int t,n,i;

scanf("%d",&t);

while(t--){
    scanf("%d",&n);
char s[n];


    scanf("%s",s);
    char l1 = s[0];
    char l2 = s[n-1];

    if(l1 == l2)
        printf("No\n");
    else
        printf("Yes\n");
}
    return 0;
}
