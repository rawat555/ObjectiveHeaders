/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPPadFullScreenVideoOverlay, MPAudioVideoRoutingPopoverController;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	MPPadFullScreenVideoOverlay* _fullscreenVideoOverlay;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
}
-(id)init;
-(void)_availableRoutesDidChangeNotification:(id)_availableRoutes;
-(void)_hideOverlayAnimationFinished:(id)finished;
-(void)_rotationAnimationFinished:(id)finished;
-(BOOL)canChangeScaleMode;
-(BOOL)controlsOverlayVisible;
-(void)dealloc;
-(void)didChangeToInterfaceOrientation:(int)interfaceOrientation;
-(void)hideOverlayAnimated:(BOOL)animated;
-(void)loadView;
-(void)overlayDidDismissAlternateTracksPopover:(id)overlay;
-(void)overlayTappedBackButton:(id)button;
-(void)overlayTappedScaleModeButton:(id)button;
-(id)overlayView;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)registerForPlayerNotifications;
-(void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;
-(void)setDisabledParts:(unsigned long long)parts;
-(void)setItem:(id)item;
-(void)setPlayer:(id)player;
-(void)setScaleMode:(unsigned)mode animated:(BOOL)animated;
-(void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;
-(void)showOverlayAnimated:(BOOL)animated;
-(void)startTicking;
-(void)stopTicking;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;
-(void)unregisterForPlayerNotifications;
-(id)videoOverlayView;
-(id)videoOverlayViewIfLoaded;
-(void)videoView_itemTypeAvailableNotification:(id)notification;
-(void)viewWillDisappear:(BOOL)view;
-(void)willChangeToInterfaceOrientation:(int)interfaceOrientation;
@end

