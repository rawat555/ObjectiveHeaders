/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSKeyValueObservationInfo, NSKeyValueProperty, NSKeyValueObservance, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueShareableObservationInfoKey : XXUnknownSuperclass {
@private
	BOOL _addingNotRemoving;
	NSKeyValueObservationInfo* _baseObservationInfo;
	NSObject* _additionObserver;
	NSKeyValueProperty* _additionProperty;
	unsigned _additionOptions;
	void* _additionContext;
	NSObject* _additionOriginalObservable;
	NSKeyValueObservance* _removalObservance;
	unsigned _removalObservanceIndex;
}
@end
