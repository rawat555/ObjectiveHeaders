/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionLayerInstruction.h"

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {
@private
	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;
}
@property(assign, nonatomic) int trackID;
+(id)videoCompositionLayerInstruction;
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)assetTrack;
-(void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;
-(void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;
// declared property setter: -(void)setTrackID:(int)anId;
-(void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;
// declared property getter: -(int)trackID;
@end

