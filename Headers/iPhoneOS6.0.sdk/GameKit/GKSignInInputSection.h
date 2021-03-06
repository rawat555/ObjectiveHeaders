/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "GKTableSection.h"

@class UITextField;

@interface GKSignInInputSection : GKTableSection <UITextFieldDelegate> {
@private
	UITextField* _passwordField;
	UITextField* _usernameField;
}
@property(retain, nonatomic) UITextField* passwordField;	// @synthesize=_passwordField
@property(retain, nonatomic) UITextField* usernameField;	// @synthesize=_usernameField
-(void)dealloc;
-(float)heightForFooterInTableView:(id)tableView;
// declared property getter: -(id)passwordField;
-(int)rowCountInTableView:(id)tableView;
-(id)sectionReuseIdentifierInTableView:(id)tableView;
// declared property setter: -(void)setPasswordField:(id)field;
// declared property setter: -(void)setUsernameField:(id)field;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(BOOL)textFieldShouldReturn:(id)textField;
// declared property getter: -(id)usernameField;
-(id)viewForSectionFooterInTableView:(id)tableView;
@end

