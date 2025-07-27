//
//  AWHBPBWeakScriptMessageDelegate.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBWeakScriptMessageDelegate : NSObject

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end

NS_ASSUME_NONNULL_END
