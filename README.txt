rpcinfo

rpcgen alphabeta.x
rpcgen ab.x
rpcgen ab1.x

gcc client.c alphabeta_clnt.c -o client  -lnsl
gcc server1.c  alphabeta_svc.c ab_clnt.c -o server1 -lnsl -lm
gcc ab_server.c ab_svc.c ab1_clnt.c -o server2 -lnsl -lm
gcc ab1_server.c  ab1_svc.c -o server3 -lnsl -lm


./server1
./server2
./server3
./client