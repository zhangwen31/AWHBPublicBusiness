//
//  AWHBPBCarDetailMaintainViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarDetailMaintainViewController : AWHBBBaseViewController
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,assign)BOOL isNOCanPop;
@end

NS_ASSUME_NONNULL_END
