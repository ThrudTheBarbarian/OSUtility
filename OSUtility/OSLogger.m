//
//  OSLogger.m
//  OSUtility
//
//  Created by Simon Gornall on 11/26/24.
//

#import "OSLogger.h"

static os_log_t channel;
static int _logLevel = LOG_LOG_THRESHOLD;

@implementation OSLogger

/*****************************************************************************\
|* Define the channel
\*****************************************************************************/
+ (os_log_t)channel
	{
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken,
		^{
		channel = os_log_create("net.moebius.tech", "global");
		});
	return channel;
	}

+ (int)logLevel
	{
	return _logLevel;
	}

+ (void) setLogLevel:(int)level
	{
	_logLevel = level;
	}

@end
