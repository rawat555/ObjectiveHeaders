/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : XXUnknownSuperclass {
@private
	AVVideoCompositionCoreAnimationToolInternal* _videoCompositionTool;
}
+(id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;
-(id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;
-(int)_auxiliaryTrackID;
-(id)_auxiliaryTrackLayer;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(BOOL)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(id)_postProcessingVideoLayer;
-(void)dealloc;
-(void)finalize;
@end
