#include <stdio.h>
#include <time.h>
#include "alphabeta.h"


void main(int argc, char const *argv[])
{
	CLIENT *clnt;
	char* s="0";
	int *result;
	char *server="127.0.0.1";
	clock_t start, end;
    double cpu_time_used;

    clnt=clnt_create(server,ALPHABETAPROG,ALPHABETAVERS	,"tcp");
	if (clnt == (CLIENT *)NULL) 
	{
		clnt_pcreateerror(server);
		exit(1);
	}


    
    start = clock();
	result=alphabeta_1(&s,clnt);
	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    if (result == (int *)NULL) {
		clnt_perror(clnt, server);
		exit(1);
	}


	printf("The return value is %d calculated in %f seconds\n",*result,cpu_time_used);

}