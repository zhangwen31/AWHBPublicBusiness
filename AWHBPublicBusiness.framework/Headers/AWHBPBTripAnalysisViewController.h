//
//  AWHBPBTripAnalysisViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/5/11.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBTripAnalysisModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTripAnalysisViewController : AWHBBBaseViewController

/// 行程
@property(nonatomic,strong)NSMutableArray *tripDataArray;

@property(nonatomic,strong)AWHBBCarModel *model;

@property (nonatomic, copy) NSString *filter;//静止点
@property (nonatomic, copy) NSString *filterInvalid;//过滤无效定位
@property (nonatomic, copy) NSString *filterAppend;//过滤补报

@end

NS_ASSUME_NONNULL_END
