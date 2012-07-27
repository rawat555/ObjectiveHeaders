/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, RTFReaderState, RTFCPZArchive, RTF_CMArchiveManager, NSMapTable, NSMutableString, NSURL, NSData, RTFHTMLWriter, RTFNSColor;

__attribute__((visibility("hidden")))
@interface RTFReader : XXUnknownSuperclass {
@private
	RTFReaderState* _readerState;
	RTFHTMLWriter* _htmlWriter;
	RTF_CMArchiveManager* _archiver;
	RTFCPZArchive* _zipArchive;
	NSURL* _packageURL;
	NSMutableString* _currentString;
	NSMutableString* _topString;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;
	unsigned _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	RTFNSColor* _documentBackgroundColor;
	NSMutableDictionary* _documentInfoDictionary;
	NSMapTable* _cachedRTFFontTable;
	float _hyphenationFactor;
	float _defaultTabInterval;
	NSRTFPriv _private;
	BOOL _textBufferContentsIsFat;
	BOOL _explicitCharSetEncountered;
	BOOL _isRTLDocument;
	int _readLimit;
	int _thumbnailLimit;
	BOOL _limitReached;
	BOOL _currentRowIsLast;
}
-(id)initWithData:(id)data archiver:(id)archiver;
-(id)initWithPackageURL:(id)packageURL archiver:(id)archiver;
-(id)initWithZippedRTFD:(id)zippedRTFD archiver:(id)archiver;
-(id)_initWithArchiver:(id)archiver;
-(void)_insertAttachmentNamed:(id)named;
-(int)cocoaSubVersion;
-(int)cocoaVersion;
-(void)dealloc;
-(float)defaultTabInterval;
-(float)floatCocoaVersion;
-(void)read;
-(void)setBackgroundColor:(id)color;
-(void)setCocoaSubVersion:(int)version;
-(void)setCocoaVersion:(int)version;
-(void)setDefaultTabInterval:(float)interval;
-(void)setHyphenationFactor:(float)factor;
-(void)setReadOnly:(int)only;
@end
