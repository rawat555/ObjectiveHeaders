/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewCell.h"

@class NSArray, GKCellBackgroundView;

@interface GKMultiColumnTableViewCell : GKTableViewCell {
	unsigned _columnCount;
	NSArray* _contentsArray;
@private
	int _selectedColumn;
	int _highlightedColumn;
	float _columnSeparatorWidth;
	SEL _columnCountSetter;
	SEL _selectedColumnSetter;
	BOOL _multiCellEnabled;
}
@property(readonly, assign, nonatomic) int activeColumn;
@property(readonly, assign, nonatomic) GKCellBackgroundView* cellBackgroundView;
@property(assign, nonatomic) unsigned columnCount;	// @synthesize=_columnCount
@property(assign, nonatomic) SEL columnCountSetter;	// @synthesize=_columnCountSetter
@property(assign, nonatomic) float columnSeparatorWidth;	// @synthesize=_columnSeparatorWidth
@property(copy, nonatomic) NSArray* contentsArray;	// @synthesize=_contentsArray
@property(assign, nonatomic) int highlightedColumn;	// @synthesize=_highlightedColumn
@property(assign, nonatomic) BOOL multiCellEnabled;	// @synthesize=_multiCellEnabled
@property(readonly, assign, nonatomic) GKCellBackgroundView* selectedCellBackgroundView;
@property(assign, nonatomic) int selectedColumn;	// @synthesize=_selectedColumn
@property(assign, nonatomic) SEL selectedColumnSetter;	// @synthesize=_selectedColumnSetter
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier tableViewStyle:(int)style3 backgroundStyle:(int)style4;
-(id)_gkDescriptionWithChildren:(int)children;
-(void)_multiColumnHighlight:(BOOL)highlight view:(id)view;
-(void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;
// declared property getter: -(int)activeColumn;
// declared property getter: -(id)cellBackgroundView;
// declared property getter: -(unsigned)columnCount;
// declared property getter: -(SEL)columnCountSetter;
// declared property getter: -(float)columnSeparatorWidth;
-(int)conditionalActiveColumn:(BOOL)column;
-(void)configureBackgroundView;
// declared property getter: -(id)contentsArray;
-(void)dealloc;
// declared property getter: -(int)highlightedColumn;
-(void)layoutSubviews;
// declared property getter: -(BOOL)multiCellEnabled;
-(void)multiColumnHighlight:(BOOL)highlight view:(id)view;
-(void)prepareForReuse;
// declared property getter: -(id)selectedCellBackgroundView;
// declared property getter: -(int)selectedColumn;
// declared property getter: -(SEL)selectedColumnSetter;
// declared property setter: -(void)setColumnCount:(unsigned)count;
// declared property setter: -(void)setColumnCountSetter:(SEL)setter;
// declared property setter: -(void)setColumnSeparatorWidth:(float)width;
// declared property setter: -(void)setContentsArray:(id)array;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
// declared property setter: -(void)setHighlightedColumn:(int)column;
-(void)setHighlightedColumn:(int)column highlighted:(BOOL)highlighted animated:(BOOL)animated;
// declared property setter: -(void)setMultiCellEnabled:(BOOL)enabled;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
// declared property setter: -(void)setSelectedColumn:(int)column;
-(void)setSelectedColumn:(int)column animated:(BOOL)animated;
// declared property setter: -(void)setSelectedColumnSetter:(SEL)setter;
-(void)updateBackgroundViews;
@end

