/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKHostedViewController.h"

@class GKGameCenterViewController, GKRemoteGameCenterViewController;

@interface GKHostedGameCenterViewController : GKHostedViewController {
}
@property(readonly, assign, nonatomic) GKGameCenterViewController* _parentController;
@property(readonly, assign, nonatomic) GKRemoteGameCenterViewController* _remoteController;
// declared property getter: -(id)_parentController;
-(id)_presentingViewController;
// declared property getter: -(id)_remoteController;
-(void)didGetRemoteViewController;
-(id)hostSideViewControllerClassName;
-(void)presentRemoteViewControllerIfNeeded;
-(id)serviceSideViewControllerClassName;
@end
