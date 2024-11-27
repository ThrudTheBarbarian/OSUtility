//
//  Hardware.m
//  OSUtility
//
//  Created by Simon Gornall on 11/25/24.
//

#include <sys/types.h>
#include <sys/sysctl.h>

#import "OSHardware.h"

@implementation OSHardware

/*****************************************************************************\
|* Return the number of CPUs on this machine
\*****************************************************************************/
+ (int) numberOfCPUs
	{
	int count;
	size_t count_len = sizeof(count);
	sysctlbyname("hw.logicalcpu", &count, &count_len, NULL, 0);
	return count;
	}

@end
