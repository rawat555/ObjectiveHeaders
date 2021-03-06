/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate {
@private
	UIView* _containerView;
}
@property(retain, nonatomic) UIView* containerView;	// @synthesize=_containerView
-(id)initWithCoder:(id)coder;
// declared property getter: -(id)containerView;
-(void)dealloc;
-(id)defaultSegueClassName;
-(void)encodeWithCoder:(id)coder;
-(id)segueWithDestinationViewController:(id)destinationViewController;
// declared property setter: -(void)setContainerView:(id)view;
@end

