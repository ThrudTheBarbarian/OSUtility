//
//  OSHardware.h
//  Astronomancy
//
//  Created by Simon Gornall on 11/25/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OSHardware : NSObject

/*****************************************************************************\
|* Return the number of CPUs on this machine
\*****************************************************************************/
+ (int) numberOfCPUs;


@end

NS_ASSUME_NONNULL_END
