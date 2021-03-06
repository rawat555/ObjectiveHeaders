/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIActivityItemImageRep : XXUnknownSuperclass {
@private
	id _asset;
	id _thumbnailProvider;
	id _dataProvider;
}
@property(retain, nonatomic) id asset;	// @synthesize=_asset
@property(copy, nonatomic) id dataProvider;	// @synthesize=_dataProvider
@property(copy, nonatomic) id thumbnailProvider;	// @synthesize=_thumbnailProvider
+(id)activityItemImageRepWithAsset:(id)asset thumbnailProvider:(id)provider dataProvider:(id)provider3;
// declared property getter: -(id)asset;
-(id)data;
// declared property getter: -(id)dataProvider;
-(void)dealloc;
// declared property setter: -(void)setAsset:(id)asset;
// declared property setter: -(void)setDataProvider:(id)provider;
// declared property setter: -(void)setThumbnailProvider:(id)provider;
-(id)thumbnail;
// declared property getter: -(id)thumbnailProvider;
@end

