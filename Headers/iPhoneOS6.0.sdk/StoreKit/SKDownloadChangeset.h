/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSError, NSURL, NSNumber;

@interface SKDownloadChangeset : XXUnknownSuperclass <NSCopying> {
@private
	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;
}
@property(copy, nonatomic) NSNumber* contentLength;	// @synthesize=_contentLength
@property(copy, nonatomic) NSURL* contentURL;	// @synthesize=_contentURL
@property(copy, nonatomic) NSNumber* downloadID;	// @synthesize=_downloadID
@property(copy, nonatomic) NSNumber* downloadState;	// @synthesize=_downloadState
@property(copy, nonatomic) NSError* error;	// @synthesize=_error
@property(copy, nonatomic) NSNumber* progress;	// @synthesize=_progress
@property(copy, nonatomic) NSNumber* timeRemaining;	// @synthesize=_timeRemaining
+(id)changesetWithDownloadID:(id)downloadID state:(int)state;
-(id)initWithXPCEncoding:(id)xpcencoding;
// declared property getter: -(id)contentLength;
// declared property getter: -(id)contentURL;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyXPCEncoding;
-(void)dealloc;
// declared property getter: -(id)downloadID;
// declared property getter: -(id)downloadState;
// declared property getter: -(id)error;
// declared property getter: -(id)progress;
// declared property setter: -(void)setContentLength:(id)length;
// declared property setter: -(void)setContentURL:(id)url;
// declared property setter: -(void)setDownloadID:(id)anId;
// declared property setter: -(void)setDownloadState:(id)state;
// declared property setter: -(void)setError:(id)error;
// declared property setter: -(void)setProgress:(id)progress;
// declared property setter: -(void)setTimeRemaining:(id)remaining;
// declared property getter: -(id)timeRemaining;
@end
