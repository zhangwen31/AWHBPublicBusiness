//
//  AWHBPBSelectTerminalModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectTerminalModel : NSObject
/// 终端标识
@property (nonatomic, strong) NSString *tmnKey;
/// 终端号码
@property (nonatomic, strong) NSString *tmnNo;
/// SIM卡号
@property (nonatomic, strong) NSString *simCard;
/// 标识类型
@property (nonatomic, strong) NSString *keyType;
/// 终端ID
@property (nonatomic, strong) NSString *tmnId;
/// 终端图片
@property (nonatomic, strong) NSDictionary *pics;

@property (nonatomic, assign) BOOL isSelect;

@end

NS_ASSUME_NONNULL_END
