/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface EKPreviewSection : XXUnknownSuperclass {
@private
	NSArray* _events;
	XXStruct_lQVxyC _date;
}
@property(assign, nonatomic) XXStruct_lQVxyC date;	// @synthesize=_date
@property(readonly, assign, nonatomic) NSArray* events;	// @synthesize=_events
+(id)sectionWithDate:(XXStruct_lQVxyC)date;
-(id)initWithDate:(XXStruct_lQVxyC)date;
-(void)addEvent:(id)event;
// declared property getter: -(XXStruct_lQVxyC)date;
-(void)dealloc;
// declared property getter: -(id)events;
// declared property setter: -(void)setDate:(XXStruct_lQVxyC)date;
@end

