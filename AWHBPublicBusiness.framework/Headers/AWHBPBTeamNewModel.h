//
//  AWHBPBTeamNewModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTeamNewModel : NSObject

///时间 2024-09-07 15:49:29
@property(nonatomic,copy)NSString *atime;
/// admin
@property(nonatomic,copy)NSString *auser;

@property(nonatomic,assign)NSInteger banNum;
@property(nonatomic,assign)NSInteger carNum;
/// 公司ID
@property(nonatomic,copy)NSString *cmpId;
@property(nonatomic,assign)NSInteger delNum;
///扩展字段 "{\"sslx\":\"1\",\"sslx.text\":\"车队\"}"
@property(nonatomic,copy)NSString *exts;
///车队ID id": "10155"
@property(nonatomic,copy)NSString *teamId;
///车队名称  name": "测试协议自定义车队"
@property(nonatomic,copy)NSString *teamName;
/// 是否没有权限
@property(nonatomic,assign)BOOL noAuth;
@property(nonatomic,copy)NSString *pid;
/// -5.604901033339189E301
@property(nonatomic,assign)NSInteger seq;
@property(nonatomic,assign)NSInteger videoNum;
@property(nonatomic,assign)NSInteger onCount;
@property(nonatomic,assign)NSInteger offCount;

@end

NS_ASSUME_NONNULL_END
