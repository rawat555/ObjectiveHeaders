/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : XXUnknownSuperclass {
	AVPlayerLayerInternal* _playerLayer;
}
@property(retain, nonatomic) AVPlayer* player;
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property(copy) NSString* videoGravity;
+(id)playerLayerWithPlayer:(id)player;
-(id)init;
-(id)initWithLayer:(id)layer;
-(void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;
-(void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;
-(void)_calculateSubtitleLayerBound:(CGRect)bound presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform outBound:(CGRect*)bound4;
-(void)_connectContentLayerToPlayer;
-(void)_disconnectContentLayerFromPlayer;
-(CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;
-(CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;
-(float)_pctOfSubtitleLayerHeight;
-(void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;
-(void)_setItem:(id)item readyForDisplay:(BOOL)display;
-(void)_setSubtitleDisplayEnabled:(BOOL)enabled;
-(void)_setSubtitleGravity:(id)gravity;
-(BOOL)_subtitleDisplayEnabled;
-(id)_subtitleGravity;
-(void)_subtitlesDidChange:(id)_subtitles;
-(void)_updatePresentationSize:(CGSize)size;
-(void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform;
-(CGRect)_videoRectForBounds:(CGRect)bounds;
-(void)addAnimation:(id)animation forKey:(id)key;
-(void)dealloc;
-(void)finalize;
-(BOOL)isOverscanSubtitleSupportEnabled;
// declared property getter: -(BOOL)isReadyForDisplay;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(id)player;
-(void)removeAllAnimations;
-(void)removeAnimationForKey:(id)key;
-(void)setBounds:(CGRect)bounds;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setVideoGravity:(id)gravity;
// declared property getter: -(id)videoGravity;
-(CGRect)videoRect;
@end

