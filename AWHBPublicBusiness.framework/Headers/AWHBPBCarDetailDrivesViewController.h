//
//  AWHBPBCarDetailDrivesViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarDetailDrivesViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)AWHBBCarModel *model;
@end

NS_ASSUME_NONNULL_END
