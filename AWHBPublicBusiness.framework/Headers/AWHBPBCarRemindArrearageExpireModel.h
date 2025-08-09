//
//  AWHBPBCarRemindArrearageExpireModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarRemindArrearageExpireModel : NSObject

//创建时间 格式：yyyy-mm-dd hh:mm:ss
@property(nonatomic,copy)NSString *atime;
//创建人
@property(nonatomic,copy)NSString *auser;
//备注
@property(nonatomic,copy)NSString *des;
//结束日期 格式：yyyy-mm-dd
@property(nonatomic,copy)NSString *endDay;
//ID号
@property(nonatomic,copy)NSString *id;
//收费金额
@property(nonatomic,copy)NSString *money;
//过期情况
@property(nonatomic,copy)NSString *result;
//开始日期 格式：yyyy-mm-dd
@property(nonatomic,copy)NSString *startDay;


@end

NS_ASSUME_NONNULL_END
