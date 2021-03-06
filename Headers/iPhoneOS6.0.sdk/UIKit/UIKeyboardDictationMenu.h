/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView {
}
+(id)activeInstance;
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)centerPopUpOverKey;
-(void)cleanupForFadeOrHide;
-(void)fade;
-(void)fadeWithDelay:(double)delay;
-(void)hide;
-(void)performShowAnimation;
-(CGSize)preferredSize;
-(void)setKeyboardDimmedForDictation:(BOOL)dictation;
-(void)show;
-(BOOL)usesTable;
@end

