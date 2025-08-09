//
//  AWHBPBQueryMileModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/12/28.
//

#import <Foundation/Foundation.h>
#import "AWHBPBMileageModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBQueryMileModel : NSObject

@property(nonatomic,strong)NSString *mile;
@property(nonatomic,strong)NSArray<AWHBPBMileageModel *> *list;
@property(nonatomic,strong)NSString *numDay;

@end

NS_ASSUME_NONNULL_END
