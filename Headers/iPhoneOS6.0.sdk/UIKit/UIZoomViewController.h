/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIViewController.h"
#import "UIKit-Structs.h"

@class UIButton, UIWindow;

__attribute__((visibility("hidden")))
@interface UIZoomViewController : UIViewController {
@private
	UIWindow* _window;
	UIButton* _zoomButton;
}
@property(readonly, assign, nonatomic) UIWindow* window;	// @synthesize=_window
-(id)init;
-(void)_applicationDidFinishLaunching:(id)_application;
-(void)_changeZoom:(id)zoom;
-(void)_getRotationContentSettings:(XXStruct_tXAZTC*)settings forWindow:(id)window;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(int)interfaceOrientation offscreen:(BOOL)offscreen;
-(void)_suspendAnimationStarted:(id)started;
-(void)_updateZoomButtonTitle;
-(void)_zoomOrientationAnimationFinished:(id)finished finished:(BOOL)finished2 context:(void*)context;
-(void)_zoomOrientationChange:(id)change;
-(id)_zoomText:(BOOL)text;
-(void)dealloc;
-(BOOL)isClassicControlWindow:(id)window;
-(void)loadView;
-(id)screen;
// declared property getter: -(id)window;
@end

