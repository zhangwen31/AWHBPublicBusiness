//
//  AWHBPBDrivingAnalysisDataModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDrivingAnalysisDataModel : NSObject

@property(nonatomic,copy)NSString *dmile;
@property(nonatomic,copy)NSString *endAddr;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *longStr;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *startTime;
-(id)initWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
