//
//  AWHBPBCarMessageIssueModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/6/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AWHBPBCarMessageIssueType) {
    AWHBPBCarMessageIssueTypeWaitingReply           = 0, //等待回复
    AWHBPBCarMessageIssueTypeOffline                = 1, //离线不发
    AWHBPBCarMessageIssueTypeTerminalNotReply       = 2, //终端未回复
    AWHBPBCarMessageIssueTypeSuccess                = 3, //成 功
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarMessageIssueModel : NSObject

/// 车辆ID
@property (nonatomic, strong) NSString *carId;
/// 车牌号码
@property (nonatomic, strong) NSString *plate;
/// 车牌名称
@property (nonatomic, strong) NSString *name;
/// 终端号码
@property (nonatomic, strong) NSString *tmnKey;
/// 是否在线
@property (nonatomic, assign) BOOL online;

@property (nonatomic, assign) AWHBPBCarMessageIssueType type;

@end

NS_ASSUME_NONNULL_END
