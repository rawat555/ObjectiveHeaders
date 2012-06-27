/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPopoverController, NSString, UIViewController, UISearchBar, UIView, UITableView, UILabel;
@protocol UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource;

@interface UISearchDisplayController : XXUnknownSuperclass {
@private
	UIViewController* _viewController;
	UITableView* _tableView;
	UIView* _dimmingView;
	UISearchBar* _searchBar;
	UILabel* _noResultsLabel;
	NSString* _noResultsMessage;
	NSString* _resultsTitle;
	id<UISearchDisplayDelegate> _delegate;
	id<UITableViewDataSource> _tableViewDataSource;
	id<UITableViewDelegate> _tableViewDelegate;
	CFArrayRef _containingScrollViews;
	float _lastKeyboardAdjustment;
	float _lastFooterAdjustment;
	UIPopoverController* _popoverController;
	int _searchResultsTableViewStyle;
	id _navigationControllerBookkeeper;
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
		unsigned allowDisablingNavigationBarHiding : 1;
		unsigned showsResultsForEmptyField : 1;
		unsigned adjustsSearchBarContentInsetForIndexBar : 1;
	} _searchDisplayControllerFlags;
}
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) BOOL automaticallyShowsNoResultsMessage;
@property(assign, nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;
@property(assign, nonatomic) id<UISearchDisplayDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;
@property(readonly, assign, nonatomic) BOOL hidNavigationBar;
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
@property(copy, nonatomic) NSString* noResultsMessage;
@property(assign, nonatomic) BOOL noResultsMessageVisible;
@property(readonly, assign, nonatomic) UISearchBar* searchBar;	// @synthesize=_searchBar
@property(readonly, assign, nonatomic) UIViewController* searchContentsController;	// @synthesize=_viewController
@property(assign, nonatomic) id<UITableViewDataSource> searchResultsDataSource;	// @synthesize=_tableViewDataSource
@property(assign, nonatomic) id<UITableViewDelegate> searchResultsDelegate;	// @synthesize=_tableViewDelegate
@property(readonly, assign, nonatomic) UITableView* searchResultsTableView;	// @synthesize=_tableView
@property(copy, nonatomic) NSString* searchResultsTitle;	// @synthesize=_resultsTitle
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithSearchBar:(id)searchBar contentsController:(id)controller;
-(id)initWithSearchBar:(id)searchBar contentsController:(id)controller searchResultsTableViewStyle:(int)style;
-(void)_adjustTableViewContentInsets;
-(BOOL)_adjustsSearchBarContentInsetForIndexBar;
-(BOOL)_allowDisablingNavigationBarHiding;
-(BOOL)_areSearchContentsSplitViewMaster;
-(void)_cleanUpSearchBar;
-(void)_clearViewController;
-(void)_configureNewSearchBar;
-(void)_configureSearchBarForTableView;
-(id)_containingTableView;
-(id)_containingViewOfClass:(Class)aClass;
-(id)_createPopoverController;
-(void)_destroyManagedTableView;
-(void)_disableParentScrollViews;
-(void)_enableParentScrollViews;
-(void)_indexBarFrameChanged:(id)changed;
// declared property getter: -(BOOL)_isCancelButtonManagementDisabled;
-(BOOL)_isSearchBarInBar;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_managedTableViewDidScroll;
-(id)_noResultsMessageLabel;
-(void)_popoverClearButtonPressed:(id)pressed;
-(void)_popoverKeyboardDidHide:(id)_popoverKeyboard;
-(void)_popoverKeyboardDidShow:(id)_popoverKeyboard;
-(void)_searchBarSuperviewChanged;
-(void)_searchBarSuperviewWillChange;
-(void)_setAdjustsSearchBarContentInsetForIndexBar:(BOOL)indexBar;
-(void)_setAllowDisablingNavigationBarHiding:(BOOL)hiding;
// declared property setter: -(void)_setCancelButtonManagementDisabled:(BOOL)disabled;
-(void)_setShowsResultsForEmptyField:(BOOL)emptyField;
-(void)_setTableViewVisible:(BOOL)visible inView:(id)view;
-(void)_setupNoResultsLabelIfNecessary;
-(BOOL)_showsResultsForEmptyField;
-(CGRect)_tableViewFrame;
-(id)_topShadowView;
-(void)_updateNoSearchResultsMessageVisiblity;
-(void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;
// declared property getter: -(BOOL)automaticallyShowsNoResultsMessage;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)dimTableViewOnEmptySearchString;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)hidNavigationBar;
// declared property getter: -(BOOL)isActive;
// declared property getter: -(BOOL)isNavigationBarHidingEnabled;
-(void)navigationControllerDidShowViewController:(id)navigationController;
-(void)navigationControllerWillShowViewController:(id)navigationController;
// declared property getter: -(id)noResultsMessage;
// declared property getter: -(BOOL)noResultsMessageVisible;
-(void)popoverController:(id)controller animationCompleted:(int)completed;
// declared property getter: -(id)searchBar;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
// declared property getter: -(id)searchContentsController;
// declared property getter: -(id)searchResultsDataSource;
// declared property getter: -(id)searchResultsDelegate;
// declared property getter: -(id)searchResultsTableView;
// declared property getter: -(id)searchResultsTitle;
// declared property setter: -(void)setActive:(BOOL)active;
-(void)setActive:(BOOL)active animated:(BOOL)animated;
// declared property setter: -(void)setAutomaticallyShowsNoResultsMessage:(BOOL)message;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDimTableViewOnEmptySearchString:(BOOL)string;
// declared property setter: -(void)setNavigationBarHidingEnabled:(BOOL)enabled;
// declared property setter: -(void)setNoResultsMessage:(id)message;
// declared property setter: -(void)setNoResultsMessageVisible:(BOOL)visible;
-(void)setSearchBar:(id)bar;
-(void)setSearchContentsController:(id)controller;
// declared property setter: -(void)setSearchResultsDataSource:(id)source;
// declared property setter: -(void)setSearchResultsDelegate:(id)delegate;
// declared property setter: -(void)setSearchResultsTitle:(id)title;
-(void)showHideAnimationDidFinish;
-(void)windowDidRotate:(id)window;
-(void)windowWillAnimateRotation:(id)window;
@end
