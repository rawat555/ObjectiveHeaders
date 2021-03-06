/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"

@class UINavigationBar, MPPortraitInfoOverlay, MPPortraitTransportControls;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	MPPortraitInfoOverlay* _overlayView;
	UINavigationBar* _navigationBar;
	MPPortraitTransportControls* _transportControls;
	unsigned _ownsTransportControls : 1;
	unsigned _waitingToShowOverlay : 1;
}
@property(retain, nonatomic) UINavigationBar* navigationBar;	// @synthesize=_navigationBar
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;
+(BOOL)supportsFullscreenDisplay;
-(id)init;
-(id)initWithTransportControls:(BOOL)transportControls;
-(void)_handleSwipeRight;
-(id)_overlayView;
-(void)_removeOverlayView;
-(void)_showOverlayView:(BOOL)view;
-(BOOL)allowsDetailScrubbing;
-(CGRect)backgroundViewSnapshotFrame;
-(BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;
-(id)copyOverlayViewForTransitionToItem:(id)item;
-(id)createChapterFlipTransition;
-(void)dealloc;
-(void)displayVideoViewOnScreen;
-(void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)transferedOverlayView;
-(BOOL)isStatusBarHidden;
-(void)loadView;
// declared property getter: -(id)navigationBar;
-(id)newAlternateTracksTransition;
-(id)newOverlayViewWithFrame:(CGRect)frame;
// declared property getter: -(BOOL)ownsTransportControls;
-(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
-(void)setAllowsWirelessPlayback:(BOOL)playback;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setDisabledParts:(unsigned)parts;
-(void)setItem:(id)item;
// declared property setter: -(void)setNavigationBar:(id)bar;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
-(void)setPlayer:(id)player;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)showChaptersController;
-(void)showOverlayView;
-(void)startTicking;
-(int)statusBarStyle;
-(void)stopTicking;
-(void)swipableView:(id)view swipedInDirection:(int)direction;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;
-(void)transportControlsDidResize:(id)transportControls;
-(id)videoOverlayView;
-(id)videoOverlayViewIfLoaded;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
@end

