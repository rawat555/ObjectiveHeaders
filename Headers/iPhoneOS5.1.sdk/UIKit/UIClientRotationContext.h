/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UISnapshotView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : XXUnknownSuperclass {
@private
	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _orderKeyboardInAfterRotating;
	BOOL _skipFooterRotation;
	BOOL _skipHeaderRotation;
	int _fromOrientation;
	int _toOrientation;
	float _duration;
	UISnapshotView* _headerSnapshotViewStart;
	UISnapshotView* _footerSnapshotViewStart;
	UISnapshotView* _contentSnapshotViewStart;
	float _contentTopAdjustmentStart;
	id _rotatingClient;
	XXStruct_tXAZTC _rotationSettings;
	float contentBottomInset;
	UIWindow* _window;
}
@property(readonly, assign, nonatomic) UIView* contentView;	// @synthesize=_contentView
@property(readonly, assign, nonatomic) float duration;	// @synthesize=_duration
@property(readonly, assign, nonatomic) int fromOrientation;	// @synthesize=_fromOrientation
@property(readonly, assign, nonatomic) id rotatingClient;	// @synthesize=_rotatingClient
@property(readonly, assign, nonatomic) int toOrientation;	// @synthesize=_toOrientation
-(id)initWithClient:(id)client toOrientation:(int)orientation duration:(float)duration andWindow:(id)window;
-(BOOL)_isFooterTranslucent;
-(BOOL)_isHeaderTranslucent;
-(void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;
-(void)_slideFooterWithStartSnapshot:(id)startSnapshot endSnapshot:(id)snapshot duration:(double)duration;
-(void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(id)contentView;
-(void)dealloc;
// declared property getter: -(float)duration;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)animation;
// declared property getter: -(int)fromOrientation;
-(void)rotateSnapshots;
// declared property getter: -(id)rotatingClient;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)afterRotation;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(int)toOrientation;
@end

