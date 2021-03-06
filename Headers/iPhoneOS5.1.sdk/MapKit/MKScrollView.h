/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MKScrollView.h"

@class MKUserLocationView, CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface MKScrollView : XXUnknownSuperclass {
	id _mk_delegate;
	unsigned _gestureCount;
	double _lastGestureEndedInterval;
	BOOL _adjustContentOffsetDisabled;
	BOOL _enableBoundsHitDetection;
	BOOL _displayingHitDetectionLayer;
	NSArray* _boundsHitDetectionLayers;
	MKUserLocationView* _userLocationView;
	CALayer* _boundedLayer;
	struct {
		unsigned shouldHandleTouchesMoved : 1;
		unsigned touchesBegan : 1;
		unsigned touchesCancelled : 1;
		unsigned touchesEnded : 1;
	} _delegateImplements;
}
@property(assign, nonatomic) BOOL enableBoundsHitDetection;	// @synthesize=_enableBoundsHitDetection
@property(readonly, assign, nonatomic) unsigned gestureCount;	// @synthesize=_gestureCount
@property(readonly, assign, nonatomic) double lastGestureEndedInterval;	// @synthesize=_lastGestureEndedInterval
@property(retain, nonatomic) MKUserLocationView* userLocationView;	// @synthesize=_userLocationView
-(id)initWithFrame:(CGRect)frame;
-(id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;
-(void)_setContentOffset:(CGPoint)offset;
-(void)_updateBoundsHitDetection;
-(id)boundsHitDetectionLayers;
-(void)dealloc;
-(void)didMoveToWindow;
// declared property getter: -(BOOL)enableBoundsHitDetection;
// declared property getter: -(unsigned)gestureCount;
-(void)hideBoundsHitDetectionLayers;
// declared property getter: -(double)lastGestureEndedInterval;
-(void)setContentOffset:(CGPoint)offset;
-(void)setContentSize:(CGSize)size adjustOffset:(BOOL)offset;
-(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEnableBoundsHitDetection:(BOOL)detection;
-(void)setSize:(CGSize)size;
// declared property setter: -(void)setUserLocationView:(id)view;
-(void)stopSmoothScroll;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
// declared property getter: -(id)userLocationView;
@end

@interface MKScrollView (Common)
-(void)layoutSubviews;
-(void)userLocationAccuracyDidUpdate:(id)userLocationAccuracy;
-(void)userLocationWillUpdate:(id)userLocation;
@end

