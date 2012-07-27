/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "_MFComposeRecipientViewDelegate.h"
#import "EventKitUI-Structs.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "MFContactsSearchConsumer.h"

@class _MFComposeRecipientView, MFSearchShadowView, UIKeyboard, NSNumber, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSString, UITableView, UIScrollView;

__attribute__((visibility("hidden")))
@interface EKEventAttendeePicker : XXUnknownSuperclass <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate> {
@private
	NSArray* _recipients;
	_MFComposeRecipientView* _composeRecipientView;
	UIScrollView* _recipientScrollView;
	UITableView* _searchResultsView;
	MFSearchShadowView* _shadowView;
	BOOL _showingSearchField;
	UIKeyboard* _keyboard;
	NSNumber* _lastSearchId;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	NSArray* _searchResults;
	BOOL _shouldReenableAutomaticKeyboard;
	CGRect _initialFrame;
	NSString* _searchAccountID;
}
@property(readonly, assign, nonatomic) NSArray* addresses;
@property(copy, nonatomic) NSArray* recipients;
@property(readonly, assign, nonatomic) NSString* remainingText;
@property(copy, nonatomic) NSString* searchAccountID;	// @synthesize=_searchAccountID
-(id)initWithFrame:(CGRect)frame;
-(void)_copyRecipientsFromComposeView;
-(void)_hideSearchFieldAndCancelOutstandingSearches:(BOOL)searches;
-(float)_maxScrollerHeight;
-(float)_properHeight;
-(id)_searchManager;
-(id)_searchResultsView;
-(void)_setRecipientsOnComposeView;
-(id)_shadowView;
-(void)_showSearchField;
// declared property getter: -(id)addresses;
-(void)animationDidStop:(id)animation;
-(void)beganNetworkActivity;
-(void)commitRemainingText;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record identifier:(int)identifier;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
-(void)composeRecipientView:(id)view showPersonCardForAtom:(id)atom;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)dealloc;
-(void)endedNetworkActivity;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
-(void)loadView;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
// declared property getter: -(id)recipients;
// declared property getter: -(id)remainingText;
// declared property getter: -(id)searchAccountID;
-(void)searchWithText:(id)text;
// declared property setter: -(void)setRecipients:(id)recipients;
// declared property setter: -(void)setSearchAccountID:(id)anId;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)unknownPersonViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end
