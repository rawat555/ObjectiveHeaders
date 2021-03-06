/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputGroupInternal, AVAssetWriterInput, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
@private
	AVAssetWriterInputGroupInternal* _internal;
}
@property(readonly, assign, nonatomic) AVAssetWriterInput* defaultInput;
@property(readonly, assign, nonatomic) NSArray* inputs;
+(id)assetWriterInputGroupWithInputs:(id)inputs defaultInput:(id)input;
-(id)init;
-(id)initWithInputs:(id)inputs defaultInput:(id)input;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)defaultInput;
-(void)finalize;
// declared property getter: -(id)inputs;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)options;
@end

