/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView {
@private
	CALayer* _mask;
}
@property(retain, nonatomic) CALayer* mask;
+(id)classFallbacksForKeyedArchiver;
-(id)_cell;
-(void)dealloc;
// declared property getter: -(id)mask;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setMask:(id)mask;
@end

