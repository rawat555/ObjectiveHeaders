/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPropertyEditingTableViewCellDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol ABSimpleTextInputViewControllerDelegate, ABStyleProvider;

@interface ABSimpleTextInputViewController : XXUnknownSuperclass <ABPropertyEditingTableViewCellDelegate> {
@private
	id<ABSimpleTextInputViewControllerDelegate> _delegate;
	id _value;
	NSString* _placeholder;
	id<ABStyleProvider> _styleProvider;
}
@property(assign, nonatomic) id<ABSimpleTextInputViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(copy, nonatomic) NSString* placeholder;	// @synthesize=_placeholder
@property(copy, nonatomic) NSString* stringValue;	// @synthesize=_value
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_styleProvider
-(id)init;
-(BOOL)_allowsAutorotation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(float)ab_heightToFitForViewInPopoverView;
-(void)cancel:(id)cancel;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)placeholder;
-(void)propertyEditingTableViewCell:(id)cell valueDidChange:(id)value;
-(void)save:(id)save;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setPlaceholder:(id)placeholder;
// declared property setter: -(void)setStringValue:(id)value;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(void)setTitleLocalizationKey:(id)key;
// declared property getter: -(id)stringValue;
// declared property getter: -(id)styleProvider;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)updateSaveButton;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

