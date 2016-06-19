//
//  DZAlertPool.h
//  MoShang
//
//  Created by stonedong on 15/2/15.
//  Copyright (c) 2015年 stonedong. All rights reserved.
//

#import <Foundation/Foundation.h>
#define DZDefaultAlertPool [DZAlertPool defaultPool]

#define DZAlertShowLoading(mssage) [DZDefaultAlertPool showLoadingWithMessage:mssage];
#define DZAlertHideLoading  [DZDefaultAlertPool hideAllAlert];
#define DZAlertShowError(message) [DZDefaultAlertPool showErrorWithMessage:message];
#define DZAlertShowSuccess(message) [DZDefaultAlertPool showSuccessWithMessage:message];

#define DZAlertHUDLoading(message) [DZDefaultAlertPool showHUDLoadingWithMessage:message];
#define DZAlertHUDShowStatus(message) [DZDefaultAlertPool showHUDStatusWithMessag:message];
#define DZAlertHUDSuccess(message) [DZDefaultAlertPool showHUDSccessWithMessage:message];
#define DZAlertHUDFailure(message) [DZDefaultAlertPool showHUDFailureWithMessage:message];

@interface DZAlertPool : NSObject
+ (DZAlertPool*) defaultPool;
- (void) showLoadingWithMessage:(NSString*)msg;
- (void) showErrorWithMessage:(NSString *)msg;
- (void) showSuccessWithMessage:(NSString *)msg;

- (void) showHUDLoadingWithMessage:(NSString *)msg;
- (void) showHUDStatusWithMessag:(NSString *)message;
- (void) showHUDSccessWithMessage:(NSString *)message;
- (void) showHUDFailureWithMessage:(NSString *)message;
- (void) hideAllAlert;
@end
