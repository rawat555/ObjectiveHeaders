/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKLeaderboardSection.h"


@interface GKDualLeaderboardSection : GKLeaderboardSection {
}
-(int)numberOfContentColumnsInTableView:(id)tableView;
-(void)prepareLeaderboards;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item column:(int)column;
@end

