/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKButton.h"
#import "GameKit-Structs.h"


@interface GKStretchableRibbonButton : GKButton {
@private
	float _idealWidth;
}
@property(assign, nonatomic) float idealWidth;	// @synthesize=_idealWidth
+(float)minimumWidthForString:(id)string;
-(id)initWithFrame:(CGRect)frame;
-(id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL*)normalState;
-(UIEdgeInsets)_gkPopoverPresentationInsets;
// declared property getter: -(float)idealWidth;
// declared property setter: -(void)setIdealWidth:(float)width;
-(void)updateLetterpressStyle;
@end

