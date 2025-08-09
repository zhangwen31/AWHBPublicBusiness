//
//  AWHBPBAddTerminalIViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/10.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBSelectTerminalModel.h>

@protocol AWHBPBAddTerminalDelegate <NSObject>

- (void)addTerminalWithModel:(AWHBPBSelectTerminalModel *)model;

@end

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddTerminalIViewController : AWHBBBaseViewController
/// 车队ID
@property (nonatomic,copy)NSString *teamId;
/// 车队名称
@property (nonatomic,copy)NSString *teamName;
/// 是否不能选择车队
@property (nonatomic,assign)BOOL isNoSelectTeam;

@property (nonatomic,weak) id<AWHBPBAddTerminalDelegate>delegate;

@end

NS_ASSUME_NONNULL_END
