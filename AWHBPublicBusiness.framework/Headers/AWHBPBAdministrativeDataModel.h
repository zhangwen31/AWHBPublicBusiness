//
//  AWHBPBAdministrativeDataModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/26.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHBPBAdministrativeProvinceDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAdministrativeDataModel : NSObject

//
@property(nonatomic,copy)NSString *code;
//
@property(nonatomic,copy)NSString *name;

@property(nonatomic,copy)NSArray<AWHBPBAdministrativeProvinceDataModel *> *children;

@property(nonatomic,assign)BOOL isSelect;

@end

NS_ASSUME_NONNULL_END
