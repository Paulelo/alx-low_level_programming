#ifndef ABS
#define ABS(x)
	#if ABS(x) == -x
		#define ABS(x) -x
	#else
		#define ABS(x) x

#endif /* ABS(x) */
