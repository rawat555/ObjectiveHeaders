/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKThemeBrush.h"

@class NSPredicate;

@interface GKConditionBrush : GKThemeBrush {
@private
	NSPredicate* _predicate;
	GKThemeBrush* _yesBrush;
	GKThemeBrush* _noBrush;
}
@property(retain, nonatomic) GKThemeBrush* noBrush;	// @synthesize=_noBrush
@property(retain, nonatomic) NSPredicate* predicate;	// @synthesize=_predicate
@property(retain, nonatomic) GKThemeBrush* yesBrush;	// @synthesize=_yesBrush
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property getter: -(id)noBrush;
// declared property getter: -(id)predicate;
// declared property setter: -(void)setNoBrush:(id)brush;
// declared property setter: -(void)setPredicate:(id)predicate;
// declared property setter: -(void)setYesBrush:(id)brush;
// declared property getter: -(id)yesBrush;
@end
