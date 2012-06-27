/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : XXUnknownSuperclass {
@private
	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;
}
-(id)initWithPath:(id)path;
-(id)_modelForVersionHashes:(id)versionHashes;
-(id)_modelForVersionHashes:(id)versionHashes inStyle:(unsigned)style;
-(id)bundle;
-(id)currentVersion;
-(id)currentVersionURL;
-(void)dealloc;
-(id)modelVersions;
-(id)optimizedVersionURL;
-(id)urlForModelVersionWithName:(id)name;
-(id)versionHashInfo;
-(id)versionInfoDictionary;
@end
