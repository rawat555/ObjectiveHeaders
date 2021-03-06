/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSLocking.h"


__attribute__((visibility("hidden")))
@interface _PFLock : XXUnknownSuperclass <NSLocking> {
@private
	int _cd_rc;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned _count;
}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)lock;
-(BOOL)tryLock;
-(void)unlock;
@end

