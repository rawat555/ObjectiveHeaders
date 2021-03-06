/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKImageBrush.h"
#import "GameKit-Structs.h"

@class UIImage;

@interface GKPhotoBrush : GKImageBrush {
@private
	UIImage* _overlayImage;
	UIEdgeInsets _edgeInsets;
	CGRect _contentRect;
	float _rotation;
}
@property(assign, nonatomic) CGRect contentRect;	// @synthesize=_contentRect
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// @synthesize=_edgeInsets
@property(retain, nonatomic) UIImage* overlayImage;	// @synthesize=_overlayImage
@property(assign, nonatomic) float rotation;	// @synthesize=_rotation
// declared property getter: -(CGRect)contentRect;
-(void)dealloc;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property getter: -(UIEdgeInsets)edgeInsets;
// declared property getter: -(id)overlayImage;
// declared property getter: -(float)rotation;
-(float)scaleForInput:(id)input;
// declared property setter: -(void)setContentRect:(CGRect)rect;
// declared property setter: -(void)setEdgeInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setOverlayImage:(id)image;
// declared property setter: -(void)setRotation:(float)rotation;
-(CGSize)sizeForInput:(id)input;
@end

