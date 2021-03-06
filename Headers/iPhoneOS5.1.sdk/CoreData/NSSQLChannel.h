/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectContext, NSSQLConnection, NSSQLCore, NSSQLEntity, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLChannel : XXUnknownSuperclass {
@private
	NSSQLConnection* _connection;
	NSSQLCore* _sqlCore;
	NSSQLEntity* _currentEntity;
	NSMutableArray* _fetchProperties;
	NSManagedObjectContext* _currentMOCon;
}
-(id)initWithSQLCore:(id)sqlcore;
-(void)_closeChannel;
-(void)_openChannel;
-(id)_propertiesToFetch;
-(void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)fetchRequest;
-(id)connection;
-(id)currentContext;
-(void)dealloc;
-(void)endFetch;
-(void)endFetchAndRecycleStatement:(BOOL)statement;
-(void)finalize;
-(BOOL)isFetchInProgress;
-(BOOL)selectCountWithFetchRequest:(id)fetchRequest;
-(void)selectRowsWithCachedStatement:(id)cachedStatement;
-(void)selectRowsWithFetchRequest:(id)fetchRequest;
-(void)selectRowsWithStatement:(id)statement;
-(void)setCurrentContext:(id)context;
-(void)setCurrentEntity:(id)entity;
-(id)sqlCore;
@end

