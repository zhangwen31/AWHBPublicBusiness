//
//  AWHBPBSelectCarTypeView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/15.
//

#import <UIKit/UIKit.h>

//调整对应功能界面类型
typedef NS_ENUM(NSInteger, AWHBPBSelectCarType) {
    AWHBPBSelectCarTypePlateNumber                   = 0,    // 车牌号码
    AWHBPBSelectCarTypeTerminalNumber                = 1,    // 终端号码
    AWHBPBSelectCarTypeSIM                           = 2,    // SIM卡号
    AWHBPBSelectCarTypeTerminalMark                  = 3,    // 终端标识
};
typedef void(^AWHBPBSelectChangTypeBlock)(AWHBPBSelectCarType type);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectCarTypeView : UIView

@property (nonatomic, strong, readonly) NSArray *typeArr;

@property(nonatomic,assign)AWHBPBSelectCarType selectType;

@property(nonatomic,copy)AWHBPBSelectChangTypeBlock selectChangTypeBlock;

+ (NSString *)getCarTypeStr:(AWHBPBSelectCarType)selectType;

@end

NS_ASSUME_NONNULL_END
