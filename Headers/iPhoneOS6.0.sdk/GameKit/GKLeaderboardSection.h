/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKInterleavedListTableSection.h"

@class GKSparseLeaderboard, NSObject, GKDecoratedLabel, GKThreadsafeDictionary, NSIndexPath, NSArray, GKGame, NSString, GKPlayer;
@protocol GKLeaderboardDelegate;

@interface GKLeaderboardSection : GKInterleavedListTableSection {
@private
	NSString* _title;
	GKGame* _game;
	GKPlayer* _player;
	NSString* _categoryID;
	NSArray* _searchPlayers;
	int _timeScope;
	int _playerScope;
	BOOL _usesUppercaseTitles;
	NSArray* _leaderboards;
	GKSparseLeaderboard* _friendLeaderboard;
	GKSparseLeaderboard* _globalLeaderboard;
	NSObject<GKLeaderboardDelegate>* _leaderboardDelegate;
	GKDecoratedLabel* _statusView;
	NSIndexPath* _previouslySelectedIndexPath;
	GKThreadsafeDictionary* _playerDictionary;
}
@property(retain, nonatomic) NSString* categoryID;	// @synthesize=_categoryID
@property(retain, nonatomic) GKSparseLeaderboard* friendLeaderboard;	// @synthesize=_friendLeaderboard
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKSparseLeaderboard* globalLeaderboard;	// @synthesize=_globalLeaderboard
@property(assign, nonatomic) NSObject<GKLeaderboardDelegate>* leaderboardDelegate;	// @synthesize=_leaderboardDelegate
@property(retain, nonatomic) NSArray* leaderboards;	// @synthesize=_leaderboards
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
@property(retain, nonatomic) GKThreadsafeDictionary* playerDictionary;	// @synthesize=_playerDictionary
@property(assign, nonatomic) int playerScope;	// @synthesize=_playerScope
@property(retain, nonatomic) NSIndexPath* previouslySelectedIndexPath;	// @synthesize=_previouslySelectedIndexPath
@property(retain, nonatomic) NSArray* searchPlayers;	// @synthesize=_searchPlayers
@property(retain, nonatomic) GKDecoratedLabel* statusView;	// @synthesize=_statusView
@property(assign, nonatomic) int timeScope;	// @synthesize=_timeScope
@property(assign, nonatomic) BOOL usesUppercaseTitles;	// @synthesize=_usesUppercaseTitles
-(id)init;
-(id)initWithGame:(id)game;
-(int)_defaultPlayerScopeForColumnIndex:(int)columnIndex;
-(BOOL)_showDisclosureChevronForPlayer:(id)player;
-(void)cachePlayer:(id)player inDictionary:(id)dictionary;
-(BOOL)canSelectPlayer:(id)player;
// declared property getter: -(id)categoryID;
-(int)contentRowCountInTableView:(id)tableView column:(int)column;
-(void)dealloc;
-(void)filterWithSearchText:(id)searchText;
-(int)footerRowCountInTableView:(id)tableView column:(int)column;
-(void)forwardHandlePressGesture:(id)gesture forTableView:(id)tableView;
// declared property getter: -(id)friendLeaderboard;
// declared property getter: -(id)game;
// declared property getter: -(id)globalLeaderboard;
-(int)headerRowCountInTableView:(id)tableView column:(int)column;
-(float)heightForHeaderInTableView:(id)tableView;
-(Class)leaderboardCellClass;
-(Class)leaderboardCellContentsClass;
-(Class)leaderboardClass;
// declared property getter: -(id)leaderboardDelegate;
-(id)leaderboardForCategoryID:(id)categoryID timeScope:(int)scope playerScope:(int)scope3;
// declared property getter: -(id)leaderboards;
-(void)loadLeaderboards:(id)leaderboards complete:(id)complete;
-(int)numberOfContentColumnsInTableView:(id)tableView;
// declared property getter: -(id)player;
// declared property getter: -(id)playerDictionary;
-(id)playerForPlayerID:(id)playerID;
-(id)playerForScore:(id)score;
// declared property getter: -(int)playerScope;
-(void)prepareLeaderboards;
// declared property getter: -(id)previouslySelectedIndexPath;
-(void)purgeCachedData;
-(void)refreshDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
// declared property getter: -(id)searchPlayers;
-(id)searchableLeaderboard;
-(int)sectionItemCountInTableView:(id)tableView;
-(int)sectionItemCountInTableView:(id)tableView column:(int)column;
-(id)sectionReuseIdentifierInTableView:(id)tableView;
-(int)sectionScoreCountInTableView:(id)tableView column:(int)column;
-(int)sectionShowcasedScoreCountInTableView:(id)tableView column:(int)column;
// declared property setter: -(void)setCategoryID:(id)anId;
// declared property setter: -(void)setFriendLeaderboard:(id)leaderboard;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setGlobalLeaderboard:(id)leaderboard;
// declared property setter: -(void)setLeaderboardDelegate:(id)delegate;
// declared property setter: -(void)setLeaderboards:(id)leaderboards;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setPlayerDictionary:(id)dictionary;
// declared property setter: -(void)setPlayerScope:(int)scope;
// declared property setter: -(void)setPreviouslySelectedIndexPath:(id)path;
// declared property setter: -(void)setSearchPlayers:(id)players;
// declared property setter: -(void)setStatusView:(id)view;
// declared property setter: -(void)setTimeScope:(int)scope;
-(void)setTitle:(id)title;
// declared property setter: -(void)setUsesUppercaseTitles:(BOOL)titles;
-(BOOL)showPortraitForScoreAtRow:(int)row;
// declared property getter: -(id)statusView;
-(float)tableView:(id)view baseHeightForScoreRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectIndexPath:(id)path;
-(id)tableView:(id)view headerCellWithIdentifier:(id)identifier atIndexPath:(id)indexPath;
-(id)tableView:(id)view headerTextForLeaderboard:(id)leaderboard uppercase:(BOOL)uppercase;
-(id)tableView:(id)view headerTextForLeaderboardWithPlayerScope:(int)playerScope andScoreCount:(int)count uppercase:(BOOL)uppercase;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view indexOfItemForPlayerID:(id)playerID;
-(id)tableView:(id)view indexPathsForLeaderboardRange:(NSRange)leaderboardRange inSection:(unsigned)section;
-(BOOL)tableView:(id)view isShowMoreRow:(int)row;
-(BOOL)tableView:(id)view isShowcasedScoreRow:(int)row;
-(id)tableView:(id)view itemAtIndex:(int)index;
-(id)tableView:(id)view itemAtIndex:(int)index column:(int)column;
-(int)tableView:(id)view itemIndexForIndexPath:(id)indexPath;
-(void)tableView:(id)view loadAdditionalDataForItems:(id)items thenUpdateView:(id)view3;
-(BOOL)tableView:(id)view loadAdditionalDataForSection:(int)section rows:(id)rows thenUpdateView:(id)view4;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item column:(int)column;
-(void)tableView:(id)view refreshCellAtIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row column:(int)column;
-(id)tableView:(id)view reuseIdentifiersForRow:(int)row;
-(BOOL)tableView:(id)view row:(int*)row column:(int*)column forItem:(id)item;
-(id)tableView:(id)view scoreCellWithIdentifiers:(id)identifiers atIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldSelectItem:(id)item;
-(void)tableView:(id)view showMoreInSection:(int)section;
-(id)tableView:(id)view statusCellWithIdentifier:(id)identifier atIndexPath:(id)indexPath;
-(void)tableView:(id)view willDrawCell:(id)cell forRowAtIndexPath:(id)indexPath;
// declared property getter: -(int)timeScope;
-(id)title;
-(id)titleForHeaderInTableView:(id)tableView;
-(void)updateStatusViewInTableView:(id)tableView;
// declared property getter: -(BOOL)usesUppercaseTitles;
-(id)viewForSectionHeaderInTableView:(id)tableView;
@end

