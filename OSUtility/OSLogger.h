//
//  OSLogger.h
//  OSUtility
//
//  Created by Simon Gornall on 11/26/24.
//

#import <Foundation/Foundation.h>
#include <os/log.h>

NS_ASSUME_NONNULL_BEGIN

/*****************************************************************************\
|* Define levels. Default is set to LOG_LOG_THRESHOLD
\*****************************************************************************/

#define LOG_DBG_THRESHOLD		30
#define LOG_LOG_THRESHOLD		20
#define LOG_INFO_THRESHOLD		10
#define LOG_ERROR_THRESHOLD		0

#define ERROR(fmt, ...) 												\
	{ 																	\
	if (OSLogger.logLevel > LOG_ERROR_THRESHOLD)						\
		os_log_error(OSLogger.channel, fmt, ##__VA_ARGS__); 			\
	}

#define LOG(fmt, ...) 													\
	{ 																	\
	if (OSLogger.logLevel > LOG_LOG_THRESHOLD)							\
		os_log(OSLogger.channel, fmt, ##__VA_ARGS__); 					\
	}

#define INFO(fmt, ...) 													\
	{ 																	\
	if (OSLogger.logLevel > LOG_INFO_THRESHOLD)							\
		os_log_info(OSLogger.channel, fmt, ##__VA_ARGS__); 				\
	}

#define DBG(fmt, ...) 													\
	{ 																	\
	if (OSLogger.logLevel > LOG_DBG_THRESHOLD)							\
		os_log_debug(OSLogger.channel, fmt, ##__VA_ARGS__); 			\
	}

@interface OSLogger : NSObject

/*****************************************************************************\
|* Allow changing/checking the log-level property
\*****************************************************************************/
+ (int)logLevel;
+ (void) setLogLevel:(int)level;

+ (os_log_t) channel;

@end

NS_ASSUME_NONNULL_END
