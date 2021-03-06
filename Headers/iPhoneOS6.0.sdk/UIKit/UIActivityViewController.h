/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIWindow, UIActivityListViewController, NSOperationQueue, NSArray, UIActivity;

@interface UIActivityViewController : UIViewController {
@private
	Class _originalPopoverBackgroundViewClass;
	NSArray* _applicationActivities;
	int _originalPopoverBackgroundStyle;
	NSArray* _activityItems;
	UIActivity* _activity;
	UIActivityListViewController* _activityListViewController;
	NSOperationQueue* _activityItemProviderOperationQueue;
	UIWindow* _dimmingWindow;
	id _completionHandler;
	NSArray* _excludedActivityTypes;
	int _completedProviderCount;
	BOOL _useBlackPopoverStyle;
	int _totalProviderCount;
	unsigned _backgroundTaskIdentifier;
}
@property(retain, nonatomic) UIActivity* activity;	// @synthesize=_activity
@property(retain, nonatomic) NSOperationQueue* activityItemProviderOperationQueue;	// @synthesize=_activityItemProviderOperationQueue
@property(copy, nonatomic) NSArray* activityItems;	// @synthesize=_activityItems
@property(retain, nonatomic) UIActivityListViewController* activityListViewController;	// @synthesize=_activityListViewController
@property(copy, nonatomic) NSArray* applicationActivities;	// @synthesize=_applicationActivities
@property(assign, nonatomic) unsigned backgroundTaskIdentifier;	// @synthesize=_backgroundTaskIdentifier
@property(assign, nonatomic) int completedProviderCount;	// @synthesize=_completedProviderCount
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(retain, nonatomic) UIWindow* dimmingWindow;	// @synthesize=_dimmingWindow
@property(copy, nonatomic) NSArray* excludedActivityTypes;	// @synthesize=_excludedActivityTypes
@property(assign, nonatomic) int originalPopoverBackgroundStyle;	// @synthesize=_originalPopoverBackgroundStyle
@property(assign, nonatomic) Class originalPopoverBackgroundViewClass;	// @synthesize=_originalPopoverBackgroundViewClass
@property(assign, nonatomic) int totalProviderCount;	// @synthesize=_totalProviderCount
@property(assign, nonatomic) BOOL useBlackPopoverStyle;	// @synthesize=_useBlackPopoverStyle
+(id)_builtinActivities;
+(BOOL)_hasSystemActivityForActivityItems:(id)activityItems;
-(id)initWithActivityItems:(id)activityItems applicationActivities:(id)activities;
-(id)_activityItemValues;
-(id)_availableActivities;
-(void)_cancel;
-(void)_cleanupActivityWithSuccess:(BOOL)success;
-(void)_didResignContentViewControllerOfPopover:(id)popover;
-(void)_dimStatusBar:(BOOL)bar animated:(BOOL)animated;
-(void)_executeActivity;
-(void)_hideView;
-(void)_performActivity:(id)activity;
-(void)_prepareActivity:(id)activity;
-(void)_reloadImageForActivity:(id)activity;
-(void)_setPopoverController:(id)controller;
-(BOOL)_shouldShowSystemActivity:(id)activity;
-(id)_titleForActivity:(id)activity;
// declared property getter: -(id)activity;
// declared property getter: -(id)activityItemProviderOperationQueue;
// declared property getter: -(id)activityItems;
// declared property getter: -(id)activityListViewController;
// declared property getter: -(id)applicationActivities;
// declared property getter: -(unsigned)backgroundTaskIdentifier;
// declared property getter: -(int)completedProviderCount;
// declared property getter: -(id)completionHandler;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
// declared property getter: -(id)dimmingWindow;
// declared property getter: -(id)excludedActivityTypes;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(int)originalPopoverBackgroundStyle;
// declared property getter: -(Class)originalPopoverBackgroundViewClass;
// declared property setter: -(void)setActivity:(id)activity;
// declared property setter: -(void)setActivityItemProviderOperationQueue:(id)queue;
// declared property setter: -(void)setActivityItems:(id)items;
// declared property setter: -(void)setActivityListViewController:(id)controller;
// declared property setter: -(void)setApplicationActivities:(id)activities;
// declared property setter: -(void)setBackgroundTaskIdentifier:(unsigned)identifier;
// declared property setter: -(void)setCompletedProviderCount:(int)count;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setDimmingWindow:(id)window;
// declared property setter: -(void)setExcludedActivityTypes:(id)types;
// declared property setter: -(void)setOriginalPopoverBackgroundStyle:(int)style;
// declared property setter: -(void)setOriginalPopoverBackgroundViewClass:(Class)aClass;
// declared property setter: -(void)setTotalProviderCount:(int)count;
// declared property setter: -(void)setUseBlackPopoverStyle:(BOOL)style;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(int)totalProviderCount;
// declared property getter: -(BOOL)useBlackPopoverStyle;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

