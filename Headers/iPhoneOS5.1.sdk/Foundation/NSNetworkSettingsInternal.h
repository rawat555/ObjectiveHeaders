/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSNetworkSettingsInternal : XXUnknownSuperclass {
@private
	SCDynamicStoreRef store;
	CFRunLoopSourceRef storeSource;
	NSDictionary* proxyDictionary;
	BOOL ftpPassiveEnabled;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;
}
-(void)dealloc;
-(void)finalize;
@end
