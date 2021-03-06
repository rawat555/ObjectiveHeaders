/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorControls : CIFilter {
@private
	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputBrightness;
	NSNumber* inputContrast;
}
@property(copy, nonatomic) NSNumber* inputBrightness;	// @synthesize
@property(copy, nonatomic) NSNumber* inputContrast;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) NSNumber* inputSaturation;	// @synthesize
+(id)customAttributes;
// declared property getter: -(id)inputBrightness;
// declared property getter: -(id)inputContrast;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputSaturation;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputBrightness:(id)brightness;
// declared property setter: -(void)setInputContrast:(id)contrast;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputSaturation:(id)saturation;
@end

