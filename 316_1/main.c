#include "common.h"
#include "project.h"

int main()
{
    int x, y;
    char c;
    initialize();
    do{
        scanf("%d,%d",&x,&y);
        fflush(stdin);
        exch(&x,&y);
        //swap(&x,&y);
        printf("x= %d y= %d\n",x,y);
        printf("¼ÌÐø²âÊÔÂð£¿(y/n):");
    }while(yesOrNo(c=getchar()));

    return 0;
}
