/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PFUbiquityFileCoordinator : XXUnknownSuperclass {
}
+(void)destroyFilePresenterForUbiquityRootPath:(id)ubiquityRootPath;
+(void)initialize;
+(id)newFileCoordinatorForUbiquitizedStore:(id)ubiquitizedStore;
+(id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)ubiquitousExternalDataReferenceLocation;
+(id)newFileCoordinatorForUbiquityRootPath:(id)ubiquityRootPath;
-(void)coordinateReadingItemAtURL:(id)url options:(unsigned)options retryOnError:(BOOL)error error:(id*)error4 byAccessor:(id)accessor;
@end
