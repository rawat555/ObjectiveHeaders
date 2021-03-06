/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDocumentInteractionControllerDelegate.h"

@class EKAttachment, EKEventAttachmentCell;
@protocol EKEventAttachmentCellControllerDelegate;

@interface EKEventAttachmentCellController : XXUnknownSuperclass <UIDocumentInteractionControllerDelegate> {
	EKAttachment* _attachment;
	id _downloadID;
	EKEventAttachmentCell* _cell;
	id<EKEventAttachmentCellControllerDelegate> _delegate;
}
@property(retain, nonatomic) EKAttachment* attachment;	// @synthesize=_attachment
@property(readonly, assign) EKEventAttachmentCell* cell;	// @synthesize=_cell
@property(assign, nonatomic) id<EKEventAttachmentCellControllerDelegate> delegate;	// @synthesize=_delegate
+(BOOL)_attachmentIsViewable:(id)viewable;
+(id)cellControllersForAttachments:(id)attachments givenExistingControllers:(id)controllers;
-(id)initWithAttachment:(id)attachment;
-(void)_clearDownloadID;
-(id)_downloadProgressStringWithDownloadedBytes:(id)downloadedBytes outOfTotalBytes:(id)totalBytes;
-(void)_presentPreviewOnMainThreadWithInfo:(id)info;
-(void)_presentPreviewWithURL:(id)url filename:(id)filename;
// declared property getter: -(id)attachment;
// declared property getter: -(id)cell;
-(void)cellSelected;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)documentInteractionControllerViewControllerForPreview:(id)preview;
-(id)documentInteractionControllerViewForPreview:(id)preview;
// declared property setter: -(void)setAttachment:(id)attachment;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)tearDown;
@end

