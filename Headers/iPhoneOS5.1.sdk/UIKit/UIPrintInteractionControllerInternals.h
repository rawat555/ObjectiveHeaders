/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPrintPaper, PKPrinter, PKPrintSettings, UIPrintingProgress, UIPrintPanelViewController, UIPrintPageRenderer, UIPrintInfo;

__attribute__((visibility("hidden")))
@interface UIPrintInteractionControllerInternals : XXUnknownSuperclass {
@private
	int _pageCount;
	NSRange _pageRange;
	int _currentPage;
	UIPrintPanelViewController* _printPanelViewController;
	UIPrintingProgress* _printingProgress;
	PKPrinter* _printer;
	UIPrintPaper* _paper;
	PKPrintSettings* _printSettings;
	UIPrintInfo* _activePrintInfo;
	int _printInfoState;
	BOOL _supressNotifyDismissed;
	UIPrintPageRenderer* _formatterRenderer;
}
-(void)dealloc;
@end

