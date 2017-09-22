#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h> 

int main()
pid_t pid = fork();
if (pid < 0) {
	printf("program err\n"); 
	return 1;
}

if (pid){				
	int status;
	waitpid(pid,&status,0);		
	printf("exit = %d\n",WEXITSTATUS(status)); 
}else{					
	execvp("./source",NULL)		
					
}

return 0;


}
