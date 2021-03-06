/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "SLComposeViewController.h"

@class UIImageView, NSString, SLFacebookRemoteComposeViewController, NSMutableDictionary;

@interface SLFacebookComposeViewController : SLComposeViewController {
@private
	SLFacebookRemoteComposeViewController* _remoteViewController;
	BOOL _wasPresented;
	NSMutableDictionary* _delayedActions;
	UIImageView* _vignetteView;
	NSString* _lastVignetteName;
	int _savedStatusBarStyle;
	id _completionHandler;
	BOOL _didFailLoadingRemoteViewController;
}
@property(retain) SLFacebookRemoteComposeViewController* remoteViewController;	// @synthesize=_remoteViewController
+(BOOL)canPost;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void).cxx_destruct;
-(void)_addDelayedAction:(id)action forEvent:(id)event;
-(id)_delayedActions;
-(void)_handleRemoteViewFailure;
-(void)_performActionsForEvent:(id)event;
-(BOOL)addAttachment:(id)attachment;
-(id)addDownSampledImageDataByProxyWithPreviewImage:(id)previewImage;
-(BOOL)addImage:(id)image;
-(BOOL)addImageAsset:(id)asset;
-(id)addImageByProxy;
-(BOOL)addURL:(id)url;
-(BOOL)addURL:(id)url withPreviewImage:(id)previewImage;
-(id)addURLWithProxyPreviewImage:(id)proxyPreviewImage;
-(BOOL)canAddContent;
-(id)completionHandler;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)remoteController:(id)controller didLoadWithError:(id)error;
// declared property getter: -(id)remoteViewController;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(id)serviceType;
-(void)setCompletionHandler:(id)handler;
-(BOOL)setInitialText:(id)text;
-(void)setLongitude:(double)longitude latitude:(double)latitude name:(id)name;
// declared property setter: -(void)setRemoteViewController:(id)controller;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)supportsImageAsset:(id)asset;
-(void)updateVignetteToOrientation:(int)orientation;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

