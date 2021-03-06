/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"

@class EKTextViewWithLabelTextMetrics, UILabel;

__attribute__((visibility("hidden")))
@interface EKEventDetailTitleCell : EKEventDetailCell {
@private
	UILabel* _titleView;
	EKTextViewWithLabelTextMetrics* _locationView;
	UILabel* _dateView;
	UILabel* _timeView;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
}
-(id)_dateView;
-(id)_locationView;
-(id)_recurrenceView;
-(id)_statusView;
-(id)_timeView;
-(id)_titleView;
-(void)dealloc;
-(void)layoutForWidth:(float)width position:(int)position;
-(void)setDateString:(id)string;
-(void)setLocation:(id)location;
-(void)setRecurrenceString:(id)string;
-(void)setStatusString:(id)string;
-(void)setTimeString:(id)string;
-(void)setTitle:(id)title;
-(BOOL)update;
@end

