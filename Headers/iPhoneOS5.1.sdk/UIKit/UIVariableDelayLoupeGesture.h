/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILongPressGestureRecognizer.h"
#import "UIVariableDelayLoupeGesture.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
@private
	UIView<UITextSelectingContainer>* _textView;
}
@property(assign) UIView<UITextSelectingContainer>* textView;	// @synthesize=_textView
-(BOOL)isCloseToCaret;
// declared property setter: -(void)setTextView:(id)view;
-(void)startTimer;
// declared property getter: -(id)textView;
@end

@interface UIVariableDelayLoupeGesture (UITextInteractionAssistantAdditions)
-(void)invalidate;
@end
