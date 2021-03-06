/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MPMediaItemArtwork : XXUnknownSuperclass {
@private
	MPMediaItemArtworkInternal _internal;
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;
@property(readonly, assign, nonatomic) CGRect imageCropRect;
-(id)initWithImage:(id)image;
// declared property getter: -(MPMediaItemArtworkInternal)_internal;
-(id)albumImageDataWithSize:(CGSize)size;
-(id)albumImageWithSize:(CGSize)size;
// declared property getter: -(CGRect)bounds;
-(id)coverFlowImageWithSize:(CGSize)size;
-(void)dealloc;
-(BOOL)hasArtworkAvailable;
// declared property getter: -(CGRect)imageCropRect;
-(id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
-(id)imageWithSize:(CGSize)size;
-(id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
// declared property setter: -(void)set_internal:(MPMediaItemArtworkInternal)internal;
@end

