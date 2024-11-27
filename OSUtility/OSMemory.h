//
//  OSMemory.h
//  Logger
//
//  Created by Simon Gornall on 11/26/24.
//

#ifndef OSMemory_h
#define OSMemory_h

#define FREE(x) 														\
	do																	\
		{																\
		if ((x) != NULL)												\
			{															\
			free(x);													\
			}															\
		x = NULL;														\
		}																\
	while (NO)

#define CFRELEASE(x)													\
	do																	\
		{																\
		if ((x) != NULL)												\
			{															\
			CFRelease(x);												\
			}															\
		x = NULL;														\
		}																\
	while (NO)

#define CGIMAGERELEASE(x)												\
	do																	\
		{																\
		if ((x) != NULL)												\
			{															\
			CGImageRelease(x);											\
			}															\
		x = NULL;														\
		}																\
	while (NO)

#endif /* OSMemory_h */
