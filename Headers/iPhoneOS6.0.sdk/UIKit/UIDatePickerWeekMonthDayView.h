/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView {
@private
	UILabel* _dateLabel;
	UILabel* _weekdayLabel;
	float _weekdayWidth;
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _datePickerWeekMonthDayViewFlags;
}
@property(readonly, assign, nonatomic) UILabel* dateLabel;	// @synthesize=_dateLabel
@property(readonly, assign, nonatomic) UILabel* weekdayLabel;	// @synthesize=_weekdayLabel
@property(assign, nonatomic) BOOL weekdayLast;
@property(assign, nonatomic) float weekdayWidth;	// @synthesize=_weekdayWidth
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(id)dateLabel;
-(void)dealloc;
-(void)layoutSubviews;
// declared property setter: -(void)setWeekdayLast:(BOOL)last;
// declared property setter: -(void)setWeekdayWidth:(float)width;
// declared property getter: -(id)weekdayLabel;
// declared property getter: -(BOOL)weekdayLast;
// declared property getter: -(float)weekdayWidth;
@end
