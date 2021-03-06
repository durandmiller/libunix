#ifndef _SYS_TIMES_H
#define _SYS_TIMES_H		1


#include <sys/types.h>


struct tms
{
	clock_t  tms_utime;
	clock_t  tms_stime;
	clock_t  tms_cutime;
	clock_t  tms_cstime;
};


#ifdef __cplusplus
extern "C" {
#endif
		

clock_t times(struct tms *);

#ifdef __cplusplus
}
#endif
		



#endif

