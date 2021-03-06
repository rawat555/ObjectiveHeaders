/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSObject.h"


@protocol GKContentRefresh <NSObject>
@optional
-(void)_gkForceNextContentUpdate;
@required
-(void)_gkResetContents;
@optional
-(void)_gkSetContentsNeedUpdateWithHandler:(id)handler;
@required
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
@end

