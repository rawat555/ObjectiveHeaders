/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "NSCoding.h"
#import "CoreMotion-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"


@interface CMLogItem : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	id _internalLogItem;
}
@property(readonly, assign, nonatomic) double timestamp;
-(id)initWithCoder:(id)coder;
-(id)initWithTimestamp:(double)timestamp;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(double)timestamp;
@end

