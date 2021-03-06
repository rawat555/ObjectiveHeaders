/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface ABCapabilitiesManager : XXUnknownSuperclass {
	BOOL _isListeningToFTCServiceAvailability;
}
+(void)_setDefaultCapabilitiesManager:(id)manager;
+(id)defaultCapabilitiesManager;
-(void)_startListeningToFTCServiceAvailabilityIfNecessary;
-(void)addFTCServiceAvailabilityListener:(id)listener selector:(SEL)selector;
-(id)conferenceURLForDestinationID:(id)destinationID;
-(id)conferenceURLForPhoneNumber:(id)phoneNumber;
-(void)dealloc;
-(BOOL)hasAdditionalTextTones;
-(BOOL)hasCameraCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)hasPreviouslyConferencedWithID:(id)anId;
-(BOOL)hasSMSCapability;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasVibratorCapability;
-(BOOL)isConferencingAvailable;
-(BOOL)isConferencingEverGonnaBeAvailable;
-(BOOL)isEmailConfigured;
-(BOOL)isMMSConfigured;
-(BOOL)isMadridConfigured;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)isTwitterServiceAvailable;
-(BOOL)isWeiboServiceAvailable;
-(void)removeFTCServiceAvailabilityListener:(id)listener;
@end

