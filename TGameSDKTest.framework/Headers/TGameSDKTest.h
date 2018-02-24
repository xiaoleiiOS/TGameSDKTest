//
//  TGameSDK.h
//  TGameSDKTestDemo
//
//  Created by TW-C-060 on 2018/2/8.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TGameSDKTest/TGRouter.h>


/** TGame delegate */
@protocol TGameDelegate <NSObject>

/** Callback of login success
 */
-(void) tLoginSuccessWithType:(NSString *)typeName;

@end

@interface TGameSDKTest : NSObject

@property (nonatomic, weak) id <TGameDelegate> tgameDelegate;

+(TGameSDKTest *)instance;

- (void)doLogin;

@end
