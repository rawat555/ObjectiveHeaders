/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardDicationBackgroundGradientView, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackground : UIView {
@private
	UIKeyboardDicationBackgroundGradientView* _gradient;
	NSArray* _shadows;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(id)shadows;
@end

