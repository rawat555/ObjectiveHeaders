/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKPlayer.h"


@interface GKSpecialPlayer : GKPlayer {
}
-(id)alias;
-(id)attributedDisplayNameWithIdentifiableName:(BOOL)identifiableName withFont:(id)font;
-(id)autorelease;
-(id)displayNameWithIdentifiableName:(BOOL)identifiableName quoteAlias:(BOOL)alias;
-(BOOL)isFriend;
-(void)loadProfilePieces:(unsigned)pieces withCompletionHandler:(id)completionHandler;
-(id)managedObjectContext;
-(oneway void)release;
-(id)sortName;
-(XXStruct_nh4N8A)stats;
@end
