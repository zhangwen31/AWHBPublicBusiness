//
//  AWHBPBGroupCarSelectNewViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/3/28.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AWHBPBGroupCarSelectNewDelegate <NSObject>

- (void)groupCarSelectData:(NSArray<AWHBBCarModel *> *)carArray;

@optional

- (void)backPage;

@end

@interface AWHBPBGroupCarSelectNewViewController : AWHBBBaseViewController

@property (nonatomic, weak) id<AWHBPBGroupCarSelectNewDelegate> delegate;

/// 选中的车辆
@property (nonatomic, strong) NSArray<NSString *> *selectCarIds;

/// 不能选择的车辆
@property (nonatomic, strong) NSArray<NSString *> *noSelectCarIds;

@property (nonatomic, assign) BOOL isVideoCar;

@end

NS_ASSUME_NONNULL_END
