/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSMutableCopying.h"
#import "AVAsset.h"

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
@private
	AVCompositionInternal* _priv;
}
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) NSArray* tracks;
+(void)initialize;
-(id)init;
-(id)_assetInspector;
-(long)_createEmptyMutableCompositionIfNeeded;
-(OpaqueFigFormatReader*)_formatReader;
-(id)_initWithComposition:(id)composition;
-(OpaqueFigMutableComposition*)_mutableComposition;
-(id)_mutableTracks;
-(id)_newTrackForIndex:(long)index;
-(void)_setNaturalSize:(CGSize)size;
-(void)dealloc;
-(void)finalize;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(CGSize)naturalSize;
// declared property getter: -(id)tracks;
@end

