#include <sys/sysproto.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/proc.h>
#include <sys/sysent.h>

#ifndef _SYS_SYSPROTO_H_
struct gift_args{
pid_t pid ;
int t;

};
#endif 
int sys_gift(struct thread *td ,struct gift_args *args){
pid_t p;
pid_t p= args->pid;
int Transfred_tickets;
Transfred_tickets=args->t;
int processTickets;
uid_t processOwner; 
processOwner=td->td_proc->p_ucred->cr_uid;
PROC_LOCK(pid);
processTickets=pid->tickets;
if (processOwner!=0)
	exit();
else{
	if(pid==0 && 
	}	
td->td_retval[0]=a+b ; 
return 0; 
}
