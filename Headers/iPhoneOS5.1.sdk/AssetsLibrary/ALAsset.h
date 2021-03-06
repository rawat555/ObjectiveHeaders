/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AssetsLibrary-Structs.h"

@class ALAssetPrivate;

@interface ALAsset : XXUnknownSuperclass {
@private
	id _internal;
}
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(retain, nonatomic) ALAssetPrivate* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic) ALAsset* originalAsset;
-(id)initWithManagedAsset:(id)managedAsset library:(id)library;
-(id)_typeAsString;
-(id)_uuid;
-(CGImageRef)aspectRatioThumbnail;
-(void)dealloc;
-(id)defaultRepresentation;
-(id)description;
// declared property getter: -(id)internal;
// declared property getter: -(BOOL)isEditable;
-(BOOL)isValid;
// declared property getter: -(id)originalAsset;
-(id)representationForUTI:(id)uti;
-(void)setImageData:(id)data metadata:(id)metadata completionBlock:(id)block;
// declared property setter: -(void)setInternal:(id)internal;
-(void)setVideoAtPath:(id)path completionBlock:(id)block;
-(CGImageRef)thumbnail;
-(id)valueForProperty:(id)property;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)savedPhotosAlbum metadata:(id)metadata completionBlock:(id)block;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)savedPhotosAlbum completionBlock:(id)block;
@end

