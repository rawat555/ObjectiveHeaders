/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"
#import "MPVideoOverlayDelegate.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
@private
	MPFullScreenVideoOverlay* _overlayView;
	int _autorotationState;
	BOOL _inhibitOverlay;
}
@property(assign, nonatomic) int autorotationState;	// @synthesize=_autorotationState
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay* overlayView;
-(id)init;
-(void)_hideOverlayAnimationFinished:(id)finished;
-(void)_reallyRemoveOverlay;
-(void)_rotationAnimationFinished:(id)finished;
-(BOOL)allowsDetailScrubbing;
// declared property getter: -(int)autorotationState;
-(BOOL)controlsOverlayVisible;
-(id)createChapterFlipTransition;
-(void)dealloc;
-(void)hideOverlayAnimated:(BOOL)animated;
-(BOOL)inhibitOverlay;
-(void)noteIgnoredChangeTypes:(unsigned)types;
-(void)overlayTappedBackButton:(id)button;
-(void)overlayTappedScaleModeButton:(id)button;
// declared property getter: -(id)overlayView;
-(void)playbackStateDidChangeNotification:(id)playbackState;
-(void)removeChildViewController:(id)controller;
-(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
// declared property setter: -(void)setAutorotationState:(int)state;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setDisabledParts:(unsigned)parts;
-(void)setInhibitOverlay:(BOOL)overlay;
-(void)setItem:(id)item;
-(void)setTVOutEnabled:(BOOL)enabled;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)showChaptersController;
-(void)showOverlayAnimated:(BOOL)animated;
-(void)startTicking;
-(void)stopTicking;
-(id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;
-(void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;
-(id)videoOverlayView;
-(id)videoOverlayViewIfLoaded;
-(void)videoView_itemTypeAvailableNotification:(id)notification;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
@end
