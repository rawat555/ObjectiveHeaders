/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : XXUnknownSuperclass <NSCopying> {
@private
	NSString* _name;
	void* _internal;
	long _lastStart;
	long _lastEnd;
	unsigned _lastIndex;
	double _offset;
}
+(id)timeZoneWithNSTimeZone:(id)nstimeZone;
+(id)timeZoneWithName:(id)name;
-(id)initWithName:(id)name;
-(id)initWithOffset:(double)offset name:(id)name;
-(id)NSTimeZone;
-(id)_abbreviationForIndex:(unsigned)index;
-(unsigned)_indexForAbsoluteTime:(double)absoluteTime;
-(id)abbreviation;
-(id)abbreviationForAbsoluteTime:(double)absoluteTime;
-(id)abbreviationForDate:(id)date;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)name;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;
-(double)secondsFromGMT;
-(double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;
-(double)secondsFromGMTForDate:(id)date;
@end

