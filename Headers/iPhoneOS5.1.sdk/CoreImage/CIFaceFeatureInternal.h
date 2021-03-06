/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFaceFeature.h"


__attribute__((visibility("hidden")))
@interface CIFaceFeatureInternal : CIFaceFeature {
@private
	CGRect bounds;
	BOOL hasLeftEyePosition;
	CGPoint leftEyePosition;
	BOOL hasRightEyePosition;
	CGPoint rightEyePosition;
	BOOL hasMouthPosition;
	CGPoint mouthPosition;
}
@property(assign) CGRect bounds;	// @synthesize
@property(assign) BOOL hasLeftEyePosition;	// @synthesize
@property(assign) BOOL hasMouthPosition;	// @synthesize
@property(assign) BOOL hasRightEyePosition;	// @synthesize
@property(assign) CGPoint leftEyePosition;	// @synthesize
@property(assign) CGPoint mouthPosition;	// @synthesize
@property(assign) CGPoint rightEyePosition;	// @synthesize
+(id)faceFeatureWithBounds:(CGRect)bounds;
+(id)faceFeaturesWithBoundsArray:(const CGRect*)boundsArray count:(unsigned)count;
-(id)initWithBounds:(CGRect)bounds;
-(id)initWithBounds:(CGRect)bounds hasLeftEyePosition:(BOOL)position leftEyePosition:(CGPoint)position3 hasRightEyePosition:(BOOL)position4 rightEyePosition:(CGPoint)position5 hasMouthPosition:(BOOL)position6 mouthPosition:(CGPoint)position7;
-(id).cxx_construct;
// declared property getter: -(CGRect)bounds;
// declared property getter: -(BOOL)hasLeftEyePosition;
// declared property getter: -(BOOL)hasMouthPosition;
// declared property getter: -(BOOL)hasRightEyePosition;
// declared property getter: -(CGPoint)leftEyePosition;
// declared property getter: -(CGPoint)mouthPosition;
// declared property getter: -(CGPoint)rightEyePosition;
// declared property setter: -(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setHasLeftEyePosition:(BOOL)position;
// declared property setter: -(void)setHasMouthPosition:(BOOL)position;
// declared property setter: -(void)setHasRightEyePosition:(BOOL)position;
// declared property setter: -(void)setLeftEyePosition:(CGPoint)position;
// declared property setter: -(void)setMouthPosition:(CGPoint)position;
// declared property setter: -(void)setRightEyePosition:(CGPoint)position;
@end

