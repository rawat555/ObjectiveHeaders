/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActivityIndicatorView.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, NSString, NSArray, UIColor;

@interface UIActivityIndicatorView : UIView <NSCoding> {
@private
	double _duration;
	BOOL _animating;
	int _activityIndicatorViewStyle;
	int _actualActivityIndicatorViewStyle;
	BOOL _hidesWhenStopped;
	float _width;
	BOOL _hasShadow;
	UIColor* _color;
	int _spokeCount;
	CGSize _shadowOffset;
	UIColor* _shadowColor;
	float _innerRadius;
	int _spokeFrameRatio;
	NSArray* _spokeImages;
	BOOL _clockWise;
	BOOL _spinning;
	float _spinningDuration;
	BOOL _useArtwork;
	NSString* _artBackupKeyString;
	UIImageView* _internalView;
}
@property(assign, nonatomic) int activityIndicatorViewStyle;	// @synthesize=_activityIndicatorViewStyle
@property(readonly, assign, nonatomic) NSString* artBackupKeyString;	// @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// @synthesize=_clockWise
@property(retain, nonatomic) UIColor* color;	// @synthesize=_color
@property(assign) BOOL hasShadow;	// @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// @synthesize=_hidesWhenStopped
@property(assign, nonatomic) float innerRadius;	// @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView* internalView;	// @synthesize=_internalView
@property(retain, nonatomic) UIColor* shadowColor;	// @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray* spokeImages;	// @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// @synthesize=_width
+(id)_loadResourcesForStyle:(int)style;
+(CGSize)defaultSizeForStyle:(int)style;
+(CGSize)size;
-(id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(float)_alphaValueForStep:(int)step;
-(void)_applicationDidEnterBackground:(id)_application;
-(void)_applicationWillEnterForeground:(id)_application;
-(id)_artBackupKey;
-(BOOL)_canCustomize;
-(BOOL)_canCustomizeStyle:(int)style;
-(id)_commonInitWithFrame:(CGRect)frame;
-(int)_customStyleForStyle:(int)style;
-(id)_defaulColorForStyle:(int)style;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(void)_feedTheGear;
-(id)_generateImages;
-(id)_imageForStep:(int)step;
-(BOOL)_isArtWorkBased;
-(id)_layoutInfosForStyle:(int)style;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_setUpAnimation;
-(BOOL)_shouldGoBackToBaseStyle;
-(BOOL)_shouldGoToCustomStyle;
-(float)_spokeLengthForGearWidth:(float)gearWidth;
-(float)_spokeWidthForGearWidth:(float)gearWidth;
-(id)_styleNameForStyle:(int)style;
-(void)_tearDownAnimation;
-(void)_updateInternalViewFrameWithBounds:(CGRect)bounds;
-(float)_widthForGearWidth:(float)gearWidth;
// declared property getter: -(int)activityIndicatorViewStyle;
-(id)artBackupKey;
// declared property getter: -(id)artBackupKeyString;
// declared property getter: -(BOOL)clockWise;
// declared property getter: -(id)color;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(void)generateImages;
// declared property getter: -(BOOL)hasShadow;
// declared property getter: -(BOOL)hidesWhenStopped;
// declared property getter: -(float)innerRadius;
// declared property getter: -(id)internalView;
-(BOOL)isAnimating;
-(BOOL)isHighlighted;
// declared property setter: -(void)setActivityIndicatorViewStyle:(int)style;
-(void)setAnimating:(BOOL)animating;
-(void)setAnimationDuration:(double)duration;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setClockWise:(BOOL)wise;
// declared property setter: -(void)setColor:(id)color;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHasShadow:(BOOL)shadow;
// declared property setter: -(void)setHidesWhenStopped:(BOOL)stopped;
-(void)setHighlighted:(BOOL)highlighted;
// declared property setter: -(void)setInnerRadius:(float)radius;
// declared property setter: -(void)setShadowColor:(id)color;
// declared property setter: -(void)setShadowOffset:(CGSize)offset;
// declared property setter: -(void)setSpinning:(BOOL)spinning;
// declared property setter: -(void)setSpinningDuration:(float)duration;
// declared property setter: -(void)setSpokeCount:(int)count;
// declared property setter: -(void)setSpokeFrameRatio:(int)ratio;
-(void)setStyle:(int)style;
// declared property setter: -(void)setUseArtwork:(BOOL)artwork;
// declared property setter: -(void)setWidth:(float)width;
// declared property getter: -(id)shadowColor;
// declared property getter: -(CGSize)shadowOffset;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(BOOL)spinning;
// declared property getter: -(float)spinningDuration;
// declared property getter: -(int)spokeCount;
// declared property getter: -(int)spokeFrameRatio;
// declared property getter: -(id)spokeImages;
-(void)startAnimating;
-(void)startAnimation;
-(void)stopAnimating;
-(void)stopAnimation;
// declared property getter: -(BOOL)useArtwork;
// declared property getter: -(float)width;
@end

@interface UIActivityIndicatorView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end
