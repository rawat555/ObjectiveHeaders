/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

@interface GKAlertView : XXUnknownSuperclass {
	UIView* _clipView;
	UIView* _contentView;
}
+(void)initialize;
+(CGSize)preferredContentViewSize;
-(id)initAlertView;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;
-(BOOL)_canDrawContent;
-(void)_changePanelInAnimationDidStop:(id)_changePanelInAnimation finished:(id)finished context:(void*)context;
-(void)_changePanelOutAnimationDidStop:(id)_changePanelOutAnimation finished:(id)finished context:(void*)context;
-(void)_replaceContentView:(id)view animated:(BOOL)animated;
-(id)contentView;
-(void)dealloc;
-(void)layoutAnimated:(BOOL)animated;
-(void)setContentView:(id)view animated:(BOOL)animated;
@end

