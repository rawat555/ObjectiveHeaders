/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackSegment.h"

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment {
@private
	AVCompositionTrackSegmentInternal* _priv;
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, assign, nonatomic) int sourceTrackID;
@property(readonly, assign, nonatomic) NSURL* sourceURL;
+(id)compositionTrackSegmentWithTimeRange:(XXStruct_yD8eWC)timeRange;
+(id)compositionTrackSegmentWithURL:(id)url trackID:(int)anId sourceTimeRange:(XXStruct_yD8eWC)range targetTimeRange:(XXStruct_yD8eWC)range4;
-(id)init;
-(id)initWithTimeRange:(XXStruct_yD8eWC)timeRange;
-(id)initWithURL:(id)url trackID:(int)anId sourceTimeRange:(XXStruct_yD8eWC)range targetTimeRange:(XXStruct_yD8eWC)range4;
-(void)dealloc;
-(void)finalize;
-(unsigned)hash;
// declared property getter: -(BOOL)isEmpty;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(int)sourceTrackID;
// declared property getter: -(id)sourceURL;
@end
