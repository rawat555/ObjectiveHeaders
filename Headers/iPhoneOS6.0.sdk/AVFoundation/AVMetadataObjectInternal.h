/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVCaptureInput, NSString;

@interface AVMetadataObjectInternal : XXUnknownSuperclass {
@private
	XXStruct_pwHToB time;
	XXStruct_pwHToB duration;
	CGRect bounds;
	NSString* type;
	AVCaptureInput* input;
}
@property(assign) CGRect bounds;	// @synthesize
@property(assign) XXStruct_pwHToB duration;	// @synthesize
@property(retain) AVCaptureInput* input;	// @synthesize
@property(assign) XXStruct_pwHToB time;	// @synthesize
@property(retain) NSString* type;	// @synthesize
-(id)init;
// declared property getter: -(CGRect)bounds;
-(void)dealloc;
// declared property getter: -(XXStruct_pwHToB)duration;
// declared property getter: -(id)input;
// declared property setter: -(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setDuration:(XXStruct_pwHToB)duration;
// declared property setter: -(void)setInput:(id)input;
// declared property setter: -(void)setTime:(XXStruct_pwHToB)time;
// declared property setter: -(void)setType:(id)type;
// declared property getter: -(XXStruct_pwHToB)time;
// declared property getter: -(id)type;
@end
