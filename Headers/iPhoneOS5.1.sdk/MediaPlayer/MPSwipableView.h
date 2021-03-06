/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class UIPinchGestureRecognizer, MPSwipeGestureRecognizer, MPTapGestureRecognizer, MPActivityGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;
	int _simultaneousGestureTypes;
	id<MPSwipableViewDelegate> _swipeDelegate;
	MPTapGestureRecognizer* _tapGestureRecognizer;
	MPSwipeGestureRecognizer* _swipeGestureRecognizer;
	MPActivityGestureRecognizer* _activityGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
}
@property(assign, nonatomic) int enabledGestureTypes;	// @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// @synthesize=_swipeDelegate
-(id)initWithFrame:(CGRect)frame;
-(void)_activityGestureRecognized:(id)recognized;
-(void)_pinchGestureRecognized:(id)recognized;
-(void)_swipeGestureRecognized:(id)recognized;
-(void)_tapGestureRecognized:(id)recognized;
-(void)_updateGestureRecognizersForEnabledTypes;
-(void)addGestureRecognizer:(id)recognizer;
-(void)dealloc;
// declared property getter: -(int)enabledGestureTypes;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)removeGestureRecognizer:(id)recognizer;
// declared property setter: -(void)setEnabledGestureTypes:(int)types;
// declared property setter: -(void)setSimultaneousGestureTypes:(int)types;
// declared property setter: -(void)setSwipeDelegate:(id)delegate;
// declared property getter: -(int)simultaneousGestureTypes;
// declared property getter: -(id)swipeDelegate;
@end

