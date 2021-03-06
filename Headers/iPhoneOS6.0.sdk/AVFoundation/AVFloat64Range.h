/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVFloat64Range : XXUnknownSuperclass <NSCopying> {
@private
	double _minimum;
	double _maximum;
}
@property(readonly, assign, nonatomic) double maximum;	// @synthesize=_maximum
@property(readonly, assign, nonatomic) double minimum;	// @synthesize=_minimum
+(id)float64RangeWithAudioValueRange:(AudioValueRange)audioValueRange;
+(id)float64RangeWithMinimum:(double)minimum maximum:(double)maximum;
-(id)initWithAudioValueRange:(AudioValueRange)audioValueRange;
-(id)initWithMinimum:(double)minimum maximum:(double)maximum;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(double)maximum;
// declared property getter: -(double)minimum;
@end

