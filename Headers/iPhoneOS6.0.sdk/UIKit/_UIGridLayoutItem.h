/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class _UIGridLayoutSection, _UIGridLayoutRow;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutItem : XXUnknownSuperclass {
@private
	_UIGridLayoutSection* _section;
	_UIGridLayoutRow* _rowObject;
	CGRect _itemFrame;
}
@property(assign, nonatomic) CGRect itemFrame;	// @synthesize=_itemFrame
@property(assign, nonatomic) _UIGridLayoutRow* rowObject;	// @synthesize=_rowObject
@property(assign, nonatomic) _UIGridLayoutSection* section;	// @synthesize=_section
-(id)copy;
// declared property getter: -(CGRect)itemFrame;
// declared property getter: -(id)rowObject;
// declared property getter: -(id)section;
// declared property setter: -(void)setItemFrame:(CGRect)frame;
// declared property setter: -(void)setRowObject:(id)object;
// declared property setter: -(void)setSection:(id)section;
@end
