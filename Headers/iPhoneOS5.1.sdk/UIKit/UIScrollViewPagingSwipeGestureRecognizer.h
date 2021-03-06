/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
@private
	UIDelayedAction* _swipeFailureDelay;
	CGPoint _startLocation;
	CGPoint _lastLocation;
	double _lastTime;
	int _directionalFailureCount;
}
-(void)_processNewLocation:(CGPoint)location;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)dealloc;
-(void)enoughTimeElapsed:(id)elapsed;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

