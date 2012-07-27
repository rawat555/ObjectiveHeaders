/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImplGeometryDelegate.h"
#import "UIKeyboard.h"
#import "UIView.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	BOOL m_typingDisabled;
	BOOL m_minimized;
	BOOL m_respondingToImplGeometryChange;
	int m_orientation;
}
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;
@property(assign, nonatomic) BOOL typingEnabled;
+(void)initImplementationNow;
+(void)_clearActiveKeyboard;
+(id)activeKeyboard;
+(CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)defaultSizeForOrientation:(int)orientation;
+(BOOL)isOnScreen;
+(CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;
+(CGRect)onscreenFrameForTextInputTraits:(id)textInputTraits;
+(void)removeAllDynamicDictionaries;
+(BOOL)respondsToProxGesture;
+(CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithDefaultSize;
-(id)initWithFrame:(CGRect)frame;
-(void)acceptAutocorrection;
-(void)activate;
-(void)autoAdjustOrientation;
-(void)autoAdjustOrientationForSize:(CGSize)size;
-(BOOL)canDismiss;
-(void)clearSnapshot;
-(void)deactivate;
-(void)dealloc;
-(id)defaultTextInputTraits;
-(id)delegate;
-(void)displayLayer:(id)layer;
-(void)geometryChangeDone:(BOOL)done;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;
-(int)interfaceOrientation;
-(BOOL)isActive;
// declared property getter: -(BOOL)isMinimized;
-(void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;
-(void)maximize;
-(void)minimize;
-(void)movedFromSuperview:(id)superview;
-(int)orientation;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)prepareForGeometryChange;
-(void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;
-(void)removeAutocorrectPrompt;
-(void)removeFromSuperview;
-(void)resizeForKeyplaneSize:(CGSize)keyplaneSize;
-(BOOL)returnKeyEnabled;
-(void)setCaretBlinks:(BOOL)blinks;
-(void)setCaretVisible:(BOOL)visible;
-(void)setDefaultTextInputTraits:(id)traits;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setMinimized:(BOOL)minimized;
-(void)setNeedsDisplay;
-(void)setReturnKeyEnabled:(BOOL)enabled;
// declared property setter: -(void)setTypingEnabled:(BOOL)enabled;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)takeSnapshot;
-(int)textEffectsVisibilityLevel;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
// declared property getter: -(BOOL)typingEnabled;
-(void)updateLayout;
@end

@interface UIKeyboard (UIManualKeyboardAdditions)
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWasOrderedOut;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
@end

@interface UIKeyboard (TestingSupport)
-(void)_acceptCurrentCandidate;
-(id)_baseKeyForRepresentedString:(id)representedString;
-(void)_changeToKeyplane:(id)keyplane;
-(void)_clearCurrentInputManager;
-(id)_getAutocorrection;
-(id)_getCurrentKeyboardName;
-(id)_getCurrentKeyplaneName;
-(id)_getLocalizedInputMode;
-(BOOL)_hasCandidates;
-(id)_keyplaneForKey:(id)key;
-(id)_keyplaneNamed:(id)named;
-(int)_positionInCandidateList:(id)candidateList;
-(void)_setAutocorrects:(BOOL)autocorrects;
-(void)_setInputMode:(id)mode;
-(id)_touchPoint:(CGPoint)point;
-(id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;
@end

@interface UIKeyboard (UIPeripheralHostAdditions)
-(BOOL)_isAutomaticKeyboard;
@end
