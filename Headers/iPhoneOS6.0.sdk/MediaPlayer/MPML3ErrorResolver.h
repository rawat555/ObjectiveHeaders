/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPMediaItem, SSKeybagRequest, NSError;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
@private
	MPMediaItem* _mediaItem;
	SSKeybagRequest* _request;
	NSError* _error;
}
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
@property(retain, nonatomic) MPMediaItem* mediaItem;	// @synthesize=_mediaItem
@property(retain, nonatomic) SSKeybagRequest* request;	// @synthesize=_request
-(id)initWithMediaItem:(id)mediaItem;
-(void)dealloc;
// declared property getter: -(id)error;
// declared property getter: -(id)mediaItem;
// declared property getter: -(id)request;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(void)resolveError:(id)error;
// declared property setter: -(void)setError:(id)error;
// declared property setter: -(void)setMediaItem:(id)item;
// declared property setter: -(void)setRequest:(id)request;
@end

