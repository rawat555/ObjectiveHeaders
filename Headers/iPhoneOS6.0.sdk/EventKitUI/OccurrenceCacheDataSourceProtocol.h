/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol OccurrenceCacheDataSourceProtocol <NSObject>
-(id)initWithEventStore:(id)eventStore calendars:(id)calendars;
-(int)cachedDayCount;
-(id)cachedOccurrenceAtIndexPath:(id)indexPath;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(int)countOfOccurrencesAtDayIndex:(int)dayIndex;
-(id)dateAtDayIndex:(int)dayIndex;
-(void)fetchDaysInBackgroundStartingFromSection:(int)section;
-(void)invalidate;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)term;
-(int)sectionForCachedOccurrencesOnDate:(id)cachedOccurrencesOnDate;
-(void)stopSearching;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
@end

