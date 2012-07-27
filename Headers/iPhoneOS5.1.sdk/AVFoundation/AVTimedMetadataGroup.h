/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : XXUnknownSuperclass <NSCopying> {
	AVTimedMetadataGroupInternal* _priv;
}
@property(readonly, assign) NSArray* items;
@property(readonly, assign) XXStruct_yD8eWC timeRange;
-(id)init;
-(id)initWithItems:(id)items timeRange:(XXStruct_yD8eWC)range;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)items;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
@end
