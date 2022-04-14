#ifndef __DEBUG_LOG_H__
#define __DEBUG_LOG_H__


// Include session
#include <stdio.h>

// Define sesion
#if ( DEBUG_ENABLE == 1 )	
	#define LOG_ERROR(fmt, ...) \
		fprintf(stdout, "[Error - file: %s - line: %d:] " fmt, \
			__FILE__, __LINE__, __VA_ARGS__);	
				
	#if ( ENABLE_LOG_INFO == 1 )
		#define LOG_WARN(fmt, ...) \
			fprintf(stdout, "[Warning - file: %s - line: %d:] " fmt, \
				__FILE__, __LINE__, __VA_ARGS__);
		#define LOG_INFO(fmt, ...) \
			fprintf(stdout, "[Info - file: %s - line: %d:] " fmt, \
				__FILE__, __LINE__, __VA_ARGS__);							
	#endif //( ENABLE_LOG_INFO == 1 )	
	
	//ENABLE_WARN
	#if ( ENABLE_LOG_WARN == 1 )
		#define LOG_WARN(fmt, ...) \
			fprintf(stdout, "[Warning - file: %s - line: %d:] " fmt, \
				__FILE__, __LINE__, __VA_ARGS__);	
		#define LOG_INFO(...)	

	#endif //( ENABLE_LOG_WARN == 1 )	
#else
	#define LOG_INFO(...)
	#define LOG_WARN(...)
	#define LOG_ERROR(...)
#endif //#if ( DEBUG_ENABLE == 1 )

#endif // __DEBUG_LOG_H__
