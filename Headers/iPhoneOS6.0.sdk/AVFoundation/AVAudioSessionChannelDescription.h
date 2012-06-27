/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AVAudioSessionChannelDescription : XXUnknownSuperclass {
@private
	void* _impl;
}
@property(readonly, assign) NSString* channelName;
@property(readonly, assign) unsigned channelNumber;
@property(readonly, assign) NSString* owningPortUID;
+(id)privateCreateChannelDescriptionsArrayWithCFArray:(CFArrayRef)cfarray portUID:(CFStringRef)uid;
+(id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef portUID:(CFStringRef)uid channelNumber:(unsigned long)number;
-(id)init;
// declared property getter: -(id)channelName;
// declared property getter: -(unsigned)channelNumber;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)owningPortUID;
-(ChannelDescriptionImpl*)privateGetImplementation;
@end
