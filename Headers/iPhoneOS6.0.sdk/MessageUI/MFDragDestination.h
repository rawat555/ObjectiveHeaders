/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "NSObject.h"


@protocol MFDragDestination <NSObject>
-(void)dragEntered:(id)entered atPoint:(CGPoint)point;
-(void)dragExited:(id)exited;
-(void)dragUpdated:(id)updated atPoint:(CGPoint)point;
-(void)dropItem:(id)item;
-(CGRect)dropRect;
-(id)supportedDropTypes:(id)types;
-(id)viewForDrop;
@end

