/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)content didCreateOccurrenceViews:(id)views;
-(void)dayViewContent:(id)content didSelectEvent:(id)event;
-(void)emptySpaceClickForDayViewContent:(id)dayViewContent onDay:(double)day;
-(void)occurrenceDragExited:(id)exited;
-(void)occurrencePressed:(id)pressed onDay:(double)day;
@end
