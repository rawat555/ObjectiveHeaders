/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"
#import "GKTableViewCellContents.h"

@class GKLabel, GKRatingHeaderControl, GKGame, GKGameRecord, UIView, UIImageView, NSURL;

@interface GKGameDetailHeaderView : XXUnknownSuperclass <GKTableViewCellContents> {
@private
	GKLabel* _titleView;
	GKLabel* _subtitleView;
	UIImageView* _iconView;
	GKGame* _game;
	GKGameRecord* _gameRecord;
	NSURL* _fontURL;
	UIView* _dividerView;
	GKRatingHeaderControl* _ratingControl;
}
@property(assign, nonatomic) CGRect confirmationButtonRect;
@property(retain, nonatomic) UIView* dividerView;	// @synthesize=_dividerView
@property(retain, nonatomic) NSURL* fontURL;	// @synthesize=_fontURL
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKGameRecord* gameRecord;	// @synthesize=_gameRecord
@property(retain, nonatomic) UIImageView* iconView;	// @synthesize=_iconView
@property(retain, nonatomic) GKRatingHeaderControl* ratingControl;	// @synthesize=_ratingControl
@property(retain, nonatomic) GKLabel* subtitleView;	// @synthesize=_subtitleView
@property(retain, nonatomic) GKLabel* titleView;	// @synthesize=_titleView
+(float)defaultRowHeight;
-(id)init;
-(void)applyRating:(id)rating;
-(void)dealloc;
// declared property getter: -(id)dividerView;
// declared property getter: -(id)fontURL;
// declared property getter: -(id)game;
// declared property getter: -(id)gameRecord;
// declared property getter: -(id)iconView;
-(void)layoutSubviews;
-(float)preferredHeightForOrientation:(int)orientation;
-(void)prepareForReuse;
// declared property getter: -(id)ratingControl;
-(void)readRating;
// declared property setter: -(void)setDividerView:(id)view;
// declared property setter: -(void)setFontURL:(id)url;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setGameRecord:(id)record;
// declared property setter: -(void)setIconView:(id)view;
// declared property setter: -(void)setRatingControl:(id)control;
-(void)setSubtitleText:(id)text;
// declared property setter: -(void)setSubtitleView:(id)view;
-(void)setTheme:(id)theme;
// declared property setter: -(void)setTitleView:(id)view;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)subtitleView;
-(id)theme;
// declared property getter: -(id)titleView;
@end
