/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ALPHABETA_H_RPCGEN
#define _ALPHABETA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define ALPHABETAPROG 0x20000001
#define ALPHABETAVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define ALPHABETA 1
extern  int * alphabeta_1(char **, CLIENT *);
extern  int * alphabeta_1_svc(char **, struct svc_req *);
extern int alphabetaprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ALPHABETA 1
extern  int * alphabeta_1();
extern  int * alphabeta_1_svc();
extern int alphabetaprog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ALPHABETA_H_RPCGEN */
