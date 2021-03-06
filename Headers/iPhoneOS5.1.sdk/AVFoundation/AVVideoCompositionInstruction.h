/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInstructionInternal* _instruction;
}
@property(retain, nonatomic) CGColorRef backgroundColor;
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;
@property(readonly, assign, nonatomic) NSArray* layerInstructions;
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)_setValuesFromDictionary:(id)dictionary;
// declared property getter: -(CGColorRef)backgroundColor;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
// declared property getter: -(BOOL)enablePostProcessing;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
// declared property getter: -(id)layerInstructions;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property setter: -(void)setBackgroundColor:(CGColorRef)color;
-(void)setEnablePostProcessing:(BOOL)processing;
-(void)setLayerInstructions:(id)instructions;
-(void)setTimeRange:(XXStruct_yD8eWC)range;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
@end

