//
//  AWHBPBGroupCarSelectViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/1/25.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AWHBPBGroupCarSelectDelegate <NSObject>

- (void)groupCarSelectData:(NSArray<AWHBBCarModel *> *)carArray;

@end

@interface AWHBPBGroupCarSelectViewController : AWHBBBaseViewController

@property (nonatomic, weak) id<AWHBPBGroupCarSelectDelegate> delegate;

/// 选中的车辆
@property (nonatomic, strong) NSArray<NSString *> *selectCarIds;

/// 不能选择的车辆
@property (nonatomic, strong) NSArray<NSString *> *noSelectCarIds;

@property (nonatomic, assign) BOOL isVideoCar;

@end

NS_ASSUME_NONNULL_END
