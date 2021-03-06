/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLAdapter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSSQLAdapter {
@private
	NSString* _dbpath;
}
-(id)initWithSQLCore:(id)sqlcore;
-(id)createConnection;
-(void)dealloc;
-(id)pathnameForDatabase;
-(id)sqliteVersion;
-(Class)statementClass;
-(BOOL)supportsCorrelatedSubqueries;
-(id)type;
-(id)typeStringForColumn:(id)column;
-(id)typeStringForSQLType:(unsigned)sqltype;
@end

