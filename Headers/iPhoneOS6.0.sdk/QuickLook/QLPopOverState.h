/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIPrintInteractionControllerDelegate.h"

@class UIDocumentInteractionController, UIBarButtonItem;

@interface QLPopOverState : XXUnknownSuperclass <UIDocumentInteractionControllerDelegate, UIPrintInteractionControllerDelegate> {
	id _delegate;
	UIDocumentInteractionController* _documentInteractionController;
	int _popOverState;
	UIBarButtonItem* _barButtonItem;
	BOOL _inRotation;
}
@property(assign) int popOverState;	// @synthesize=_popOverState
-(id)initWithDocumentInteractionController:(id)documentInteractionController delegate:(id)delegate;
-(void)dealloc;
-(void)didRotate;
-(void)dismissMenuAnimated:(BOOL)animated;
-(BOOL)documentInteractionController:(id)controller canPerformAction:(SEL)action;
-(BOOL)documentInteractionController:(id)controller performAction:(SEL)action;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)documentInteractionController;
-(id)documentInteractionControllerViewControllerForPreview:(id)preview;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)documentInteractionController;
// declared property getter: -(int)popOverState;
-(void)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)presentPrintMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)printInteractionController;
-(void)printInteractionControllerWillPresentPrinterOptions:(id)printInteractionController;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setPopOverState:(int)state;
-(void)willRotate;
@end

