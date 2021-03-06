/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKStoreBagResponse.h"

@class NSString;

@interface GKAccountURLResponse : GKStoreBagResponse {
@private
	NSString* _setupURL;
	NSString* _authorizeURL;
	NSString* _editURL;
	NSString* _reportURL;
	NSString* _passwordURL;
}
@property(retain, nonatomic) NSString* authorizeURL;	// @synthesize=_authorizeURL
@property(retain, nonatomic) NSString* editURL;	// @synthesize=_editURL
@property(retain, nonatomic) NSString* passwordURL;	// @synthesize=_passwordURL
@property(retain, nonatomic) NSString* reportURL;	// @synthesize=_reportURL
@property(retain, nonatomic) NSString* setupURL;	// @synthesize=_setupURL
+(id)codedPropertyKeys;
+(id)responseWithStoreBagResponse:(id)storeBagResponse;
// declared property getter: -(id)authorizeURL;
-(void)dealloc;
// declared property getter: -(id)editURL;
// declared property getter: -(id)passwordURL;
// declared property getter: -(id)reportURL;
// declared property setter: -(void)setAuthorizeURL:(id)url;
// declared property setter: -(void)setEditURL:(id)url;
// declared property setter: -(void)setPasswordURL:(id)url;
// declared property setter: -(void)setReportURL:(id)url;
// declared property setter: -(void)setSetupURL:(id)url;
// declared property getter: -(id)setupURL;
@end

