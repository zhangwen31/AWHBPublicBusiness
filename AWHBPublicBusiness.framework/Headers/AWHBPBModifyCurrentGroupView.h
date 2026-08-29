//
//  AWHBPBModifyCurrentGroupView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/3/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AWHBPBCurrentGroupType) {
    /// 无
    AWHBPBCurrentGroupTypeNone      = 0,
    /// 修改
    AWHBPBCurrentGroupTypeModify    = 1,
    /// 删除
    AWHBPBCurrentGroupTypeDelete    = 2,
};

@protocol AWHBPBModifyCurrentGroupDelegate <NSObject>

- (void)selectGroupingName:(NSString *)groupName
                 carIdList:(NSArray<NSString *> *)carIdList
                      type:(AWHBPBCurrentGroupType)type
                completion:(void (^)(BOOL isSuccess, NSString *errorDescription))completion;

@end

@interface AWHBPBModifyCurrentGroupView : UIView

@property (nonatomic, strong, readonly) UILabel *titleLabel;

@property (nonatomic, weak) id<AWHBPBModifyCurrentGroupDelegate> delegate;

/// 不能选择的车辆
@property (nonatomic, strong) NSArray<NSString *> *noSelectCarIds;

/// 选择的车辆
@property (nonatomic, strong) NSArray<NSString *> *carIdList;

@property (nonatomic, strong) NSString *groupName;

@property (nonatomic, assign) BOOL isVideoCar;

@property (nonatomic, assign) AWHBPBCurrentGroupType type;

@property (nonatomic, copy) void (^closeClick)(void);

@end

NS_ASSUME_NONNULL_END
