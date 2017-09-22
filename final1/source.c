#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
int x;
int y = 1234;
printf("password ");
scanf("%d",&x);
if (x==y) {
	printf("welcome \n");
}else{
	exit(-1);
}

return 0;
}
