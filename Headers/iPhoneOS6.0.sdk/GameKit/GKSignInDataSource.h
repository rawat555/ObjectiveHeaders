/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKSectionArrayDataSource.h"

@class GKTextField, GKSignInHeaderSection, GKSignInInputSection, GKSignInButtonSection;

@interface GKSignInDataSource : GKSectionArrayDataSource {
@private
	GKTextField* _usernameField;
	GKTextField* _passwordField;
	GKSignInHeaderSection* _signInHeaderSection;
	GKSignInButtonSection* _signInButtonSection;
	GKSignInInputSection* _signInInputSection;
}
@property(retain, nonatomic) GKTextField* passwordField;	// @synthesize=_passwordField
@property(retain, nonatomic) GKSignInButtonSection* signInButtonSection;	// @synthesize=_signInButtonSection
@property(retain, nonatomic) GKSignInHeaderSection* signInHeaderSection;	// @synthesize=_signInHeaderSection
@property(retain, nonatomic) GKSignInInputSection* signInInputSection;	// @synthesize=_signInInputSection
@property(retain, nonatomic) GKTextField* usernameField;	// @synthesize=_usernameField
-(void)dealloc;
-(id)description;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)passwordField;
-(void)prepareSections;
// declared property setter: -(void)setPasswordField:(id)field;
// declared property setter: -(void)setSignInButtonSection:(id)buttonSection;
// declared property setter: -(void)setSignInHeaderSection:(id)headerSection;
// declared property setter: -(void)setSignInInputSection:(id)inputSection;
// declared property setter: -(void)setUsernameField:(id)field;
// declared property getter: -(id)signInButtonSection;
// declared property getter: -(id)signInHeaderSection;
// declared property getter: -(id)signInInputSection;
-(id)tableView:(id)view sectionAtIndex:(int)index;
-(void)updatePlaceholderTextForEnvironment;
// declared property getter: -(id)usernameField;
@end

